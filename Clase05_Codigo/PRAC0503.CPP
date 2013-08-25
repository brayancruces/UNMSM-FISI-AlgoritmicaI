#include <iostream.h>
#include <conio.h>

 int hallar_numero_fibonacci(int n);

 void main()
{int n, fibo;
 cout<<"Ingrese la ubicacion del numero fibonacci : "; cin>>n;

 fibo=hallar_numero_fibonacci(n);

 cout<<"El numero fibonacci es : "<<fibo;

 getch();
 clrscr();
}

 int hallar_numero_fibonacci(int n)
{int i=0;
 int fibo, fibo1=0, fibo2=1;

 if(n==1)
 { return 1; }
 else
 { while(i<n-1)
   { fibo=fibo1+fibo2;
     fibo1=fibo2;
     fibo2=fibo;
     i++;
   }
   return fibo;
 }
}













