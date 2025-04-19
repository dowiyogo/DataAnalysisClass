int test(){
gSystem->Load("libMyLib.so");
Alumno *t=new Alumno(10,"vicente");
t->ver();
delete t;
return (0);
}
