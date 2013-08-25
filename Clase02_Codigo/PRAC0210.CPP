#include <iostream.h>
#include <conio.h>

 void main()
{int codigo;

 cout<<"Ingrese el codigo del articulo : "; cin>>codigo;

 switch(codigo)
 {case  10: cout<<"Precio del articulo = 100.50";break;
  case  15: cout<<"Precio del articulo = 300.00";break;
  case  20: cout<<"Precio del articulo = 120.20";break;
  case  25: cout<<"Precio del articulo = 143.50";break;
  case  30: cout<<"Precio del articulo = 2550.25";break;
  default: cout<<"­ El codigo de articulo no existe !";
 }

 getch();
 clrscr();
}

