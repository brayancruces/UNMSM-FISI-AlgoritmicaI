#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <string.h>
#include <stdio.h>
#include <dos.h>

 void fondo_principal()
{
  setfillstyle(6,9);
  rectangle(0,0,639,479);
  floodfill(1,1,15);
}

 void ventana_acceso()
{ setcolor(15);
  setfillstyle(1,12);
  rectangle(200,200,400,300);
  floodfill(201,201,15);
  outtextxy(210,235,"Usuario");
  outtextxy(210,280,"Password");
  setfillstyle(1,15);
  rectangle(280,220,390,245);
  floodfill(281,221,15);
  rectangle(280,268,390,293);
  floodfill(281,269,15);
  setcolor(0);
}

 char* accesar_usuario()
{ char *U;

  U=new char[10];
  line(288,242,296,242);
  gotoxy(37,15); gets(U);

  return U;
}

 char* accesar_password()
{ char *P;

  P=new char[10];
  line(288,290,296,290);
  gotoxy(37,18); gets(P);

  return P;
}

 void mensaje_error()
{
  setcolor(15);
  setfillstyle(1,14);
  rectangle(200,200,400,300);
  floodfill(201,201,15);
  setcolor(1);
  outtextxy(230,235,"Datos incorrectos");
  outtextxy(220,255,"Ingrese otros datos");
  setcolor(4);
  outtextxy(185,320,"Presione ENTER para continuar");

  getch();
}

 void ingresar_sistema()
{
  setcolor(15);
  setfillstyle(7,6);
  rectangle(0,0,639,479);
  floodfill(1,1,14);

  setcolor(15);
  setfillstyle(1,12);
  rectangle(200,200,400,300);
  floodfill(201,201,15);

  outtextxy(220,235,"Ingresando al SISTEMA");

  for(int i=0;i<17;i++)
  { outtextxy(220+10*i,255,"²");
    sound(500);
    delay(500);
    nosound();
  }
  outtextxy(185,320,"Presione ENTER para continuar");
  getch();

}

 void main()
{char usuario[10], password[10];
 int gdriver = DETECT, gmode;

 do
 { closegraph();
   initgraph(&gdriver, &gmode,"E:/TC/BGI");
   fondo_principal();
   ventana_acceso();

   strcpy(usuario,accesar_usuario());
   strcpy(password,accesar_password());

   if(strcmp(usuario,"fenix")!=0||strcmp(password,"fisi")!=0)
   {
     closegraph();
     initgraph(&gdriver, &gmode,"E:/TC/BGI");
     mensaje_error();
   }

 }while(strcmp(usuario,"fenix")!=0||strcmp(password,"fisi")!=0);

 closegraph();
 initgraph(&gdriver, &gmode,"E:/TC/BGI");
 ingresar_sistema();

 closegraph();
 clrscr();
}