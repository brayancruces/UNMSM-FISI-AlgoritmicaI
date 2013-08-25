#include <iostream.h>
#include <conio.h>

 void main()
{int hora, minuto, segundo, R;
 cout<<"Ingrese las Horas    :";cin>>hora;
 cout<<"Ingrese los Minutos  :";cin>>minuto;
 cout<<"Ingrese los Segundos :";cin>>segundo;

 R=hora*3600+minuto*60+segundo;

 cout<<"La hora en segundos es :"<<R;
 getch();
 clrscr();
}
