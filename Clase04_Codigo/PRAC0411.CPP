#include <iostream.h>
#include <conio.h>

 void main()
{int **A, **B, **C, f1, c1, f2, c2, i, j;
 int suma, h, k;
 cout<<"Ingrese el numero de filas de la primera matriz cuadrada    : "; cin>>f1;
 cout<<"Ingrese el numero de columnas de la primera matriz cuadrada : "; cin>>c1;

 A=new int *[c1];
 for(i=0;i<c1;i++)
 { A[i]=new int [f1]; }

 cout<<"Ingrese los elementos de la matriz A : \n";

 for(i=0;i<f1;i++)
 { for(j=0;j<c1;j++)
   { cout<<"A["<<i<<"]["<<j<<"] = "; cin>>A[i][j]; }
 }
 cout<<"Ingrese el numero de filas de la segunda matriz cuadrada    : "; cin>>f2;
 cout<<"Ingrese el numero de columnas de la segunda matriz cuadrada : "; cin>>c2;

 B=new int *[c2];
 for(i=0;i<c2;i++)
 { B[i]=new int [f2]; }

 cout<<"Ingrese los elementos de la matriz B : \n";

 for(i=0;i<f2;i++)
 { for(j=0;j<c2;j++)
   { cout<<"B["<<i<<"]["<<j<<"] = "; cin>>B[i][j]; }
 }

 C=new int *[c2];
 for(i=0;i<c2;i++)
 { C[i]=new int [f1]; }

 if(c1==f2)
 {
  h=0;
  do
  { k=0;
    do
    { suma=0;
      for(i=0;i<c1;i++)
      {
	suma=suma+A[h][i]*B[i][k];
      }
      C[h][k]=suma;
      k++;
    }while(k<c2);
    h++;
  }while(h<f1);

  cout<<"El resultado de la multiplicacion de matrices es : \n";

  for(i=0;i<f1;i++)
  { for(j=0;j<c2;j++)
    { cout<<C[i][j]<<" "; }
    cout<<"\n";
  }

 }
 else
 { cout<<"No se puede realizar el producto de las matrices"; }

 getch();
 clrscr();
}














