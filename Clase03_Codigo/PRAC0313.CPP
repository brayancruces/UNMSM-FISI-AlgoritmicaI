#include <iostream.h>
#include <conio.h>
#include <math.h>
#define E 0.00000001

 void main()
{float A=0, B, M, cuad, num;

 cout<<"Ingrese el numero : "; cin>>num;

 B=num;
 do
 { M=(A+B)/2;
   cuad=pow(M,2);
   if(cuad>num)
   {B=M;}
   else
   {A=M;}
 }while(abs(num-cuad)>E);

 cout<<"La raiz cuadrada del numero "<<num<<" es : "<<M;

 getch();
 clrscr();
}
