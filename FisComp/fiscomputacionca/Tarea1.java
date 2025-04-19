import java.io.*;

public class Tarea1
{
	

 	public static void main(String[] args)
	{
MiPunto p1 = new MiPunto(10, 20);

System.out.println( "p1.- x = " + p1.x + " y = " + p1.y );
System.out.println( p1.metodoSuma(p1.x,p1.y));
		
	}
	
}


class MiPunto
{

		int x, y;

		int metodoSuma( int paramX, int paramY )
		{
		return ( paramX + paramY );
		}

		double distancia(int x, int y) 
		{
		int dx= this.x-3;
		int dy = this.y-4;
		return Math.sqrt(dx*dx + dy*dy);
		}

		void metodoVacio( )
		{
  		}

		void inicia( int paramX, int paramY ) 
		{
		x = paramX;
		y = paramY;
		}

		void inicia2( int x, int y ) 
		{
		x = x; // Ojo, no modificamos la variable de instancia!!!
		this.y = y; // Modificamos la variable de instancia!!!
		}

		MiPunto( int paramX, int paramY )
		{
		this.x = paramX; // Este this se puede omitir
		y = paramY; // No hace falta this
		}

		MiPunto() 
		{
		inicia(-1,-1); //Por defecto ; this(-1,-1) hace lo mismo
		}

}