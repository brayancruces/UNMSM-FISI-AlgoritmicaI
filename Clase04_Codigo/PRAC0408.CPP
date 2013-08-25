#include <iostream.h>
#include <conio.h>

void main()
{int *V;
 int n, i, j, cont1, cont2, aux, mayor=0, moda;

 cout<<"Ingrese la cantidad de elementos del vector : ";  cin>>n;

 V=new int[n];

 cout<<"Ingrese los elementos del vector : \n";

 for(i=0;i<n;i++)
 { cout<<"V["<<i<<"] = "; cin>>V[i]; }

 for(i=0;i<n;i++)
 { aux=V[i];
   cont1=0;
   for(j=0;j<n;j++)
   { if(aux==V[j])
     { cont1++; }
   }

   if(cont1>mayor)
   { mayor=cont1;
     moda=aux;
   }
 }

 cont2=0;

 for(i=0;i<n;i++)
 { aux=V[i];
   if(aux!=' ')
   {cont1=0;
    for(j=0;j<n;j++)
    { if(aux==V[j])
      { cont1++;
	V[j]=' ';
      }
    }

    if(cont1==mayor)
    { cont2++; }
   }
 }

 if(cont2==1)
 { cout<<"\nLa moda es : "<<moda<<"\n\n"; }
 else
 { cout<<"\nNo existe moda \n\n"; }

 getch();
 clrscr();
}
