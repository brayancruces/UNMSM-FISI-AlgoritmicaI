#include <iostream.h>
#include <conio.h>

 float fibonacci(int n)
{int fibo;

 if(n==1||n==2)
 { fibo=1; }
 else
 { fibo=fibonacci(n-2)+fibonacci(n-1); }

 return fibo;
}

 void main()
{int cantidad;

 cout<<"Numero fibonacci :\n";
 cout<<"Ingrese la ubicacion del numero : "; cin>>cantidad;

 cout<<"El numero fibonacci es : "<<fibonacci(cantidad);

 getch();
 clrscr();
}