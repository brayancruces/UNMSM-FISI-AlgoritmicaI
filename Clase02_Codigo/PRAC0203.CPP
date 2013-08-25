#include <iostream.h>
#include <conio.h>

 void main()
{float L1, L2, L3;

 cout<<"Ingrese el mayor lado del triangulo : "; cin>>L1;
 cout<<"Ingrese el otro lado del triangulo  : "; cin>>L2;
 cout<<"Ingrese el otro lado del triangulo  : "; cin>>L3;

 if(L1*L1<=L2*L2+L3*L3)
 {if(L1*L1==L2*L2+L3*L3)
  {cout<<"Es un triangulo rectangulo";}
  else
  {cout<<"Es un triangulo acutangulo";}
 }
 else
 {cout<<"Es un triangulo obtusangulo";}

 getch();
 clrscr();
}
