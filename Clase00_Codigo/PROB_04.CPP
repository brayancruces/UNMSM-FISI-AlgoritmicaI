#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

 void main()
{int A,B,C;

 cout<<"Ingrese el numero : ";cin>>A;
 cout<<"Ingrese el numero : ";cin>>B;
 cout<<"Ingrese el numero : ";cin>>C;

 if(A>B)
 {if(A>C)
  {if(B>C)
   {cout<<"Numeros ordenados : "<<C<<" "<<B<<" "<<A;}
   else
   {cout<<"Numeros ordenados : "<<B<<" "<<C<<" "<<A;}
  }
  else
  {cout<<"Numeros ordenados : "<<B<<" "<<A<<" "<<C;}
 }
 else
 {if(B>C)
  {if(A>C)
   {cout<<"Numeros ordenados : "<<C<<" "<<A<<" "<<B;}
   else
   {cout<<"Numeros ordenados : "<<A<<" "<<C<<" "<<B;}
  }
  else
  {cout<<"Numeros ordenados : "<<A<<" "<<B<<" "<<C;}
 }

 getch();
 clrscr();
}
