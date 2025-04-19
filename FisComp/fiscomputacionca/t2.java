	import java.io.*;

public class t2
{
	public static void main(String[] args)
	{
	Pizarra s1= new Pizarra(23, 57);
	System.out.println( "s1.- ancho = " + s1.ancho + " largo = " + s1.largo );
	System.out.println( s1.area(s1.ancho,s1.largo));

	}

}

class Pizarra
{
	
	int ancho,largo;
	
	int area(int paramx, int paramy)
	{
	return (paramx*paramy);
	}
	
	void inicio(int paramx,int paramy)
	{
	ancho=paramx;
	largo=paramy;
	}
	
	Pizarra(int paramx,int paramy)
	{
	ancho=paramx;
	largo=paramy;
	}
	
	Pizarra()
	{
	inicio(10,20);
	}

}
