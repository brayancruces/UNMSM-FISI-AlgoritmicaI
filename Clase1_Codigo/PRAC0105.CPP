#include <iostream.h>
#include <conio.h>
#include <math.h>

 void main()
{float capital,tasa, R;
 int   tiempo;

 cout<<"Ingrese el capital        : ";cin>>capital;
 cout<<"Ingrese el tiempo         : ";cin>>tiempo;
 cout<<"Ingrese la tasa de interes: ";cin>>tasa;

 R=capital*(1+tasa*tiempo/100);
 cout<<"\nEl Monto Final a Interes Simle es     : "<<R;
 R=capital*pow((1+tasa/100),tiempo);
 cout<<"\nEl Monto Final a Interes Compuesto es : "<<R;

 getch();
 clrscr();
}
