#include <iostream.h>
#include <conio.h>

 void main()
{int v[20], i=1;
 int fibo, fibo1=0, fibo2=1;

 v[0]=1;
 while(i<20)
 { fibo=fibo1+fibo2;
   v[i]=fibo;
   fibo1=fibo2;
   fibo2=fibo;
   i++;
 }

 cout<<"Los elementos del vector es : \n";

 for(i=0;i<20;i++)
 { cout<<v[i]<<" "; }

 getch();
 clrscr();
}














