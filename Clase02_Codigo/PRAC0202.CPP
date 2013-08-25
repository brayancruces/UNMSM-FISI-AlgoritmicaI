#include <iostream.h>
#include <conio.h>

 void main()
{int num1, num2, r;

 cout<<"Ingrese el primer numero  : "; cin>>num1;
 cout<<"Ingrese el segundo numero : "; cin>>num2;

 if(num2!=0)
 {r=num1%num2;
  cout<<"El residuo de la division es : "<<r;}
 else
 {cout<<"No existe la division";}

 getch();
 clrscr();
}
