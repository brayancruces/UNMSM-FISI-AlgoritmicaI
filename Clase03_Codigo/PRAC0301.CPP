#include <iostream.h>
#include <conio.h>

 void main()
{int n, numero, cont1=0, cont2=0;
 float suma1=0, suma2=0, R1, R2;

 cout<<"La cantidad de n£meros a ingresar es : "; cin>>n;

 for(int i=0;i<n;i++)
 {cout<<"ingrese el numero : "; cin>>numero;
  if(numero>0)
  {suma1=suma1+numero;
   cont1++;
  }
  else
  {suma2=suma2+numero;
   cont2++;
  }
 }

 R1=suma1/cont1;
 R2=suma2/cont2;

 cout<<"La media de los numeros  positivos es : "<<R1;
 cout<<"\nLa media de los numeros  negativos es : "<<R2;

 getch();
 clrscr();
}
