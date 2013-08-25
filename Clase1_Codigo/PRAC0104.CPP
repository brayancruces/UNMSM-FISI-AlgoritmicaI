#include <iostream.h>
#include <conio.h>
#include <math.h>
#define PI 3.14159

 void main()
{float L1, L2, Ang, R;

 cout<<"Ingrese el valor del lado del triangulo : ";cin>>L1;
 cout<<"Ingrese el valor del lado del triangulo : ";cin>>L2;
 cout<<"Ingrese el valor del angulo en sexagesimal: ";cin>>Ang;

 R=L1*L2*sin(Ang*PI/180)/2;

 cout<<"El area del triangulo es : "<<R;

 getch();
 clrscr();
}
