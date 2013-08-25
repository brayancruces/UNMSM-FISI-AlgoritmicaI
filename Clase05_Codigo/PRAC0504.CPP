#include <iostream.h>
#include <conio.h>
#define PI 3.14159

 float potencia(float a, int b);
 int factorial(int n);

 void main()
{int i, j, cantidad;
 float suma=0, num, numero;

 cout<<"Ingrese el angulo en grados sexagesimales   : "; cin>>num;
 cout<<"Ingrese la cantidad de terminos de la serie : "; cin>>cantidad;

 numero=num*PI/180;

 for(i=0;i<cantidad;i++)
 {
   if(i%2==0)
   {suma=suma+potencia(numero,2*(i+1)-1)/factorial(2*(i+1)-1);}
   else
   {suma=suma-potencia(numero,2*(i+1)-1)/factorial(2*(i+1)-1);}
 }

 cout<<"El valor de Sen("<<num<<") es : "<<suma;
 getch();
 clrscr();
}

 float potencia(float a, int b)
{ int i, pot=1;

  for(i=0;i<b;i++)
  { pot=pot*a; }

  return pot;
}

 int factorial(int n)
{int i, fact=1;

 for(i=1;i<=n;i++)
 { fact=fact*i; }

 return fact;
}