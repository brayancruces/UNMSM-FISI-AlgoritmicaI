#include <iostream.h>
#include <conio.h>

 void main()
{int *v, i, cantidad, estado=0, numero;
 cout<<"Ingrese la cantidad de elementos del vector : "; cin>>cantidad;

 v=new int[cantidad];

 for(i=0;i<cantidad;i++)
 { cout<<"Ingrese el numero : "; cin>>v[i]; }

 cout<<"Ingrese el numero a buscar : "; cin>>numero;
 i=0;

 while(i<cantidad&&estado==0)
 { if(v[i]==numero)
   { estado=1;
     cout<<"El numero "<<numero;
     cout<<" se encuentra en la posicion "<<i<<" del vector";
   }
   i++;
 }

 if(estado==0)
 { cout<<"El numero no se encuentra en el vector "; }

 getch();
 clrscr();
}
