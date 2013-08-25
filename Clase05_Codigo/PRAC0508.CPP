#include <iostream.h>
#include <conio.h>

 void intercambiar(int &num1, int &num2)
{ int aux;

  aux=num2;
  num2=num1;
  num1=aux;

}

 void main()
{int num1, num2;

 cout<<"Intercambiar numeros:\n";
 cout<<"Ingrese el primer numero  : "; cin>>num1;
 cout<<"Ingrese el segundo numero : "; cin>>num2;

 intercambiar(num1,num2);

 cout<<"El primer numero es : "<<num1;
 cout<<"\nEl segundo numero es : "<<num2;

 getch();
 clrscr();
}