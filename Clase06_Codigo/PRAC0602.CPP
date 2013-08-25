#include<iostream.h>
#include<conio.h>

 void main()
{int *ptr, a;
 ptr=&a;
 a = a + 10;
 *ptr = *ptr + 10;

 if( a < 20 )
 { cout<<"a es menor que 20"; }
 else
 { cout<<"a es mayor o igual a 20"; }
 getch();
 clrscr();
}