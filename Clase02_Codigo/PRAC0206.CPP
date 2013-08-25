#include <iostream.h>
#include <conio.h>
#include <math.h>

 void main()
{float a, b, c, disc, x1, x2;

 cout<<"Ingrese los el coeficientes de la ecuacion :\n";
 cout<<"Ingrese el primer coeficiente : "; cin>>a;
 cout<<"Ingrese el segundo coeficiente: "; cin>>b;
 cout<<"Ingrese el tercer coeficiente : "; cin>>c;

 if(a==0)
 {cout<<"La ecuacion no es cuadratica";}
 else
 { disc=b*b-4*a*c;
   if(disc>=0)
   { if(disc==0)
     { x1=-b/(2*a);
       x2=x1;
     }
     else
     { x1=(-b+sqrt(disc))/(2*a);
       x2=(-b-sqrt(disc))/(2*a);
     }
     cout<<"Las ra¡ces de la ecuaci¢n son : "<<x1<<" y "<<x2;
   }
   else
   {cout<<"No existe solucion en los Reales";}
 }

 getch();
 clrscr();
}
