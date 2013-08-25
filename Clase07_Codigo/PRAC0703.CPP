#include <conio.h>
#include <iostream.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define ARR 72
#define ABA 80
#define ENT 13

 struct alumno
{char  cod_alu[9];
 char  nom_alu[15];
 char  ape_alu[15];
 float pro_alu;
 int   cre_alu;
 char  con_alu[15];
};

 struct seccion
{alumno A[20];
 int indice;
};

 struct grado
{ seccion S[3]; };

 grado G[5];

 void actualizar_indice()
{
 for(int i=0;i<5;i++)
 { for(int j=0;j<3;j++)
   {
     G[i].S[j].indice=0;
   }
 }
}

 void ingresar_alumno(int gr, int se)
{clrscr();
 int indi=G[gr-1].S[se-1].indice, nota;

 gotoxy(23,5); cout<<"Sistema de Registro del Colegio....";
 gotoxy(23,7); cout<<"Ingrese los sigtes. datos del Alumno :";
 gotoxy(23,8); cout<<"Codigo    : ";gets(G[gr-1].S[se-1].A[indi].cod_alu);
 gotoxy(23,9); cout<<"Nombres   : ";gets(G[gr-1].S[se-1].A[indi].nom_alu);
 gotoxy(23,10);cout<<"Apellidos : ";gets(G[gr-1].S[se-1].A[indi].ape_alu);
 gotoxy(23,11);cout<<"Promedio P: ";cin>>G[gr-1].S[se-1].A[indi].pro_alu;
 gotoxy(23,12);cout<<"N Creditos: ";cin>>G[gr-1].S[se-1].A[indi].cre_alu;
 nota=G[gr-1].S[se-1].A[indi].pro_alu;

 if(nota==0)
 { strcpy(G[gr-1].S[se-1].A[indi].con_alu,"RETIRADO"); }
 else
 {if(nota>0&&nota<13)
  { strcpy(G[gr-1].S[se-1].A[indi].con_alu,"NO REGULAR"); }
  else
  {if(nota>12&&nota<22)
   { strcpy(G[gr-1].S[se-1].A[indi].con_alu,"REGULAR"); }
   else
   { strcpy(G[gr-1].S[se-1].A[indi].con_alu,"EXCEPCIONAL"); }
  }
 }

 G[gr-1].S[se-1].indice++;
}

 void seleccionar_alumno(int gr, int se)
{clrscr();
 char cod[9];
 int indi=G[gr-1].S[se-1].indice, i=0, E=0;

 if(indi>0)
 { gotoxy(23,8); cout<<"Ingrese el codigo del alumno : "; gets(cod);
   while(i<indi&&E==0)
   { if(strcmp(G[gr-1].S[se-1].A[i].cod_alu,cod)==0)
     {E=1;}
     i++;
   }
   clrscr();
   if(E==1)
   { gotoxy(23,5); cout<<"Sistema de Registro del Colegio....";
     gotoxy(23,7); cout<<"Mostrando los datos del Alumno :";
     gotoxy(23,8); cout<<"Codigo    : ";puts(G[gr-1].S[se-1].A[indi-1].cod_alu);
     gotoxy(23,9); cout<<"Nombres   : ";puts(G[gr-1].S[se-1].A[indi-1].nom_alu);
     gotoxy(23,10);cout<<"Apellidos : ";puts(G[gr-1].S[se-1].A[indi-1].ape_alu);
     gotoxy(23,11);cout<<"Promedio P: ";cout<<G[gr-1].S[se-1].A[indi-1].pro_alu;
     gotoxy(23,12);cout<<"N Creditos: ";cout<<G[gr-1].S[se-1].A[indi-1].cre_alu;
     gotoxy(23,12);cout<<"Condicion : ";puts(G[gr-1].S[se-1].A[indi-1].con_alu);
   }
   else
   { gotoxy(23,8); cout<<"! ERROR : El codigo ingresado no existe !"; }
 }
 else
 { gotoxy(23,8); cout<<"! NO EXISTE NINGUN REGISTRO A MOSTRAR !"; }
 getch();
}

 void realizar_evento(int opc, int gr, int se)
{ if(opc==1)
  { ingresar_alumno(gr,se); }
  else
  { seleccionar_alumno(gr,se); }
}

 void menu_opciones()
{clrscr();
 textcolor(1);
 textbackground(15);
 gotoxy(30,8); cprintf("        MENU        ");
 textcolor(15);
 textbackground(0);
 gotoxy(30,10);cprintf(" INGRESAR  REGISTRO ");
 gotoxy(30,12);cprintf(" SELECCIONAR ALUMNO ");
 gotoxy(30,14);cprintf("        SALIR       ");
 textcolor(14);
 textbackground(4);
}

 void menu_grado()
{clrscr();
 textcolor(1);
 textbackground(15);
 gotoxy(30,5); cprintf("  MENU GRADOS  ");
 textcolor(15);
 textbackground(0);
 gotoxy(30,7); cprintf(" PRIMER  GRADO ");
 gotoxy(30,9); cprintf(" SEGUNDO GRADO ");
 gotoxy(30,11);cprintf(" TERCER  GRADO ");
 gotoxy(30,13);cprintf(" CUARTO  GRADO ");
 gotoxy(30,15);cprintf(" QUINTO  GRADO ");
 gotoxy(30,17);cprintf("  << ANTERIOR  ");
 textcolor(14);
 textbackground(4);

}

 void menu_seccion()
{clrscr();
 textcolor(1);
 textbackground(15);
 gotoxy(30,5); cprintf(" MENU SECCIONES ");
 textcolor(15);
 textbackground(0);
 gotoxy(30,7); cprintf(" SECCION    UNO ");
 gotoxy(30,9); cprintf(" SECCION    DOS ");
 gotoxy(30,11);cprintf(" SECCION   TRES ");
 gotoxy(30,13);cprintf(" SECCION CUATRO ");
 gotoxy(30,15);cprintf(" SECCION  CINCO ");
 gotoxy(30,17);cprintf("  << ANTERIOR   ");
 textcolor(14);
 textbackground(4);

}

 void principal();
 void buscar_grado(int opc);
 void buscar_seccion(int opc, int gr);

 void buscar_seccion(int opc, int gr)
{  char flecha;
   int i=1, E=0;

   do
   {menu_seccion();
    switch(i)
    {case 1:gotoxy(30,7); cprintf(" SECCION    UNO ");break;
     case 2:gotoxy(30,9); cprintf(" SECCION    DOS ");break;
     case 3:gotoxy(30,11);cprintf(" SECCION   TRES ");break;
     case 4:gotoxy(30,13);cprintf(" SECCION CUATRO ");break;
     case 5:gotoxy(30,15);cprintf(" SECCION  CINCO ");break;
     case 6:gotoxy(30,17);cprintf("   << ANTERIOR  ");break;
    }
    textcolor(15);
    textbackground(1);

    flecha=getch();

    switch(flecha)
    {case ABA:if(i==6)
	      { i=0; }
	      i++;
	      break;
     case ARR:if(i==1)
	      { i=7; }
	      i--;
	      break;
     case ENT:if(i>=1&&i<=5)
	      { realizar_evento(opc,gr,i); }
	      else
	      { buscar_grado(opc); }
	      break;
    }
   }while(E==0);
}

 void buscar_grado(int opc)
{  char flecha;
   int i=1, E=0;

   do
   {menu_grado();
    switch(i)
    {case 1:gotoxy(30,7); cprintf(" PRIMER  GRADO ");break;
     case 2:gotoxy(30,9); cprintf(" SEGUNDO GRADO ");break;
     case 3:gotoxy(30,11);cprintf(" TERCER  GRADO ");break;
     case 4:gotoxy(30,13);cprintf(" CUARTO  GRADO ");break;
     case 5:gotoxy(30,15);cprintf(" QUINTO  GRADO ");break;
     case 6:gotoxy(30,17);cprintf("  << ANTERIOR  ");break;
    }
    textcolor(15);
    textbackground(1);

    flecha=getch();

    switch(flecha)
    {case ABA:if(i==6)
	      { i=0; }
	      i++;
	      break;
     case ARR:if(i==1)
	      { i=7; }
	      i--;
	      break;
     case ENT:if(i>=1&&i<=5)
	      { buscar_seccion(opc,i); }
	      else
	      { principal(); }
	      break;

    }
   }while(E==0);
}

 void principal()
{  char flecha;
   int i=1, E=0;

   textcolor(15);
   textbackground(1);

   do
   {menu_opciones();
    switch(i)
    {case 1: gotoxy(30,10); cprintf(" INGRESAR  REGISTRO ");break;
     case 2: gotoxy(30,12); cprintf(" SELECCIONAR ALUMNO ");break;
     case 3: gotoxy(30,14); cprintf("        SALIR       ");break;
    }
    textcolor(15);
    textbackground(1);

    flecha=getch();

    switch(flecha)
    {case ABA:if(i==3)
	      { i=0; }
	      i++;
	      break;
     case ARR:if(i==1)
	      { i=4; }
	      i--;
	      break;
     case ENT:if(i==1||i==2)
	      { buscar_grado(i); }
	      else
	      { exit(1); }

    }
   }while(E==0);
}

 void  main()
{
   actualizar_indice();
   principal();

}

