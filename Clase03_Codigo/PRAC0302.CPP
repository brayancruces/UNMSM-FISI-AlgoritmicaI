#include <iostream.h>
#include <conio.h>

 void main()
{int n ;
 float R=1;

 cout<<"Ingrese el numero : "; cin>>n;

 for(int i=0;i<n;i++)
 { R=R*(i+1); }

 cout<<"El factorial del numero "<<n<<" es : "<<R;

 getch();
 clrscr();
}
