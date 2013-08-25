#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 struct alumno
{char nombre[10];
 char ape_p[10];
 char ape_m[10];
 char codigo[8];
 int  nota_n;
 char nota_c[20];
};

 alumno A[50];
 int indice=0;

 void aniadir_alumno()
{gotoxy(25,5); cout<<"Ingresar datos del alumno";
 gotoxy(25,6); cout<<"Nombre       : "; gets(A[indice].nombre);
 gotoxy(25,7); cout<<"Ape. Paterno : "; gets(A[indice].ape_p);
 gotoxy(25,8); cout<<"Ape. Materno : "; gets(A[indice].ape_m);
 gotoxy(25,9); cout<<"Codigo       : "; gets(A[indice].codigo);
 gotoxy(25,10);cout<<"Nota (numero): ";cin>>A[indice].nota_n;
 gotoxy(25,11);cout<<"Nota (cadena): ";gets(A[indice].nota_c);
 indice++;
 clrscr();
 gotoxy(25,15);cout<<"! FINALIZO EL INGRESO DE DATOS !";
 gotoxy(25,16);cout<<"   pulse ENTER para continuar";
 getch();
}

 void borrar_por_posicion()
{int posicion, i=0;

 gotoxy(25,10); cout<<"Ingrese la posiciขn del alumno : "; cin>>posicion;
 clrscr();
 posicion--;
 if(posicion>=0&&posicion<indice)
 { for(i=posicion;i<indice-1;i++)
   { strcpy(A[i].nombre,A[i+1].nombre);
     strcpy(A[i].ape_p,A[i+1].ape_p);
     strcpy(A[i].ape_m,A[i+1].ape_m);
     strcpy(A[i].codigo,A[i+1].codigo);
     A[i].nota_n=A[i+1].nota_n;
     strcpy(A[i].nota_c,A[i+1].nota_c);
   }
   indice--;

   gotoxy(25,10); cout<<"! FINALIZO LA ELIMINACION DE DATOS !";
   gotoxy(25,11); cout<<"     pulse ENTER para continuar";
 }
 else
 { gotoxy(20,10); cout<<"! ERROR : La posicion ingresada no existe !";
   gotoxy(20,11); cout<<"         pulse ENTER para continuar";
 }

 getch();
}

 void borrar_por_codigo()
{char codigo[8], i=0, j, E=0;

 gotoxy(25,10); cout<<"Ingrese el codigo del alumno : "; gets(codigo);
 clrscr();
 while(i<indice&&E==0)
 { if(strcmp(A[i].codigo,codigo)==0)
   { for(j=i;j<indice-1;j++)
     { strcpy(A[j].nombre,A[j+1].nombre);
       strcpy(A[j].ape_p,A[j+1].ape_p);
       strcpy(A[j].ape_m,A[j+1].ape_m);
       strcpy(A[j].codigo,A[j+1].codigo);
       A[j].nota_n=A[j+1].nota_n;
       strcpy(A[j].nota_c,A[j+1].nota_c);
     }
     indice--;
     E=1;

     gotoxy(25,10); cout<<"! FINALIZO LA ELIMINACION DE DATOS !";
     gotoxy(25,11); cout<<"     pulse ENTER para continuar";
   }
   i++;
 }

 if(E==0)
 { gotoxy(25,10); cout<<"ERROR : El codigo ingresado no existe"; }

 getch();
}

 void mostrar_datos()
{int i;

 if(indice==0)
 { gotoxy(25,10); cout<<"! NO EXISTEN REGISTROS A MOSTRAR !";
   gotoxy(25,11); cout<<"    pulse ENTER para continuar";
 }
 else
 {
   for(i=0;i<indice;i++)
   {clrscr();
    gotoxy(30,5);  cout<<"Mostrando Datos";
    gotoxy(30,7);  cout<<"Codigo : "; puts(A[i].codigo);
    gotoxy(30,8);  cout<<"Nombre : "; puts(A[i].nombre);
    gotoxy(30,9);  cout<<"Apel_p : "; puts(A[i].ape_p);
    gotoxy(30,10); cout<<"Apel_m : "; puts(A[i].ape_m);
    gotoxy(30,11); cout<<"Nota_n : "; cout<<A[i].nota_n;
    gotoxy(30,12); cout<<"Nota_c : "; puts(A[i].nota_c);
    getch();
   }

   clrscr();
   gotoxy(25,10); cout<<"! FINALIZO LA IMPRESION DE DATOS !";
   gotoxy(25,11); cout<<"    pulse ENTER para continuar";
 }
 getch();
}

 void borrar_alumno()
{int opcion;

 if(indice>0)
 { do
   { clrscr();
     gotoxy(28,5); cout<<"Eliminar registro...";
     gotoxy(28,6); cout<<"Opciones :\n";
     gotoxy(28,7); cout<<"* Por posicion....[1]";
     gotoxy(28,8); cout<<"* Por codigo......[2]";
     gotoxy(28,10);cout<<"Ingresar opcion : "; cin>>opcion;
   }while(opcion<1||opcion>2);
   clrscr();
   switch(opcion)
   {case 1: borrar_por_posicion(); break;
    case 2: borrar_por_codigo(); break;
   }
 }
 else
 { gotoxy(25,10); cout<<"! NO EXISTEN REGISTROS A BORRAR !";
   gotoxy(25,11); cout<<"   pulse ENTER para continuar";
   getch();
 }

}

 void cambiar_nota()
{char codigo[8], i=0, E=0;

 if(indice>0)
 { gotoxy(25,3); cout<<"Cambiar Notas...";
   gotoxy(25,4); cout<<"Ingrese el codigo del alumno : "; gets(codigo);
   clrscr();
   while(i<indice&&E==0)
   { if(strcmp(A[i].codigo,codigo)==0)
     { gotoxy(25,6); cout<<"Actualizar Datos...";
       gotoxy(25,7); cout<<"Alumno...";
       gotoxy(25,8); cout<<"Codigo : "; puts(A[i].codigo);
       gotoxy(25,9); cout<<"Nombre : "; puts(A[i].nombre);
       gotoxy(25,10);cout<<"Ape_p  : "; puts(A[i].ape_p);
       gotoxy(25,11);cout<<"Ape_m  : "; puts(A[i].ape_m);
       gotoxy(25,12);cout<<"Actualizar Nota...";
       gotoxy(25,13);cout<<"Ingresar Nota (numero) : "; cin>>A[i].nota_n;
       gotoxy(25,14);cout<<"Ingresar Nota (cadena) : "; gets(A[i].nota_c);

       E=1;
       clrscr();
       gotoxy(25,10); cout<<"! FINALIZO EL CAMBIO DE NOTAS !";
       gotoxy(25,11); cout<<"  pulse ENTER para continuar";
     }
     i++;
   }

   if(E==0)
   { gotoxy(25,10); cout<<"ERROR : El codigo ingresado no existe"; }
 }
 else
 { gotoxy(25,10); cout<<"! NO EXISTEN REGISTROS A MODIFICAR !";
   gotoxy(25,11); cout<<"     pulse ENTER para continuar";
 }
 getch();

}

 void actualizar_nota()
{int i;

 if(indice>0)
 {
   for(i=0;i<indice;i++)
   { if(A[i].nota_n>=0&&A[i].nota_n<=5)
     { strcpy(A[i].nota_c,"NO PRESENTADO"); }
     else
     {if(A[i].nota_n>=6&&A[i].nota_n<=10)
      { strcpy(A[i].nota_c,"SUSPENSO");}
      else
      {if(A[i].nota_n>=11&&A[i].nota_n<=13)
       { strcpy(A[i].nota_c,"REGULAR"); }
       else
       {if(A[i].nota_n>=14&&A[i].nota_n<=15)
	{ strcpy(A[i].nota_c,"NOTABLE"); }
	else
	{if(A[i].nota_n>=16&&A[i].nota_n<=17)
	 { strcpy(A[i].nota_c,"SOBRESALIENTE"); }
	 else
	 { strcpy(A[i].nota_c,"MATRICULA DE HONOR"); }
	}
       }
      }
     }
   }

   clrscr();
   gotoxy(25,10); cout<<"! FINALIZO LA ACTUALIZACION DE DATOS !";
   gotoxy(25,11); cout<<"      pulse ENTER para continuar";
 }
 else
 { gotoxy(25,10); cout<<"! NO EXISTEN REGISTROS A ACTUALIZAR !";
   gotoxy(25,11); cout<<"      pulse ENTER para continuar";
 }
 getch();

}

 void calcular_nota()
{int i;
 float suma=0, prod=1, MA, MG, n, exp;

 if(indice>0)
 {
  gotoxy(25,7); cout<<"Registro de Alumnos...";

  for(i=0;i<indice;i++)
  { suma=suma+A[i].nota_n;
    prod=prod*A[i].nota_n;
  }
  MA=suma/indice;
  n=indice;
  exp=1.0/n;
  MG=pow(prod,exp);
  gotoxy(25,9); cout<<"Media Artimtica : "<<MA;
  gotoxy(25,10);cout<<"Media Geomtrica : "<<MG;

  gotoxy(25,12);cout<<"! FINALIZO EL CALCULO DE PROMEDIOS !";
  gotoxy(25,13);cout<<"     pulse ENTER para continuar";
 }
 else
 {gotoxy(25,10); cout<<"! NO EXISTEN REGISTROS A CAMBIAR !";
  gotoxy(25,11); cout<<"    pulse ENTER para continuar";
 }
 getch();

}

 void estadisticas_notas()
{float E1=0,E2=0,E3=0,E4=0,E5=0, E6=0;
 int i;

 if(indice>0)
 {
  for(i=0;i<indice;i++)
  { if(A[i].nota_n>=0&&A[i].nota_n<=5)
    { E1++; }
    else
    {if(A[i].nota_n>=6&&A[i].nota_n<=10)
     { E2++; }
     else
     {if(A[i].nota_n>=11&&A[i].nota_n<=13)
      { E3++; }
      else
      {if(A[i].nota_n>=14&&A[i].nota_n<=15)
       { E4++; }
       else
       {if(A[i].nota_n>=16&&A[i].nota_n<=17)
	{ E5++; }
	else
	{ E6++; }
       }
      }
     }
    }
  }

  gotoxy(20,5); cout<<"Estadisticas de los registros...";
  gotoxy(20,6); cout<<"Alumno...\n";
  gotoxy(20,7); cout<<"No presentado : "<<E1*100/indice<<" %";
  gotoxy(20,8); cout<<"Suspenso      : "<<E2*100/indice<<" %";;
  gotoxy(20,9); cout<<"Regular       : "<<E3*100/indice<<" %";;
  gotoxy(20,10);cout<<"Notable       : "<<E4*100/indice<<" %";;
  gotoxy(20,11);cout<<"Sobresaliente : "<<E5*100/indice<<" %";;
  gotoxy(20,12);cout<<"Matric. Honor : "<<E6*100/indice<<" %";;

  gotoxy(20,15);cout<<"! FINALIZO EL CALCULO DE PROMEDIOS !";
  gotoxy(20,16);cout<<"     pulse ENTER para continuar";
 }
 else
 {gotoxy(20,10); cout<<"! NO EXISTEN REGISTROS EN EL SISTEMA !";
  gotoxy(20,11); cout<<"      pulse ENTER para continuar";
 }
 getch();

}
 void main()
{int x=28, y=5, opcion;

 do
 { clrscr();
   do
   { gotoxy(x,y);   cout<<"ษอออออออออออออออออออออป";
     gotoxy(x,y+1); cout<<"บ         MENU        บ";
     gotoxy(x,y+2); cout<<"บ Aคadir..........[1] บ";
     gotoxy(x,y+3); cout<<"บ Borrar..........[2] บ";
     gotoxy(x,y+4); cout<<"บ Cambiar Nota....[3] บ";
     gotoxy(x,y+5); cout<<"บ Mostrar.........[4] บ";
     gotoxy(x,y+6); cout<<"บ Actualizar......[5] บ";
     gotoxy(x,y+7); cout<<"บ Calcular........[6] บ";
     gotoxy(x,y+8); cout<<"บ Estadisticas....[7] บ";
     gotoxy(x,y+9); cout<<"บ Salir...........[8] บ";
     gotoxy(x,y+10);cout<<"ฬอออออออออออออออออออออน";
     gotoxy(x,y+11);cout<<"บ Opcion..........[ ] บ";
     gotoxy(x,y+12);cout<<"ศอออออออออออออออออออออผ";
     gotoxy(x+19,y+11);cin>>opcion;

   }while(opcion<1||opcion>8);
   clrscr();
   switch(opcion)
   { case 1: aniadir_alumno();break;
     case 2: borrar_alumno();break;
     case 3: cambiar_nota();break;
     case 4: mostrar_datos();break;
     case 5: actualizar_nota();break;
     case 6: calcular_nota();break;
     case 7: estadisticas_notas();break;
     case 8: exit(1); break;

   }
 }while(opcion!=8);

 clrscr();
}