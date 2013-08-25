#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>
#include <dos.h>
#define F1 59
#define F2 60
#define ESC 27

int a=0, b=0, c=0;
int A[5], B[5], C[5];

 void fondo_pantalla()
{ setcolor(15);
  setfillstyle(1,9);
  rectangle(0,0,639,479);
  floodfill(1,1,15);

  setfillstyle(1,15);
  rectangle(0,460,639,479);
  floodfill(1,461,15);
  setcolor(1);
  outtextxy(120,465,"Pintar =          Iniciar =          Salir = ");
  setcolor(4);
  outtextxy(120,465,"         F1                 F2               ESC");

  setcolor(10);
  settextstyle(DEFAULT_FONT,1,2);
  outtextxy(30,150,"GRUPO FENIX");
  settextstyle(DEFAULT_FONT,0,3);
  outtextxy(150,20,"TORRE DE HANOI");

  line(80,400,220,400);
  line(150,400,150,180);
  line(280,400,420,400);
  line(350,400,350,180);
  line(480,400,620,400);
  line(550,400,550,180);

  settextstyle(DEFAULT_FONT,0,2);
  outtextxy(145,420,"A");
  outtextxy(345,420,"B");
  outtextxy(545,420,"C");
}

 void pintar_caja(int x0, int y0, int x1, int y1)
{setcolor(15);
 setfillstyle(9,12);
 rectangle(x0,y0,x1,y1);
 floodfill(x0+1,y0-1,15);
}
 void borrar_caja(int x0, int y0, int x1, int y1)
{setcolor(9);
 setfillstyle(1,9);
 rectangle(x0,y0,x1,y1);
 floodfill(x0+1,y0-1,9);

 setcolor(10);
 line((x0+x1)/2,y0,(x0+x1)/2,y1);
 setcolor(15);
 line(x0,y0,x1,y0);
}

 void pintar_piramide()
{int i;

 for(i=0;i<5;i++)
 { pintar_caja(100+10*i,400-40*i,200-10*i,400-40*(i+1));
   A[i]=i+1;
   a++;
 }

}

 void mover_disco(int origen, int destino)
{
 delay(800);

 if(origen==1&&destino==2)
 { B[b]=A[a-1]; }
 if(origen==1&&destino==3)
 { C[c]=A[a-1]; }
 if(origen==2&&destino==1)
 { A[a]=B[b-1]; }
 if(origen==2&&destino==3)
 { C[c]=B[b-1]; }
 if(origen==3&&destino==1)
 { A[a]=C[c-1]; }
 if(origen==3&&destino==2)
 { B[b]=C[c-1]; }

 if(origen==1)
 { borrar_caja(100+10*(A[a-1]-1),400-40*(a-1),200-10*(A[a-1]-1),400-40*a);
   a--;
 }
 if(origen==2)
 { borrar_caja(300+10*(B[b-1]-1),400-40*(b-1),400-10*(B[b-1]-1),400-40*b);
   b--;
 }
 if(origen==3)
 { borrar_caja(500+10*(C[c-1]-1),400-40*(c-1),600-10*(C[c-1]-1),400-40*c);
   c--;
 }

 delay(800);

 if(destino==1)
 { pintar_caja(100+10*(A[a]-1),400-40*a,200-10*(A[a]-1),400-40*(a+1));
   a++;
 }
 if(destino==2)
 { pintar_caja(300+10*(B[b]-1),400-40*b,400-10*(B[b]-1),400-40*(b+1));
   b++;
 }
 if(destino==3)
 { pintar_caja(500+10*(C[c]-1),400-40*c,600-10*(C[c]-1),400-40*(c+1));
   c++;
 }

}

 void mover_cuadro(int ndiscos, int origen, int destino, int auxiliar)
{
  if(ndiscos==1)
  { mover_disco(origen,destino); }
  else
  {mover_cuadro(ndiscos-1,origen,auxiliar,destino);
   mover_disco(origen,destino);
   mover_cuadro(ndiscos-1,auxiliar,destino,origen);
  }

}

 void iniciar_juego(int ndiscos, int origen, int auxiliar, int destino)
{
 mover_cuadro(ndiscos,origen,auxiliar,destino);

 setcolor(10);
 settextstyle(DEFAULT_FONT,0,2);
 outtextxy(180,100,"­ FIN DEL JUEGO !");

}

 void main()
{int gdriver = DETECT, gmode, errorcode;
 char caracter;
 int eF1=0, eF2=0;

 initgraph(&gdriver, &gmode,"E:/TC/BGI");

 fondo_pantalla();

 for(;;)
 {
  caracter=getch();

  switch(caracter)
  { case F1 : if(eF1==0)
	      { pintar_piramide();
		eF1=1;
	      }
	      break;
    case F2 : if(eF2==0)
	      { iniciar_juego(5,1,2,3);
		eF2=1;
	      }
	      break;
    case ESC: exit(0);
  }
 }

}