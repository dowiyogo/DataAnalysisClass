#include <iostream>
#include <string>
#include "Decuplet_class.hh"




int main(){

  decuplet* baryon0 = new decuplet();
  std::cout << baryon0->name << " " << baryon0->charge << std::endl;
  
  baryon0->name = "Sigma";
  baryon0->charge = 1;

  std::cout << baryon0->name << " " << baryon0->charge << std::endl;

  decuplet* baryon1 = new decuplet(2, "Delta"); 
  


  baryon1->ChangeParticle("Omega");
  baryon1->ChangeCharge(-1);
  
  return 0;
}

decuplet::decuplet(int charge, const char* name){
  
  this->charge = charge;
  this->name = std::string(name);
  
  std::cout << "Creating baryon: " << this->name << " with  charge: " << this->charge << std::endl;
}


void decuplet::ChangeParticle(const char* name){
  this->name.assign(name);

  std::cout << "The Baryon has changed its name to: " << this->name << std::endl;
}

void decuplet::ChangeCharge(int charge){
  this->charge = charge;
  std::cout << "The Baryon has changed its charge to: " << this->charge << std::endl;
}
