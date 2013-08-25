#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

 void main()
{float num, den, R;
 cout<<"Ingrese el numerador   : ";cin>>num;
 cout<<"Ingrese el denominador : ";cin>>den;

 if(den!=0)
 {R=num/den;
  cout<<"El resultado de la division es : "<<R;
 }
 else
 {cout<<"La division no existe";}

 getch();
 clrscr();
}
