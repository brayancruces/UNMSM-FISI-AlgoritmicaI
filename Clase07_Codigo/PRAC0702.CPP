#include <conio.h>
#include <iostream.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define ARR 72
#define ABA 80
#define ENT 13

 struct factura
{char  cod_fact[8];
 char  cod_clie[8];
 float monto;
 int   pagado;
};
 factura F[100];
 int indice=0;

 void ingresar_datos()
{clrscr();
 gotoxy(23,5); cout<<"Sistema de Registro de Facturas...";
 gotoxy(23,7); cout<<"Ingrese los sigtes. datos :";
 gotoxy(23,8); cout<<"Cod_Factura : ";gets(F[indice].cod_fact);
 gotoxy(23,9); cout<<"Cod_Cliente : ";gets(F[indice].cod_clie);
 gotoxy(23,10);cout<<"Monto       : ";cin>>F[indice].monto;
 gotoxy(23,11);cout<<"Estado (0/1): ";cin>>F[indice].pagado;
 indice++;

}

 void calcular_deuda()
{int i;
 float deuda=0;

 clrscr();
 if(indice>0)
 { for(i=0;i<indice;i++)
   { if(F[i].pagado==1)
     { deuda=deuda+F[i].monto; }
   }
   gotoxy(15,8); cout<<"El monto de las Facturas sin cobrar asciende a : ";
   cout<<deuda;
 }
 else
 {gotoxy(23,8); cout<<"! NO EXISTEN FACTURAS EN EL SISTEMA !"; }
 getch();
}

 void calcular_monto()
{int i;
 float cancelado=0;

 clrscr();
 if(indice>0)
 { for(i=0;i<indice;i++)
   { if(F[i].pagado==0)
     { cancelado=cancelado+F[i].monto; }
   }
   gotoxy(15,8); cout<<"El monto de las Facturas cobradas asciende a : ";
   cout<<cancelado;
 }
 else
 {gotoxy(23,8); cout<<"! NO EXISTEN FACTURAS EN EL SISTEMA !"; }
 getch();
}

 void menu_opciones()
{clrscr();
 textbackground(1);
 textcolor(1);
 textbackground(15);
 gotoxy(30,8); cprintf("      MENU      ");
 textcolor(15);
 textbackground(0);
 gotoxy(30,10);cprintf(" INGRESAR DATOS ");
 gotoxy(30,12);cprintf(" MONTO  A PAGAR ");
 gotoxy(30,14);cprintf(" MONTO   PAGADO ");
 gotoxy(30,16);cprintf("     SALIR      ");
 textcolor(14);
 textbackground(4);
}

 void  main()
{  char flecha;
   int i=1, E=0;

   textcolor(15);
   textbackground(1);

   do
   {menu_opciones();
    switch(i)
    {case 1: gotoxy(30,10); cprintf(" INGRESAR DATOS ");break;
     case 2: gotoxy(30,12); cprintf(" MONTO  A PAGAR ");break;
     case 3: gotoxy(30,14); cprintf(" MONTO   PAGADO ");break;
     case 4: gotoxy(30,16); cprintf("     SALIR      ");break;
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
     case ENT:switch(i)
	      {case 1: ingresar_datos();break;
	       case 2: calcular_deuda();break;
	       case 3: calcular_monto();break;
	       case 4: exit(1);break;
	      }
	      break;
    }
   }while(E==0);

   getch();
   clrscr();
}

