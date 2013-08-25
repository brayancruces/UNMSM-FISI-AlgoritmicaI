#include <iostream.h>
#include <conio.h>

 void main()
{int num, cont=0, i;

 cout<<"Ingrese el numero   : "; cin>>num;

 if(num!=1)
 { for(i=1;i<=num;i++)
   { if(num%i==0)
     { cont++; }
   }

   if(cont==2)
   { cout<<"El numero ingresado es primo"; }
   else
   { cout<<"El numero ingresado no es primo"; }
 }
 else
 { cout<<"El numero ingresado no es primo"; }

 getch();
 clrscr();
}
