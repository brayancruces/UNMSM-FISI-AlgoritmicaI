#include <iostream.h>
#include <conio.h>

 int hallar_mayor(int *vector, int n);
 int hallar_menor(int *vector, int n);
 int hallar_promedio(int *vector, int n);

 void main()
{int *v, i, mayor, menor;
 float promedio, cantidad;
 cout<<"Ingrese la cantidad de elementos del vector : "; cin>>cantidad;

 v=new int[cantidad];

 for(i=0;i<cantidad;i++)
 { cout<<"Ingrese el numero : "; cin>>v[i]; }

 mayor=hallar_mayor(v,cantidad);
 menor=hallar_menor(v,cantidad);
 promedio=hallar_promedio(v,cantidad);

 cout<<"El numero mayor es : "<<mayor;
 cout<<"\nEl numero menor es : "<<menor;
 cout<<"\nEl promedio de los numeros : "<<promedio;

 getch();
 clrscr();
}

 int hallar_mayor(int *vector, int n)
{int i, mayor=-999;

 for(i=0;i<n;i++)
 { if(vector[i]>mayor)
   { mayor=vector[i]; }
 }
 return mayor;
}

 int hallar_menor(int *vector, int n)
{int i, menor=999;

 for(i=0;i<n;i++)
 { if(vector[i]<menor)
   { menor=vector[i]; }
 }
 return menor;
}

 int hallar_promedio(int *vector, int n)
{int i, suma=0, promedio;

 for(i=0;i<n;i++)
 { suma=suma+vector[i]; }
 promedio=suma/n;
 return promedio;
}


