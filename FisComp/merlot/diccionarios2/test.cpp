int test(){
gSystem->Load("libMyLib.so");
Alumno *g=new Alumno(10,123);
g->ver();
Fila *u=new Fila();
u->buildFila();
cout<<u->t->fecha<<endl;
delete u;
delete g;
return 0;
}
