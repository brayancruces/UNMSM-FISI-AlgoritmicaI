#include <iostream.h>
#include <conio.h>

void main()
{int **M;
 int fila, columna;
 int i,j, h, opcion, x=25, y=7;
 int aux1,aux2;

 do
 { do
   {clrscr();
    gotoxy(x,y);  cout<<"****************************";
    gotoxy(x,y+1);cout<<"*           MENU           *";
    gotoxy(x,y+2);cout<<"* Ingresar datos.......[1] *";
    gotoxy(x,y+3);cout<<"* Mostrar datos........[2] *";
    gotoxy(x,y+4);cout<<"* Rotar 90g Matriz.....[3] *";
    gotoxy(x,y+5);cout<<"* Mostrar..............[4] *";
    gotoxy(x,y+6);cout<<"****************************";
    gotoxy(x,y+7);cout<<"* Opcion...............[ ] *";
    gotoxy(x,y+8);cout<<"****************************";
    gotoxy(x+24,y+7);cin>>opcion;

   }while(opcion<1||opcion>4);

   clrscr();

   switch(opcion)
   { case 1: gotoxy(x,y);  cout<<"Ingrese la cantidad de filas    : "; cin>>fila;
	     gotoxy(x,y+1);cout<<"Ingrese la cantidad de columnas : "; cin>>columna;

	     M=new int*[columna];
	     for(i=0;i<columna;i++)
	     { M[i]=new int[fila]; }

	     clrscr();

	     for(i=0;i<fila;i++)
	     { for(j=0;j<columna;j++)
	       {
		  if(i==0||i==fila-1)
		  { gotoxy(x,y);cout<<"M["<<i<<"]["<<j<<"] = "; cin>>M[i][j]; }
		  else
		  { if(j==0||j==columna-1)
		    { gotoxy(x,y);cout<<"M["<<i<<"]["<<j<<"] = "; cin>>M[i][j]; }
		    else
		    { M[i][j]=0; }
		  }

		  clrscr();
		}
	      }

	      break;

      case 2: for(i=0;i<fila;i++)
	      { for(j=0;j<columna;j++)
		{ gotoxy(x+10+j,y+i);cout<<M[i][j]; }
	      }

	      gotoxy(x-4,y+4);getch();
	      break;

      case 3:
	      for(h=0;h<columna;h++)
	      {
	       aux1=M[0][0];
	       for(i=0;i<columna-1;i++)
	       {M[0][i]=M[0][i+1];}

	       aux2=M[fila-1][0];
	       for(i=fila-1;i>1;i--)
	       {M[i][0]=M[i-1][0];}

	       M[1][0]=aux1;

	       aux1=M[fila-1][columna-1];
	       for(i=columna-1;i>1;i--)
	       {M[fila-1][i]=M[fila-1][i-1];}

	       M[fila-1][1]=aux2;

	       for(i=0;i<fila-2;i++)
	       {M[i][columna-1]=M[i+1][columna-1];}

	       M[fila-2][columna-1]=aux1;

	      }

	      gotoxy(x,y);cout<<"! Se ha realizado la rotacion !";
	      getch();

	      break;

   }

 }while(opcion!=4);

}
