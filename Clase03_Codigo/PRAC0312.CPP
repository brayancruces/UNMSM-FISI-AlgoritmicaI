#include <iostream.h>
#include <conio.h>
#define PI 3.14159

 void main()
{int i, j, cantidad;
 float suma=0, num, numero, pot=1, fact=1;

 cout<<"Ingrese el angulo en grados sexagesimales   : "; cin>>num;
 cout<<"Ingrese la cantidad de terminos de la serie : "; cin>>cantidad;

 numero=num*PI/180;

 for(i=0;i<cantidad;i++)
 {
   for(j=0;j<2*(i+1)-1;j++)
   { pot=pot*numero; }

   for(j=1;j<=2*(i+1)-1;j++)
   { fact=fact*j; }

   if(i%2==0)
   {suma=suma+pot/fact;}
   else
   {suma=suma-pot/fact;}
 }

 cout<<"El valor de Sen("<<num<<") es : "<<suma;
 getch();
 clrscr();
}
