#include <iostream.h>
#include <conio.h>

 void main()
{float ci1, cs1, ci2, cs2;

 cout<<"Ingrese los datos de la region Reg1:\n";
 cout<<"Ingrese la cota inferior : "; cin>>ci1;
 cout<<"Ingrese la cota superior : "; cin>>cs1;

 cout<<"Ingrese los datos de la region Reg2:\n";
 cout<<"Ingrese la cota inferior : "; cin>>ci2;
 cout<<"Ingrese la cota superior : "; cin>>cs2;


 if(ci1<=ci2&&ci2<=cs1&&ci2<=cs1&&cs1<=cs2)
 {cout<<"La interseccion de las regiones es la region con :\n";
  cout<<"Cota inferior : "<<ci2;
  cout<<"\nCota superior : "<<cs1;
 }
 else
 {cout<<"Las regiones no se intersectan";}

 if(ci1<=ci2&&ci2<=cs1&&ci1<=cs2&&cs2<=cs1)
 {cout<<"\nLa interseccion de las regiones es la region con :\n";
  cout<<"Cota inferior : "<<ci2;
  cout<<"\nCota superior : "<<cs2;
 }

 getch();
 clrscr();
}
