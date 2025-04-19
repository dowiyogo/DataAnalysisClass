import java.io.*;

public class t4
{
	public static void main(String[] args)
	{
	Alumno pedro= new Alumno(25,"francisco");
	pedro.presentarse();
	pedro.nombre="rene";
	pedro.presentarse();
	}

}

class Alumno{
	int edad;
	String nombre;
	
	void presentarse(){
	System.out.println( "hola me llamo " + nombre+ " y tengo " +edad +" años" );
	}
	
	void inicio(int edad,String nombre){
	this.edad =edad;
	this.nombre=nombre;
	}
	
	Alumno(int edad,String nombre){
	this.edad =edad;
	this.nombre=nombre;
	}
	
	Alumno()	{
	inicio(0,"uname");
	}

}
