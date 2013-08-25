#include<iostream.h>
#include<conio.h>

 void main()
{int a , b , c , *p1 , *p2;

  p1=&a;
 *p1=1;
  p2=&b;
 *p2=2;
  p1=p2;
 *p1=0;
  p2=&c;
 *p2=3;
 *p1=1;
 cout<<"El valor de a es "<<a;
 cout<<"\nEl valor de b es "<<b;
 cout<<"\nEl valor de c es "<<c;
 getch();
 clrscr();
}