#include <iostream.h>
#include <conio.h>

 void main()
{char v[11]="ALGORITMICA";
 char caracter;
 int i=0, estado=0;

 cout<<"Ingrese el texto : \n";
 do
 {caracter=getch();
  cout<<caracter;
  if(v[i]==caracter)
  {
    i++;
    if(i==11)
    { estado=1; }
  }

 }while(estado==0);

 cout<<"\nLa palabra ALGORITMICA ha sido detectada...";

 getch();
 clrscr();
}














