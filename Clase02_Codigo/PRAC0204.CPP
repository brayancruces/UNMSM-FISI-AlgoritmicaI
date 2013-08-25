#include <iostream.h>
#include <conio.h>

 void main()
{float x0, y0, x1, y1;
 float m1, m2;

 cout<<"Ingrese los datos de la recta R1:\n";
 cout<<"Ingrese las coordenadas del primer punto \n";
 cout<<"Ingrese la abscisa  : "; cin>>x0;
 cout<<"Ingrese la ordenada : "; cin>>y0;
 cout<<"Ingrese las coordenadas del segundo punto \n";
 cout<<"Ingrese la abscisa  : "; cin>>x1;
 cout<<"Ingrese la ordenada : "; cin>>y1;

 m1=(y1-y0)/(x1-x0);

 cout<<"Ingrese los datos de la recta R2:\n";
 cout<<"Ingrese las coordenadas del primer punto \n";
 cout<<"Ingrese la abscisa  : "; cin>>x0;
 cout<<"Ingrese la ordenada : "; cin>>y0;
 cout<<"Ingrese las coordenadas del segundo punto \n";
 cout<<"Ingrese la abscisa  : "; cin>>x1;
 cout<<"Ingrese la ordenada : "; cin>>y1;

 m2=(y1-y0)/(x1-x0);

 if(m1==m2)
 {cout<<"Las rectas son paralelas";}
 else
 {cout<<"Las rectas no son paralelas";}

 getch();
 clrscr();
}
