#include <iostream.h>
#include <conio.h>

 void main()
{int **A, **B, n, i, j;

 cout<<"Ingrese el numero de filas de la matriz cuadrada : "; cin>>n;

 A=new int *[n];
 for(i=0;i<n;i++)
 { A[i]=new int [n]; }

 B=new int *[n];
 for(i=0;i<n;i++)
 { B[i]=new int [n]; }

 cout<<"Ingrese los elementos de la matriz : \n";

 for(i=0;i<n;i++)
 { for(j=0;j<n;j++)
   { cout<<"A["<<i<<"]["<<j<<"] = "; cin>>A[i][j]; }
 }

 for(i=0;i<n;i++)
 { for(j=0;j<n;j++)
   { B[i][j]=A[j][i]; }
 }

 cout<<"La matriz transpuesta de A es : \n";
 for(i=0;i<n;i++)
 { for(j=0;j<n;j++)
   { cout<<B[i][j]<<" "; }
   cout<<"\n";
 }

 getch();
 clrscr();
}














