#include <iostream.h>
#include <conio.h>

 void main()
{int **m, n, i, j, cont=0;

 cout<<"Ingrese el numero de filas de la matriz cuadrada : "; cin>>n;

 m=new int *[n];
 for(i=0;i<n;i++)
 { m[i]=new int [n]; }

 cout<<"Ingrese los elementos de la matriz : \n";

 for(i=0;i<n;i++)
 { for(j=0;j<n;j++)
   { cout<<"m["<<i<<"]["<<j<<"] = "; cin>>m[i][j]; }
 }

 for(i=0;i<n;i++)
 { for(j=0;j<n;j++)
   { if(m[i][j]==m[j][i])
     { cont++; }
   }
 }

 if(cont==n*n)
 {cout<<"La matriz es simetrica";}
 else
 {cout<<"La matriz no es simetrica";}

 getch();
 clrscr();
}














