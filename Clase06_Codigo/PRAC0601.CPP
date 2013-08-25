#include<iostream.h>
#include<conio.h>

 void main()
{int x=5;
 x+=2;
 int *ap1=&x;
 *ap1=x+*ap1;
 int *ap2=ap1;
 *ap1=2*(*ap2)/(*ap1);
 cout<<"El valor de x es : "<<x;
 getch();
 clrscr();
}