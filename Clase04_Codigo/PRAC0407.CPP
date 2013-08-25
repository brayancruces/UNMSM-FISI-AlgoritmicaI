#include <iostream.h>
#include <conio.h>

 void main()
{int *v, n, i, j, aux, med;

 cout<<"Ingrese la cantidad de n£meros a ingresar : "; cin>>n;

 for(i=0;i<n;i++)
 { cout<<"Ingrese el numero : "; cin>>v[i]; }

 for(i=0;i<n;i++)
 { for(j=0;j<n-1;j++)
   { if(v[j]>v[j+1])
     {aux=v[j];
      v[j]=v[j+1];
      v[j+1]=aux;
     }
   }
 }

 if(n%2==0)
 { med=(v[n/2-1]+v[n/2])/2; }
 else
 { med=v[(n-1)/2]; }

 cout<<"La mediana de los numeros es : "<<med;

 getch();
 clrscr();
}














