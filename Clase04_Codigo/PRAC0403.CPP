#include <iostream.h>
#include <conio.h>

 void main()
{int *v, i, j, cantidad, aux;
 cout<<"Ingrese la cantidad de elementos del vector : "; cin>>cantidad;

 v=new int[cantidad];

 for(i=0;i<cantidad;i++)
 { cout<<"Ingrese el numero : "; cin>>v[i]; }

 for(i=0;i<cantidad;i++)
 { for(j=0;j<cantidad-1;j++)
   { if(v[j]>v[j+1])
     { aux=v[j];
       v[j]=v[j+1];
       v[j+1]=aux;
     }
   }
 }

 for(i=0;i<cantidad;i++)
 { aux=v[i];
   for(j=i+1;j<cantidad;j++)
   { if(aux==v[j])
     v[j]=-99;
   }
 }

 cout<<"Los elementos del vector son : \n";

 for(i=0;i<cantidad;i++)
 { if(v[i]!=-99)
   { cout<<v[i]<<" "; }
 }

 getch();
 clrscr();
}














