#include <iostream.h>
#include <conio.h>

 void main()
{int n, i, j;

 do
 {cout<<"Ingrese el numero : "; cin>>n;
  clrscr();
 }while(n<1||n>9);

 for(i=0;i<n;i++)
 { for(j=0;j<i+1;j++)
   { gotoxy(39-j,5+i);
     cout<<i+1;
   }
   gotoxy(40,5+i); cout<<"*";
   for(j=0;j<i+1;j++)
   { gotoxy(41+j,5+i);
     cout<<i+1;
   }
 }

 getch();
 clrscr();
}
