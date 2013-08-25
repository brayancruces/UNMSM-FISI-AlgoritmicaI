#include <iostream.h>
#include <conio.h>

 void main()
{int i, n=1;
 float E=0.0001, suma=1, numero, pot=1, fact=1;

 cout<<"Ingrese el numero : "; cin>>numero;

 do
 { for(i=0;i<n;i++)
   { pot=pot*numero; }

   for(i=1;i<=n;i++)
   { fact=fact*i; }

   suma=suma+pot/fact;
   n++;
 }while(pot/fact>E);

 cout<<"El valor de E("<<numero<<") es : "<<suma;
 getch();
 clrscr();
}
