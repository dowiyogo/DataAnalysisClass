#ifndef DECUPLET_CLASS 

#define DECUPLET_CLASS 1

#include <string>

class decuplet{

public:

  int charge;
  std::string name;

  
  decuplet(){};
  
  decuplet(int ,const char*);
  
  ~decuplet(){};
  
  void ChangeParticle(const char*);
  void ChangeCharge(int);


};

#endif //DECUPLET_CLASS 


