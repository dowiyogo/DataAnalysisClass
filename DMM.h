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
