#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

 void main()
{int anio, mes, dia, R;
 cout<<"Ingrese la cantidad de anios : ";cin>>anio;
 cout<<"Ingrese la cantidad de meses : ";cin>>mes;
 cout<<"Ingrese la cantidad de dias  : ";cin>>dia;

 R=anio*12*30+mes*30+dia;

 cout<<"La edad en dias es : "<<R;
 getch();
 clrscr();
}
