#include <iostream.h>
#include <conio.h>

 void main()
{int posicion;

 cout<<"Ingrese la posicion del mes dentro del a�o : "; cin>>posicion;

 switch(posicion)
 {case  1: cout<<"Enero";break;
  case  2: cout<<"Febrero";break;
  case  3: cout<<"Marzo";break;
  case  4: cout<<"Abril";break;
  case  5: cout<<"Mayo";break;
  case  6: cout<<"Junio";break;
  case  7: cout<<"Julio";break;
  case  8: cout<<"Agosto";break;
  case  9: cout<<"Setiembre";break;
  case 10: cout<<"Octubre";break;
  case 11: cout<<"Noviembre";break;
  case 12: cout<<"Diciembre";break;
  default: cout<<"� La posicion no existe dentro del a�o !";
 }

 getch();
 clrscr();
}

