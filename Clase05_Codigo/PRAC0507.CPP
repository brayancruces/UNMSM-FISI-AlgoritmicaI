#include <iostream.h>
#include <conio.h>

 float hallar_cuadrados(int n)
{float cuadr;

 if(n>0)
 {
   cuadr=n*n+hallar_cuadrados(n-1);
 }
 else
 { cuadr=0; }

 return cuadr;
}

 void main()
{int n;
 float cantidad;

 cout<<"Ingrese la dimension del tablero : "; cin>>n;

 cantidad=hallar_cuadrados(n);

 cout<<"La cantidad de cuadrados que existe en el tablero es : "<<cantidad;

 getch();
 clrscr();
}
