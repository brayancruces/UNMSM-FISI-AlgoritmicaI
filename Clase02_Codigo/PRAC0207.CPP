#include <iostream.h>
#include <conio.h>

 void main()
{int A,B,C;

 cout<<"Ingrese el numero : ";cin>>A;
 cout<<"Ingrese el numero : ";cin>>B;
 cout<<"Ingrese el numero : ";cin>>C;

 if(A>B)
 {if(A>C)
  {if(B>C)
   {cout<<"Numeros ordenados ascendentemente : "<<C<<" "<<B<<" "<<A;}
   else
   {cout<<"Numeros ordenados ascendentemente : "<<B<<" "<<C<<" "<<A;}
  }
  else
  {cout<<"Numeros ordenados ascendentemente : "<<B<<" "<<A<<" "<<C;}
 }
 else
 {if(B>C)
  {if(A>C)
   {cout<<"Numeros ordenados ascendentemente : "<<C<<" "<<A<<" "<<B;}
   else
   {cout<<"Numeros ordenados ascendentemente : "<<A<<" "<<C<<" "<<B;}
  }
  else
  {cout<<"Numeros ordenados ascendentemente : "<<A<<" "<<B<<" "<<C;}
 }

 getch();
 clrscr();
}

