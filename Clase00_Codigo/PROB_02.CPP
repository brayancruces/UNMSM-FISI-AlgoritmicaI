#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 void main()
{int L1, L2, L3;
 float sp, R;
 cout<<"Ingrese el primer lado  : ";cin>>L1;
 cout<<"Ingrese el segundo lado : ";cin>>L2;
 cout<<"Ingrese el tercer lado  : ";cin>>L3;

 sp=(L1+L2+L3)/2;
 R=sqrt(sp*(sp-L1)*(sp-L2)*(sp-L3));

 cout<<"El area del triangulo es : "<<R;
 getch();
 clrscr();
}
