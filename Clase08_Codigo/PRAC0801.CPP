#include <conio.h>
#include <iostream.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define ARR 72
#define ABA 80
#define ENT 13

 struct alumno
{char cod_alu[9];
 char nom_alu[10];
 char ape_pat[10];
 char ape_mat[10];
 char con_alu[10];
 int  pro_alu;
};

 FILE *F;
 alumno AL[50];

 void principal();

 void crear_archivo()
{ alumno A;

  F=fopen("reg.dat","w");
  if(F==NULL)
  { cout<<"El archivo no existe"; }

  gotoxy(20,5); cout<<"Ingrese los datos del alumno...";
  gotoxy(20,6); cout<<"Codigo       : "; gets(A.cod_alu);
  gotoxy(20,7); cout<<"Nombre       : "; gets(A.nom_alu);
  gotoxy(20,8); cout<<"Apellido Pat : "; gets(A.ape_pat);
  gotoxy(20,9); cout<<"Apellido Mat : "; gets(A.ape_mat);
  gotoxy(20,10);cout<<"Promedio     : "; cin>>A.pro_alu;
  gotoxy(20,11);cout<<"Condicion    : "; gets(A.con_alu);

  fwrite(&A,sizeof(A),1,F);

  fclose(F);
}

 void adicionar_registro()
{ alumno A;

  F=fopen("reg.dat","a");
  if(F==NULL)
  { cout<<"El archivo no existe"; }

  gotoxy(20,5); cout<<"Ingrese los datos del alumno...";
  gotoxy(20,6); cout<<"Codigo       : "; gets(A.cod_alu);
  gotoxy(20,7); cout<<"Nombre       : "; gets(A.nom_alu);
  gotoxy(20,8); cout<<"Apellido Pat : "; gets(A.ape_pat);
  gotoxy(20,9); cout<<"Apellido Mat : "; gets(A.ape_mat);
  gotoxy(20,10);cout<<"Promedio     : "; cin>>A.pro_alu;
  gotoxy(20,11);cout<<"Condicion    : "; gets(A.con_alu);

  fwrite(&A,sizeof(A),1,F);

  fclose(F);
}

 void mostrar_registro(char *cad, int opc, int prom)
{ int i, indice=0, E=0;
  alumno A;
  F=fopen("reg.dat","r");
  if(F==NULL)
  { gotoxy(20,10); cout<<"NO EXISTE EL ARCHIVO "; }
  else
  {
   gotoxy(1,1);cout<<"É";
   for(i=0;i<78;i++)
   { cout<<"Í"; }
   cout<<"»";
   gotoxy(1,2); cout<<"º";
   gotoxy(25,2);cout<<"Relacion de Alumno(s) de la FISI";
   gotoxy(80,2);cout<<"º";
   gotoxy(1,3);cout<<"Ì";
   for(i=0;i<78;i++)
   { cout<<"Í"; }
   gotoxy(80,3);cout<<"¹";
   gotoxy(1,4); cout<<"º"; gotoxy(80,4);cout<<"º";
   gotoxy(1,5); cout<<"º"; gotoxy(80,5);cout<<"º";
   gotoxy(5,4);
   cout<<"Codigo     Nombre      Ape_pat      Ape_mat     Promedio      Condicion";
   gotoxy(5,5);
   cout<<"------     ------      -------      -------     --------      ---------";
   fread(&A,sizeof(A),1,F);
   while(!feof(F))
   { switch(opc)
     { case 1 : if(strcmp(A.cod_alu,cad)==0)
		{ E=1; }
		break;
       case 2 : if(strcmp(A.nom_alu,cad)==0)
		{ E=1; }
		break;
       case 3 : if(strcmp(A.ape_pat,cad)==0)
		{ E=1; }
		break;
       case 4 : if(strcmp(A.ape_mat,cad)==0)
		{ E=1; }
		break;
       case 5 : if(A.pro_alu==prom)
		{ E=1; }
		break;
     }
     if(E==1)
     {
      gotoxy(1,6+indice); cout<<"º"; gotoxy(80,6+indice);cout<<"º";
      gotoxy(5,6+indice); puts(A.cod_alu);
      gotoxy(16,6+indice);puts(A.nom_alu);
      gotoxy(28,6+indice);puts(A.ape_pat);
      gotoxy(41,6+indice);puts(A.ape_mat);
      gotoxy(53,6+indice);cout<<A.pro_alu;
      gotoxy(67,6+indice);puts(A.con_alu);
      E=0;
      indice++;
     }
     fread(&A,sizeof(A),1,F);
   }
   fclose(F);
   gotoxy(1,6+indice); cout<<"º"; gotoxy(80,6+indice);cout<<"º";
   cout<<"È";
   for(i=0;i<78;i++)
   { cout<<"Í"; }
   cout<<"¼";

  }
  getch();
}

 void realizar_busqueda(int opc)
{
 char cadena[8];
 int prom;
 alumno A;
 int E=0;
 switch(opc)
 { case 1 : gotoxy(25,8);
	    cout<<"Ingrese el codigo del alumno : "; gets(cadena); break;
   case 2 : gotoxy(25,8);
	    cout<<"Ingrese el nombre del alumno : "; gets(cadena); break;
   case 3 : gotoxy(25,8);
	    cout<<"Ingrese el apell pat del alumno : "; gets(cadena); break;
   case 4 : gotoxy(25,8);
	    cout<<"Ingrese el apell mat del alumno : "; gets(cadena); break;
   case 5 : gotoxy(25,8);
	    cout<<"Ingrese el promedio del alumno : "; cin>>prom; break;
 }

 clrscr();
 F=fopen("reg.dat","r");
 if(F==NULL)
 {gotoxy(30,10); cout<<"! No existe el archivo !";}
 else
 {
   fread(&A,sizeof(A),1,F);
   while(!feof(F)&&E==0)
   { switch(opc)
     { case 1 : if(strcmp(A.cod_alu,cadena)==0)
		{ mostrar_registro(A.cod_alu, opc, 0);
		  E=1;
		}
		break;
       case 2 : if(strcmp(A.nom_alu,cadena)==0)
		{ mostrar_registro(A.nom_alu, opc, 0);
		  E=1;
		}
		break;
       case 3 : if(strcmp(A.ape_pat,cadena)==0)
		{ mostrar_registro(A.ape_pat, opc, 0);
		  E=1;
		}
		break;
       case 4 : if(strcmp(A.ape_mat,cadena)==0)
		{ mostrar_registro(A.ape_mat, opc, 0);
		  E=1;
		}
		break;
       case 5 : if(A.pro_alu==prom)
		{ mostrar_registro(" ", opc, prom);
		  E=1;
		}
		break;
     }
     fread(&A,sizeof(A),1,F);
   }

   if(E==0)
   { switch(opc)
     { case 1 : gotoxy(25,10); cout<<" ! EL CODIGO INGRESADO NO EXISTE ! "; break;
       case 2 : gotoxy(25,10); cout<<" ! EL NOMBNRE INGRESADO NO EXISTE ! "; break;
       case 3 : gotoxy(25,10); cout<<" ! EL APELLIDO INGRESADO NO EXISTE ! "; break;
       case 4 : gotoxy(25,10); cout<<" ! EL APELLIDO INGRESADO NO EXISTE ! "; break;
       case 5 : gotoxy(25,10); cout<<" ! EL PROMEDIO INGRESADO NO EXISTE ! "; break;
     }
     getch();
   }
 }
 fclose(F);
}

 void menu_buscar()
{clrscr();
 textcolor(15);
 textbackground(1);
 gotoxy(33,4); cprintf("     MENU     ");
 textcolor(15);
 textbackground(6);
 gotoxy(33,6); cprintf(" POR   CODIGO ");
 gotoxy(33,8); cprintf(" POR   NOMBRE ");
 gotoxy(33,10);cprintf(" POR  APE PAT ");
 gotoxy(33,12);cprintf(" POR  APE MAT ");
 gotoxy(33,14);cprintf(" POR PROMEDIO ");
 gotoxy(33,16);cprintf("  << ANTERIOR ");
 textcolor(15);
 textbackground(4);
}

 void buscar_registro()
{  char flecha;
   int i=1, E=0;

   textcolor(0);
   textbackground(15); cout<<" ";

   do
   {menu_buscar();
    switch(i)
    {case 1: gotoxy(33,6); cprintf(" POR   CODIGO ");
	     gotoxy(48,6); cprintf("<-");break;
     case 2: gotoxy(33,8); cprintf(" POR   NOMBRE ");
	     gotoxy(48,8); cprintf("<-");break;
     case 3: gotoxy(33,10);cprintf(" POR  APE PAT ");
	     gotoxy(48,10); cprintf("<-");break;
     case 4: gotoxy(33,12);cprintf(" POR  APE MAT ");
	     gotoxy(48,12); cprintf("<-");break;
     case 5: gotoxy(33,14);cprintf(" POR PROMEDIO ");
	     gotoxy(48,14); cprintf("<-");break;
     case 6: gotoxy(33,16);cprintf("  << ANTERIOR ");
	     gotoxy(48,16); cprintf("<-");break;
    }
    textcolor(0);
    textbackground(15);

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
     case ENT:if(i>=0&&i<=5)
	      { clrscr();
		realizar_busqueda(i);
	      }
	      else
	      { principal(); }
	      break;
    }
   }while(E==0);
}

 void mostrar_archivo()
{ alumno A;
  int indice=0, i;

  F=fopen("reg.dat","r");
  if(F==NULL)
  { gotoxy(25,8); cout<<"El archivo no existe"; }
  else
  {
    gotoxy(1,1);cout<<"É";
    for(i=0;i<78;i++)
    { cout<<"Í"; }
    cout<<"»";
    gotoxy(1,2); cout<<"º";
    gotoxy(25,2);cout<<"Relacion de Alumno(s) de la FISI";
    gotoxy(80,2);cout<<"º";
    gotoxy(1,3);cout<<"Ì";
    for(i=0;i<78;i++)
    { cout<<"Í"; }
    gotoxy(80,3);cout<<"¹";
    gotoxy(1,4); cout<<"º"; gotoxy(80,4);cout<<"º";
    gotoxy(1,5); cout<<"º"; gotoxy(80,5);cout<<"º";
    gotoxy(5,4);
    cout<<"Codigo     Nombre      Ape_pat      Ape_mat     Promedio      Condicion";
    gotoxy(5,5);
    cout<<"------     ------      -------      -------     --------      ---------";
    fread(&A,sizeof(A),1,F);
    while(!feof(F))
    {   gotoxy(1,6+indice); cout<<"º"; gotoxy(80,6+indice);cout<<"º";
	gotoxy(5,6+indice); puts(A.cod_alu);
	gotoxy(16,6+indice);puts(A.nom_alu);
	gotoxy(28,6+indice);puts(A.ape_pat);
	gotoxy(41,6+indice);puts(A.ape_mat);
	gotoxy(53,6+indice);cout<<A.pro_alu;
	gotoxy(67,6+indice);puts(A.con_alu);
	indice++;

	fread(&A,sizeof(A),1,F);
   }
   fclose(F);
   gotoxy(1,6+indice); cout<<"º"; gotoxy(80,6+indice);cout<<"º";
   cout<<"È";
   for(i=0;i<78;i++)
   { cout<<"Í"; }
   cout<<"¼";

  }
  getch();
}

 void actualizar_registro()
{int E=0, i=0, j, aux;
 char cod[9], opc;
 alumno A;
 gotoxy(20,8); cout<<"Ingrese el codigo del alumno : "; gets(cod);
 clrscr();
 F=fopen("reg.dat","r");
 if(F==NULL)
 { gotoxy(25,8); cout<<" ERROR : EL ARCHIVO NO EXISTE "; }
 else
 { fread(&A,sizeof(A),1,F);
   while(!feof(F)&&E==0)
   { if(strcmp(A.cod_alu,cod)==0)
     { E=1; }
     fread(&A,sizeof(A),1,F);
   }
   fclose(F);
 }

 if(E==1)
 { F=fopen("reg.dat","r");
   if(F==NULL)
   { gotoxy(25,8); cout<<" ERROR : EL ARCHIVO NO EXISTE "; }
   else
   { fread(&A,sizeof(A),1,F);
     while(!feof(F))
     { if(strcmp(A.cod_alu,cod)==0)
       { aux=i; }
       strcpy(AL[i].cod_alu,A.cod_alu);
       strcpy(AL[i].nom_alu,A.nom_alu);
       strcpy(AL[i].ape_pat,A.ape_pat);
       strcpy(AL[i].ape_mat,A.ape_mat);
       strcpy(AL[i].con_alu,A.con_alu);
       AL[i].pro_alu=A.pro_alu;
       i++;
       fread(&A,sizeof(A),1,F);
     }
     fclose(F);
   }

   gotoxy(20,8); cout<<"Actualizar los datos del alumno...";
   gotoxy(20,9); cout<<"Nombre.......[s/n] :  "; cin>>opc;
   if(opc=='s')
   { clrscr();
     gotoxy(20,8); cout<<"Actualizar los datos del alumno...";
     gotoxy(20,9); cout<<"Nuevo Nombre : "; gets(AL[aux].nom_alu);
   }
   clrscr();
   gotoxy(20,8); cout<<"Actualizar los datos del alumno...";
   gotoxy(20,9); cout<<"Apell Pater..[s/n] :  "; cin>>opc;
   if(opc=='s')
   { clrscr();
     gotoxy(20,8); cout<<"Actualizar los datos del alumno...";
     gotoxy(20,9); cout<<"Nuevo Apell  : "; gets(AL[aux].ape_pat);
   }
   clrscr();
   gotoxy(20,8); cout<<"Actualizar los datos del alumno...";
   gotoxy(20,9); cout<<"Apell Mater..[s/n] :  "; cin>>opc;
   if(opc=='s')
   { clrscr();
     gotoxy(20,8); cout<<"Actualizar los datos del alumno...";
     gotoxy(20,9); cout<<"Nuevo Apell  : "; gets(AL[aux].ape_mat);
   }
   clrscr();
   gotoxy(20,8); cout<<"Actualizar los datos del alumno...";
   gotoxy(20,9); cout<<"Promedio.....[s/n] :  "; cin>>opc;
   if(opc=='s')
   { clrscr();
     gotoxy(20,8); cout<<"Actualizar los datos del alumno...";
     gotoxy(20,9); cout<<"Nuevo Promed : "; cin>>AL[aux].pro_alu;
   }
   clrscr();
   gotoxy(20,8); cout<<"Actualizar los datos del alumno...";
   gotoxy(20,9); cout<<"Condicion....[s/n] :  "; cin>>opc;
   if(opc=='s')
   { clrscr();
     gotoxy(20,8); cout<<"Actualizar los datos del alumno...";
     gotoxy(20,9); cout<<"Nueva Condic : "; gets(AL[aux].con_alu);
   }

   clrscr();

   j=i;
   F=fopen("reg.dat","w");
   if(F==NULL)
   { gotoxy(25,8); cout<<" ERROR : EL ARCHIVO NO EXISTE "; }
   else
   { while(i>0)
     { strcpy(A.cod_alu,AL[j-i].cod_alu);
       strcpy(A.nom_alu,AL[j-i].nom_alu);
       strcpy(A.ape_pat,AL[j-i].ape_pat);
       strcpy(A.ape_mat,AL[j-i].ape_mat);
       strcpy(A.con_alu,AL[j-i].con_alu);
       A.pro_alu=AL[j-i].pro_alu;
       i--;

       fwrite(&A,sizeof(A),1,F);
     }
   }
   fclose(F);
   gotoxy(20,8); cout<<" LA ELIMACION SE HA REALIZADO CON EXITO ";
   gotoxy(20,9); cout<<"     presione ENTER para continuar      ";
 }
 else
 { gotoxy(20,8); cout<<"! ERROR : EL CODIGO INGRESADO NO EXISTE  !"; }
 getch();

}

 void eliminar_registro()
{int E=0, i=0, j;
 char cod[9];
 alumno A;
 gotoxy(20,8); cout<<"Ingrese el codigo del alumno : "; cin>>cod;
 clrscr();
 F=fopen("reg.dat","r");
 if(F==NULL)
 { gotoxy(25,8); cout<<" ERROR : EL ARCHIVO NO EXISTE "; }
 else
 { fread(&A,sizeof(A),1,F);
   while(!feof(F)&&E==0)
   { if(strcmp(A.cod_alu,cod)==0)
     { E=1; }
     fread(&A,sizeof(A),1,F);
   }
   fclose(F);
 }

 if(E==1)
 { F=fopen("reg.dat","r");
   if(F==NULL)
   { gotoxy(25,8); cout<<" ERROR : EL ARCHIVO NO EXISTE "; }
   else
   { fread(&A,sizeof(A),1,F);
     while(!feof(F))
     { if(strcmp(A.cod_alu,cod)!=0)
       { strcpy(AL[i].cod_alu,A.cod_alu);
	 strcpy(AL[i].nom_alu,A.nom_alu);
	 strcpy(AL[i].ape_pat,A.ape_pat);
	 strcpy(AL[i].ape_mat,A.ape_mat);
	 strcpy(AL[i].con_alu,A.con_alu);
	 AL[i].pro_alu=A.pro_alu;
	 i++;
       }
       fread(&A,sizeof(A),1,F);
     }
     fclose(F);
   }

   j=i;
   F=fopen("reg.dat","w");
   if(F==NULL)
   { gotoxy(25,8); cout<<" ERROR : EL ARCHIVO NO EXISTE "; }
   else
   { while(i>0)
     { strcpy(A.cod_alu,AL[j-i].cod_alu);
       strcpy(A.nom_alu,AL[j-i].nom_alu);
       strcpy(A.ape_pat,AL[j-i].ape_pat);
       strcpy(A.ape_mat,AL[j-i].ape_mat);
       strcpy(A.con_alu,AL[j-i].con_alu);
       A.pro_alu=AL[j-i].pro_alu;
       i--;

       fwrite(&A,sizeof(A),1,F);
     }
   }
   fclose(F);
   gotoxy(20,8); cout<<" LA ELIMACION SE HA REALIZADO CON EXITO ";
   gotoxy(20,9); cout<<"     presione ENTER para continuar      ";
 }
 else
 { gotoxy(20,8); cout<<"! ERROR : EL CODIGO INGRESADO NO EXISTE  !"; }
 getch();
}

 void realizar_procedimiento(int opc)
{ switch(opc)
  { case 1 : crear_archivo(); break;
    case 2 : adicionar_registro(); break;
    case 3 : actualizar_registro(); break;
    case 4 : buscar_registro(); break;
    case 5 : eliminar_registro(); break;
    case 6 : mostrar_archivo(); break;
  }
}

 void menu_principal()
{clrscr();
 textcolor(15);
 textbackground(1);
 gotoxy(30,4); cprintf("        MENU         ");
 textcolor(15);
 textbackground(6);
 gotoxy(30,6); cprintf(" CREAR       ARCHIVO ");
 gotoxy(30,8); cprintf(" ADICIONAR  REGISTRO ");
 gotoxy(30,10);cprintf(" ACTUALIZAR REGISTRO ");
 gotoxy(30,12);cprintf(" BUSCAR     REGISTRO ");
 gotoxy(30,14);cprintf(" ELIMINAR   REGISTRO ");
 gotoxy(30,16);cprintf(" MOSTRAR     ARCHIVO ");
 gotoxy(30,18);cprintf("        SALIR        ");

 textcolor(15);
 textbackground(4);
}

 void principal()
{  char flecha;
   int i=1, E=0;

   textcolor(0);
   textbackground(15); cout<<" ";

   do
   {menu_principal();
    switch(i)
    {case 1: gotoxy(30,6);  cprintf(" CREAR       ARCHIVO ");
	     gotoxy(52,6);  cprintf("<-");break;
     case 2: gotoxy(30,8);  cprintf(" ADICIONAR  REGISTRO ");
	     gotoxy(52,8);  cprintf("<-");break;
     case 3: gotoxy(30,10); cprintf(" ACTUALIZAR REGISTRO ");
	     gotoxy(52,10); cprintf("<-");break;
     case 4: gotoxy(30,12); cprintf(" BUSCAR     REGISTRO ");
	     gotoxy(52,12); cprintf("<-");break;
     case 5: gotoxy(30,14); cprintf(" ELIMINAR   REGISTRO ");
	     gotoxy(52,14); cprintf("<-");break;
     case 6: gotoxy(30,16); cprintf(" MOSTRAR     ARCHIVO ");
	     gotoxy(52,16); cprintf("<-");break;
     case 7: gotoxy(30,18); cprintf("        SALIR        ");
	     gotoxy(52,18); cprintf("<-");break;
    }
    textcolor(0);
    textbackground(15);

    flecha=getch();

    switch(flecha)
    {case ABA:if(i==7)
	      { i=0; }
	      i++;
	      break;
     case ARR:if(i==1)
	      { i=8; }
	      i--;
	      break;
     case ENT:if(i>=0&&i<=6)
	      { clrscr();
		realizar_procedimiento(i);
	      }
	      else
	      { exit(1); }
	      break;
    }
   }while(E==0);
}

 void  main()
{
   principal();

}