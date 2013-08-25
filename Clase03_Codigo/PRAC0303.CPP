#include <iostream.h>
#include <conio.h>

 void main()
{float num, pot, R=1;

 cout<<"Ingrese el numero   : "; cin>>num;
 cout<<"Ingrese la potencia : "; cin>>pot;

 for(int i=0;i<pot;i++)
 { R=R*num; }

 cout<<"La potencia de "<<num<<" al "<<pot<<" es : "<<R;

 getch();
 clrscr();
}
