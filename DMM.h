class DMM{
public:
  //noté este error que cometí
  //creo que debería haber escrito:
  // DMM(){Serial::Serial *DMM = new Serial::Serial(int id = 0);}
  DMM(){Serial::Serial(int id = 0);}
private:
  float ReadCurrent(){
    //aquí también
    //int resp = DMM->Serial::Write(":INSTR:IDC?");
    int resp = Serial::Write(":INSTR:IDC?");
    float current = 0.;
    //aquí también
    //std::stringstream Stream(DMM->Serial::Read(int n = 0));
    std::stringstream Stream(Serial::Read(int n = 0));
    Stream >> current;
    return current;
  }  
}
