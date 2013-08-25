#include <iostream.h>
#include <stdlib.h>

void main()
{int N;
 float D, R;

 cout<<"Ingrese el numero de postes           : ";cin>>N;
 cout<<"Ingrese la distancia entre cada poste : ";cin>>D;

 R=( N - 3 )* D;

 cout<<"La distancia entre el 3er y el ultimo poste es : "<<R<<"\n";

 system("PAUSE");
}
