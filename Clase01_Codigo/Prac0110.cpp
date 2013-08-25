#include <iostream.h>
#include <stdlib.h>

 void main()
{float N, X, R;

 cout<<"Ingrese el numero de dias : ";cin>>N;
 cout<<"Ingrese el porcentaje de eficiencia extra : ";cin>>X;

 R = 100*N/( 100 + X );

 cout<<"El tiempo que haria la obra es : "<<R<<" dias\n";

 system("PAUSE");
}
