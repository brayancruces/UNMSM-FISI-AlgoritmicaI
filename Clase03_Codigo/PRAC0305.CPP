#include <iostream.h>
#include <conio.h>

 void main()
{int opcion;
 int x=30, y=7;
 float num1, num2, R;
 do
 {do
  {clrscr();
   gotoxy(x,y);    cout<<"ษอออออออออออออออออออออออป";
   gotoxy(x,y+1);  cout<<"บ          MENU         บ";
   gotoxy(x,y+2);  cout<<"บ                       บ";
   gotoxy(x,y+3);  cout<<"บ SUMA..............[1] บ";
   gotoxy(x,y+4);  cout<<"บ RESTA.............[2] บ";
   gotoxy(x,y+5);  cout<<"บ MUTIPLICACION.....[3] บ";
   gotoxy(x,y+6);  cout<<"บ DIVISION..........[4] บ";
   gotoxy(x,y+7);  cout<<"บ SALIR.............[5] บ";
   gotoxy(x,y+8);  cout<<"บ                       บ";
   gotoxy(x,y+9);  cout<<"ฬอออออออออออออออออออออออน";
   gotoxy(x,y+10); cout<<"บ OPCION............[ ] บ";
   gotoxy(x,y+11); cout<<"ศอออออออออออออออออออออออผ";
   gotoxy(x+21,y+10); cin>>opcion;
  }while(opcion<0||opcion>5);
  clrscr();
  if(opcion!=5)
  { gotoxy(x,7);cout<<"Ingrese el primer numero  : "; cin>>num1;
    gotoxy(x,8);cout<<"Ingrese el segundo numero : "; cin>>num2;
  }
  gotoxy(x,10);
  switch(opcion)
  { case 1:  R=num1+num2;
	     cout<<"El resultado de "<<num1<<" + "<<num2<<" es : "<<R;
	     getch();break;
    case 2:  R=num1-num2;
	     cout<<"El resultado de "<<num1<<" - "<<num2<<" es : "<<R;
	     getch();break;
    case 3:  R=num1*num2;
	     cout<<"El resultado de "<<num1<<" x "<<num2<<" es : "<<R;
	     getch();break;
    case 4:  R=num1/num2;
	     cout<<"El resultado de "<<num1<<" / "<<num2<<" es : "<<R;
	     getch();break;
  }

 }while(opcion!=5);

}
