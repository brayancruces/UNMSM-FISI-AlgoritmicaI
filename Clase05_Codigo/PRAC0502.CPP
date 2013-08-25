#include <iostream.h>
#include <conio.h>

 void actualizar_vector(int *v, int n);

 void main()
{int *v, i, cantidad;
 cout<<"Ingrese la cantidad de elementos del vector : "; cin>>cantidad;

 v=new int[cantidad];

 for(i=0;i<cantidad;i++)
 { cout<<"Ingrese el numero : "; cin>>v[i]; }

 actualizar_vector(v, cantidad);

 cout<<"Los elementos del vector son : \n";

 for(i=0;i<cantidad;i++)
 { if(v[i]!=-99)
   { cout<<v[i]<<" "; }
 }

 getch();
 clrscr();
}

 void actualizar_vector(int *v, int n)
{int i, j, aux;

 for(i=0;i<n;i++)
 { for(j=0;j<n-1;j++)
   { if(v[j]>v[j+1])
     { aux=v[j];
       v[j]=v[j+1];
       v[j+1]=aux;
     }
   }
 }

 for(i=0;i<n;i++)
 { aux=v[i];
   for(j=i+1;j<n;j++)
   { if(aux==v[j])
     v[j]=-99;
   }
 }

}













