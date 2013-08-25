#include <iostream.h>
#include <stdlib.h>

 void main()
{float N, T, R;

 cout<<"Ingrese el promedio final    : ";cin>>T;
 cout<<"Ingrese la tasa de reduccion : ";cin>>N;

 R= 100*T/(100 -  N );

 cout<<"El promedio inicial es : "<<R<<"\n";

 system("PAUSE");
}
