#include <iostream.h>
#include <conio.h>

 void main()
{int *v1, *v2, *v3;
 int i, j , k , h;
 int g1, g2, g3;

 cout<<"Ingrese el grado del primer polinomio : ";  cin>>g1;

 v1=new int[g1+1];

 for(i=0;i<g1+1;i++)
 { cout<<"Ingrese el coeficiente : "; cin>>v1[i]; }

 cout<<"Ingrese el grado del segundo polinomio : ";  cin>>g2;

 v2=new int[g2+1];

 for(i=0;i<g2+1;i++)
 { cout<<"Ingrese el coeficiente : "; cin>>v2[i]; }

 g3=g1+g2;
 v3=new int [g3+1];
 for(i=0;i<g3+1;i++)
 { v3[i]=0; }

 h=0;
 for(i=g2;i>=0;i--)
 { k=0;
   for(j=g1;j>=0;j--)
   { v3[g3-k-h]=v3[g3-k-h]+v2[i]*v1[j];
     k++;
   }
   h++;
 }

 cout<<"El producto de los polinomios es : \n";
 for(i=0;i<g3;i++)
 { cout<<v3[i]<<" x"<<g3-i<<" + "; }
 cout<<v3[g3]<<" x0";

 getch();
 clrscr();
}














