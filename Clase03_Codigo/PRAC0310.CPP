#include <iostream.h>
#include <conio.h>
#include <math.h>

 void main()
{int i;
 float n, numero, MH, MG, suma=0, producto=1;

 cout<<"Ingrese la cantidad de numeros : "; cin>>n;

 for(i=0;i<n;i++)
 {
   cout<<"Ingrese el numero : "; cin>>numero;

   suma=suma+1/numero;
   producto=producto*numero;

 }

 MH=n/suma;
 MG=pow(producto,1/n);

 cout<<"La Media Armonica es : "<<MH;
 cout<<"\nLa Media Geometrica es : "<<MG;
 cout<<"\nLa diferencia entre la Media Armonica y la Media Geometrica es : ";
 cout<<MH-MG;

 getch();
 clrscr();
}
