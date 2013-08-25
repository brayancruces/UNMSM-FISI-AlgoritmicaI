#include <iostream.h>
#include <conio.h>

 float factorial(int n)
{float facto;

 if(n>0)
 { facto=n*factorial(n-1); }
 else
 { facto=1; }

 return facto;
}

 void main()
{int numero;

 cout<<"Ingrese el numero : "; cin>>numero;

 cout<<"El factorial de "<<numero<<" es : "<<factorial(numero);

 getch();
 clrscr();
}