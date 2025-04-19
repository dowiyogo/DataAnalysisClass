Serial::Serial(int id = 0);
std::string Serial::Read(int n = -1);
int Serial::Write(std::string msg);

// including sleep() for windows and unix. unsigned sleep(unsigned seconds)
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include "DMM.h"
#include "DL.h"
#include "SW.h"
#include "SG.h"
#include <fstream>
#include <iostream>
#define MIN_IDC 0.4
#define MAX_IDC 1.5
#define NEVPERSIG 1000
class DMM{
public:
  DMM(){Serial::Serial(int id = 0);}
private:
  float ReadCurrent(){
    int resp = Serial::Write(":INSTR:IDC?");
    float current = 0.;
    std::stringstream Stream(Serial::Read(int n = 0));
    Stream >> current;
    return current;
  }  
}

int main(){
    unsigned long nev = 0;
    std::ofstream ofile("datos_DAQ.txt");
    DMM *dmm = new DMM();
    DL *dl = new DL();
    SW *sw = new SW();
    SG *sg = new SG();
    float idc = -1;
    while (true){
    idc = dmm->ReadCurrent();
    if( !(MIN_IDC < idc && idc < MAX_IDC) ){
        SW -> TurnOff();
        sleep(30);
        SW->TurnOn();
        sleep(5);
        continue;
    }
    DL -> GetData();
    ofile<<"event: "<<nev<<std::endl;
    ofile<<"I DC: "<<idc<<std::endl;
    ofile<<"Data: "<<DL->Data<<std::endl;
    nev++;
    if (!(nev % NEVPERSIG) && nev)
        SG->SetNext();
    }
    return 0;
}