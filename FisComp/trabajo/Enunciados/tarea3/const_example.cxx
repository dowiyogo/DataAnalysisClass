#include <iostream>
#include <string>

class IO{

public:
  
  int edad;
  const std::string* instrumento;
  const std::string nombre;

  IO();
  ~IO();

  void Presentarse() ;

};

IO::IO():edad(55),nombre("Bruce"){
  
   this->instrumento = new std::string("vocalista");
}

IO::~IO(){
  delete instrumento;
}

void IO::Presentarse() {

  std::cout << "Mi nombre es " << this->nombre << " ,tengo " << (this->edad)++ << " años y soy " << *(this->instrumento) << std::endl;
  //
}



int main(){

  IO* Dick = new IO();
  //(Dick->nombre)="Bruce";
  Dick->Presentarse();
  //Dick->edad++;
  // (Dick->nombre).assign("Steve");
  delete Dick;


}
