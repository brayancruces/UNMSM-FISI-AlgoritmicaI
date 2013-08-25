#include <iostream.h>
#include <stdlib.h>

 void main()
{float P, a, b, R;

 cout<<"Ingrese la cantidad de habitantes : ";cin>>P;
 cout<<"Ingrese el porcentaje de habitantes hombres  : ";cin>>a;
 cout<<"Ingrese el porcentaje de habitantes mujeres que saben leer y escribir : ";cin>>b;

 R= ( 1 - a/100 )*( 1 - b/100 )*P;

 cout<<"El numero de mujeres que no saben leer ni escribir es : "<<R<<"\n";

 system("PAUSE");
}
