#include <iostream.h>
#include <conio.h>

 void main()
{int *v, i, mayor=0, menor=999;
 float promedio, suma=0, cantidad;
 cout<<"Ingrese la cantidad de elementos del vector : "; cin>>cantidad;

 v=new int[cantidad];

 for(i=0;i<cantidad;i++)
 { cout<<"Ingrese el numero : "; cin>>v[i]; }

 for(i=0;i<cantidad;i++)
 {
   if(v[i]>mayor)
   { mayor=v[i]; }
   if(v[i]<menor)
   { menor=v[i];}
   suma=suma+v[i];
 }
 promedio=suma/cantidad;

 cout<<"El numero mayor es : "<<mayor;
 cout<<"\nEl numero menor es : "<<menor;
 cout<<"\nEl promedio de  los numeros : "<<promedio;

 getch();
 clrscr();
}
