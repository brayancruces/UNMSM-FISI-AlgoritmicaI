#include <conio.h>
#include <iostream.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define ARR 72
#define ABA 80
#define ENT 13

 struct multas
{char  cod_veh[8];
 int   num_cua;
 float vel_max;
 float vel_veh;
 float imp_mul;
};
 multas M[50];
 int indice=0;

 void principal();

 void ingresar_multa()
{clrscr();

 gotoxy(21,5); cout<<"Sistema de Registro del Multas de Vehiculos...";
 gotoxy(21,7); cout<<"Ingrese los sigtes. datos del Vehiculo :";
 gotoxy(21,8); cout<<"Codigo    : ";gets(M[indice].cod_veh);
 gotoxy(21,9); cout<<"Cuadrante : ";cin>>M[indice].num_cua;
 gotoxy(21,10);cout<<"Velocidad : ";cin>>M[indice].vel_veh;
 gotoxy(21,11);cout<<"Veloc Max : ";cin>>M[indice].vel_max;
 gotoxy(21,12);cout<<"Impuesto  : ";cin>>M[indice].imp_mul;

 indice++;
}

 void mostrar_forma1()
{int i;
 clrscr();

 if(indice>0)
 {
  cout<<"É";
  for(i=0;i<78;i++)
  { cout<<"Í"; }
  cout<<"»";
  gotoxy(1,2); cout<<"º";
  gotoxy(22,2);cout<<"Infracciones a los Limites de Velocidad";
  gotoxy(80,2);cout<<"º";
  gotoxy(1,3);cout<<"Ì";
  for(i=0;i<78;i++)
  { cout<<"Í"; }
  gotoxy(80,3);cout<<"¹";
  gotoxy(1,4); cout<<"º"; gotoxy(80,4);cout<<"º";
  gotoxy(1,5); cout<<"º"; gotoxy(80,5);cout<<"º";
  gotoxy(6,4);
  cout<<"Registro del          Velocidad            Velocidad         Multa";
  gotoxy(6,5);
  cout<<"Vehiculo              Registro(Km/h)       Limite         ";
  for(i=0;i<indice;i++)
  {gotoxy(1,6+i); cout<<"º"; gotoxy(80,6+i);cout<<"º";
   gotoxy(6,6+i); puts(M[i].cod_veh);
   gotoxy(28,6+i);cout<<M[i].vel_veh;
   gotoxy(49,6+i);cout<<M[i].vel_max;
   gotoxy(67,6+i);cout<<M[i].imp_mul;
  }
  gotoxy(1,6+indice); cout<<"º"; gotoxy(80,6+indice);cout<<"º";
  cout<<"È";
  for(i=0;i<78;i++)
  { cout<<"Í"; }
  cout<<"¼";
 }
 else
 { gotoxy(23,8); cout<<" NO EXISTEN INFRACCIONES REGISTRADAS "; }
 getch();
}

 void mostrar_cuadrante(int num)
{int i;
 clrscr();

 if(indice>0)
 {
  cout<<"É";
  for(i=0;i<78;i++)
  { cout<<"Í"; }
  cout<<"»";
  gotoxy(1,2); cout<<"º";
  gotoxy(12,2);
  cout<<"Infracciones a los Limites de Velocidad en el Cuadrante "<<num;
  gotoxy(80,2);cout<<"º";
  gotoxy(1,3);cout<<"Ì";
  for(i=0;i<78;i++)
  { cout<<"Í"; }
  gotoxy(80,3);cout<<"¹";
  gotoxy(1,4); cout<<"º"; gotoxy(80,4);cout<<"º";
  gotoxy(1,5); cout<<"º"; gotoxy(80,5);cout<<"º";
  gotoxy(6,4);
  cout<<"Registro del          Velocidad            Velocidad         Multa";
  gotoxy(6,5);
  cout<<"Vehiculo              Registro(Km/h)       Limite         ";
  for(i=0;i<indice;i++)
  { if(M[i].num_cua==num)
    { gotoxy(1,6+i); cout<<"º"; gotoxy(80,6+i);cout<<"º";
      gotoxy(6,6+i); puts(M[i].cod_veh);
      gotoxy(28,6+i);cout<<M[i].vel_veh;
      gotoxy(49,6+i);cout<<M[i].vel_max;
      gotoxy(67,6+i);cout<<M[i].imp_mul;
    }
  }
  gotoxy(1,5+indice); cout<<"º"; gotoxy(80,5+indice);cout<<"º";
  gotoxy(1,6+indice); cout<<"º"; gotoxy(80,6+indice);cout<<"º";
  cout<<"È";
  for(i=0;i<78;i++)
  { cout<<"Í"; }
  cout<<"¼";
 }
 else
 { gotoxy(23,8); cout<<" NO EXISTEN INFRACCIONES REGISTRADAS "; }
 getch();
}

  void menu_cuadrantes()
{clrscr();
 textcolor(1);
 textbackground(15);
 gotoxy(30,8); cprintf("    CUADRANTES     ");
 textcolor(15);
 textbackground(0);
 gotoxy(30,10);cprintf(" PRIMER  CUADRANTE ");
 gotoxy(30,12);cprintf(" SEGUNDO CUADRANTE ");
 gotoxy(30,14);cprintf(" TERCER  CUADRANTE ");
 gotoxy(30,16);cprintf(" CUARTO  CUADRANTE ");
 gotoxy(30,18);cprintf("    << ANTERIOR    ");
 textcolor(14);
 textbackground(4);
}

 void mostrar_forma2()
{  char flecha;
   int i=1, E=0;

   textcolor(15);
   textbackground(1); cout<<" ";

   do
   {menu_cuadrantes();
    switch(i)
    {case 1: gotoxy(30,10);cprintf(" PRIMER  CUADRANTE ");break;
     case 2: gotoxy(30,12);cprintf(" SEGUNDO CUADRANTE ");break;
     case 3: gotoxy(30,14);cprintf(" TERCER  CUADRANTE ");break;
     case 4: gotoxy(30,16);cprintf(" CUARTO  CUADRANTE ");break;
     case 5: gotoxy(30,18);cprintf("    << ANTERIOR    ");break;
    }
    textcolor(15);
    textbackground(1);

    flecha=getch();

    switch(flecha)
    {case ABA:if(i==5)
	      { i=0; }
	      i++;
	      break;
     case ARR:if(i==1)
	      { i=6; }
	      i--;
	      break;
     case ENT:if(i==1||i==2||i==3||i==4)
	      { mostrar_cuadrante(i); }
	      else
	      { principal(); }
	      break;
    }
   }while(E==0);


}

 void realizar_evento(int opc)
{
  switch(opc)
  { case 1: ingresar_multa(); break;
    case 2: mostrar_forma1(); break;
    case 3: mostrar_forma2(); break;
  }
}

 void menu_opciones()
{clrscr();
 textcolor(1);
 textbackground(15);
 gotoxy(30,8); cprintf("        MENU        ");
 textcolor(15);
 textbackground(0);
 gotoxy(30,10);cprintf(" INGRESAR  REGISTRO ");
 gotoxy(30,12);cprintf(" MOSTRAR  REPORTE 1 ");
 gotoxy(30,14);cprintf(" MOSTRAR  REPORTE 2 ");
 gotoxy(30,16);cprintf("        SALIR       ");
 textcolor(14);
 textbackground(4);
}

 void principal()
{  char flecha;
   int i=1, E=0;

   textcolor(15);
   textbackground(1); cout<<" ";

   do
   {menu_opciones();
    switch(i)
    {case 1: gotoxy(30,10);cprintf(" INGRESAR  REGISTRO ");break;
     case 2: gotoxy(30,12);cprintf(" MOSTRAR  REPORTE 1 ");break;
     case 3: gotoxy(30,14);cprintf(" MOSTRAR  REPORTE 2 ");break;
     case 4: gotoxy(30,16);cprintf("        SALIR       ");break;
    }
    textcolor(15);
    textbackground(1);

    flecha=getch();

    switch(flecha)
    {case ABA:if(i==4)
	      { i=0; }
	      i++;
	      break;
     case ARR:if(i==1)
	      { i=5; }
	      i--;
	      break;
     case ENT:if(i==1||i==2||i==3)
	      { realizar_evento(i); }
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