#include <iostream.h>
#include <conio.h>

 void main()
{int n, fibo, fibo1=0, fibo2=1;

 cout<<"Ingrese el numero : "; cin>>n;

 do
 { fibo=fibo1+fibo2;
   fibo1=fibo2;
   fibo2=fibo;
 }while(fibo<n);

 if(fibo==n)
 { cout<<"La terna de n£meros fibonacci es : ";
   cout<<fibo1<<" "<<fibo2<<" "<<fibo1+fibo2;
 }
 else
 { cout<<"El n£mero ingresado no pertenece a la serie fibonacci"; }

 getch();
 clrscr();
}
