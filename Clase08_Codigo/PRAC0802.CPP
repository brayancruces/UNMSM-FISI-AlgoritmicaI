#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ARR 72
#define ABA 80
#define ENT 13

FILE *F;

 char* unidades(int numero)
{char *cad;
 cad=new char[7];

 switch(numero)
 {case 0: strcpy(cad,"CERO");   break;
  case 1: strcpy(cad,"UNO");    break;
  case 2: strcpy(cad,"DOS");    break;
  case 3: strcpy(cad,"TRES");   break;
  case 4: strcpy(cad,"CUATRO"); break;
  case 5: strcpy(cad,"CINCO");  break;
  case 6: strcpy(cad,"SEIS");   break;
  case 7: strcpy(cad,"SIETE");  break;
  case 8: strcpy(cad,"OCHO");   break;
  case 9: strcpy(cad,"NUEVE");  break;
 }
 return cad;
}

 char* decenas(int numero)
{char *cad;
 cad=new char[10];

 switch(numero)
 {case 1: strcpy(cad,"DIEZ");     break;
  case 2: strcpy(cad,"VEINTE");   break;
  case 3: strcpy(cad,"TREINTA");  break;
  case 4: strcpy(cad,"CUARENTA"); break;
  case 5: strcpy(cad,"CINCUENTA");break;
  case 6: strcpy(cad,"SESENTA");  break;
  case 7: strcpy(cad,"SETENTA");  break;
  case 8: strcpy(cad,"OCHENTA");  break;
  case 9: strcpy(cad,"NOVENTA");  break;
 }
 return cad;
}

 char* centenas(int numero)
{char *cad;
 cad=new char[14];

 switch(numero)
 {case 1: strcpy(cad,"CIEN");           break;
  case 2: strcpy(cad,"DOSCIENTOS");    break;
  case 3: strcpy(cad,"TRESCIENTOS");   break;
  case 4: strcpy(cad,"CUATROCIENTOS"); break;
  case 5: strcpy(cad,"QUINIENTOS");    break;
  case 6: strcpy(cad,"SEISCIENTOS");   break;
  case 7: strcpy(cad,"SETECIENTOS");  break;
  case 8: strcpy(cad,"OCHOCIENTOS");   break;
  case 9: strcpy(cad,"NOVECIENTOS");   break;
 }
 return cad;
}

 char* miles(int numero)
{char *cad;
 cad=new char[11];

 switch(numero)
 {case 1: strcpy(cad,"MIL");        break;
  case 2: strcpy(cad,"DOS MIL");    break;
  case 3: strcpy(cad,"TRES MIL");   break;
  case 4: strcpy(cad,"CUATRO MIL"); break;
  case 5: strcpy(cad,"CINCO MIL");  break;
  case 6: strcpy(cad,"SEIS MIL");   break;
  case 7: strcpy(cad,"SIETE MIL");  break;
  case 8: strcpy(cad,"OCHO MIL");   break;
  case 9: strcpy(cad,"NUEVE MIL");  break;
 }
 return cad;
}

 char* decemiles(int numero)
{char *cad;
 cad=new char[14];

 switch(numero)
 {case 1: strcpy(cad,"DIEZ MIL");        break;
  case 2: strcpy(cad,"VEINTE MIL");    break;
  case 3: strcpy(cad,"TREINTA MIL");   break;
  case 4: strcpy(cad,"CUARENTA MIL"); break;
  case 5: strcpy(cad,"CINCUENTA MIL");  break;
  case 6: strcpy(cad,"SESENTA MIL");   break;
  case 7: strcpy(cad,"SETENTA MIL");  break;
  case 8: strcpy(cad,"OCHENTA MIL");   break;
  case 9: strcpy(cad,"NOVENTA MIL");  break;
 }
 return cad;
}

 char* convertir(int long numero)
{char *cad, *cad1;
 int i=0, E=0, E1=0, v1, v2, v3;

 cad=new char[60];
 cad1=new char[60];
 strcpy(cad,"");
 strcpy(cad1,"");
 v1=numero;
 v2=v1;
 if( numero < 0 )
 { strcat(cad,"ERROR NUMERO INDEFINIDO"); }
 else
 {
  switch(numero)
  { case 11: strcpy(cad,"ONCE");    break;
    case 12: strcpy(cad,"DOCE");    break;
    case 13: strcpy(cad,"TRECE");   break;
    case 14: strcpy(cad,"CATORCE"); break;
    case 15: strcpy(cad,"QUINCE");  break;
    default:
	    while(v1>0)
	    {v1=v1%10;
	     v2=v2-v1;
	     v1=v2/10;
	     v2=v1;
	     i++;
	    }
	    if(i!=0)
	    {
	     v3=pow(10,i-1);
	     v1=numero/v3;
	     v2=numero%v3;
	    }
	    else
	    {i=1;
	     v1=0;
	     v2=0;
	    }

	    switch(i)
	    {case 1: strcat(cad,unidades(v1)); break;
	     case 2: switch(v1)
		     {case 1 : if(v2!=0)
			       { strcat(cad,"DIECI"); }
			       else
			       { strcat(cad,decenas(v1)); }
			       break;
		      case 2 : if(v2!=0)
			       { strcat(cad,"VEINTI"); }
			       else
			       { strcat(cad,decenas(v1)); }
			       break;
		      default: strcat(cad,decenas(v1));
		     }
		     break;
	     case 3: if(v1==1&&v2>0)
		     { strcat(cad,"CIENTO"); }
		     else
		     { strcat(cad,centenas(v1)); }
		     break;
	     case 4: strcat(cad,miles(v1)); break;
	     case 5: if(v1==1)
		     { if(v2 >= 1000 &&  v2 < 2000)
		       { strcat(cad,"ONCE MIL");
			 v2 = v2 - 1000;
			 E1=1;
		       }
		       if(v2 >= 2000 &&  v2 < 3000)
		       { strcat(cad,"DOCE MIL");
			 v2 = v2 - 2000;
			 E1=1;
		       }
		       if(v2 >= 3000 &&  v2 < 4000)
		       { strcat(cad,"TRECE MIL");
			 v2 = v2 - 3000;
			 E1=1;
		       }
		       if(v2 >= 4000 &&  v2 < 5000)
		       { strcat(cad,"CATORCE MIL");
			 v2 = v2 - 4000;
			 E1=1;
		       }
		       if(v2 >= 5000 &&  v2 < 6000)
		       { strcat(cad,"QUINCE MIL");
			 v2 = v2 - 5000;
			 E1=1;
		       }
		       if(v2 >= 6000 &&  v2 < 10000)
		       { strcat(cad,"DIECI");
			 E = 1;
			 E1=1;
		       }
		       if(v2<1000 && E1==0)
		       { strcat(cad,decemiles(v1)); }
		     }
		     if(v1 == 2 )
		     { if( v2 != 0 )
		       { if(v2 >= 1000 && v2 <= 1999)
			 { strcat(cad,"VEINTIUN MIL");
			   v2 = v2 - 1000;
			 }
			 else
			 { if(v2>=2000)
			   { strcat(cad,"VEINTI");
			     E = 1;
			   }
			   else
			   { strcat(cad,decemiles(v1)); }
			 }
		       }
		       else
		       { strcat(cad,decemiles(v1));}
		     }
		     if(v1>2)
		     { if(v2!=0)
		       { if(v2 >= 1000 && v2 <= 1999)
			 { switch(v1)
			   { case 3: strcat(cad,"TREINTA Y UN MIL");
				     v2 = v2 - 1000; break;
			     case 4: strcat(cad,"CUARENTA Y UN MIL");
				     v2 = v2 - 1000; break;
			     case 5: strcat(cad,"CINCUETA Y UN MIL");
				     v2 = v2 - 1000; break;
			     case 6: strcat(cad,"SESENTA Y UN MIL");
				     v2 = v2 - 1000; break;
			     case 7: strcat(cad,"SETENTA Y UN MIL");
				     v2 = v2 - 1000; break;
			     case 8: strcat(cad,"OCHENTA Y UN MIL");
				     v2 = v2 - 1000; break;
			     case 9: strcat(cad,"NOVENTA Y UN MIL");
				     v2 = v2 - 1000; break;
			   }
			 }
			 else
			 {if(v2 >= 2000)
			  { strcat(cad,decenas(v1));
			    E = 2;
			  }
			  else
			  { strcat(cad,decemiles(v1)); }
			 }
		       }
		       else
		       { strcat(cad,decemiles(v1));}
		     }
		     break;
	    }

	    if(v2 > 0)
	    { if(v1 > 2 &&  v1 < 10)
	      {	 if( i < 3 )
		 { strcat(cad," Y "); }

		 if( i >= 5 && E == 2 )
		 { strcat(cad," Y ");
		   E = 1;
		 }
	      }

	      if( i > 2 && E == 0 )
	      {	strcat(cad," "); }

	      strcat(cad1,convertir(v2));
	    }
	    strcat(cad,cad1);
	    break;
  }
 }
 return  cad;
}

 void crear_archivo()
{int long N;
 float rango;
 F=fopen("numcad.txt","w");
 if(F==NULL)
 { gotoxy(25,8); cout<<"El archivo no existe"; }
 else
 { gotoxy(25,8); cout<<"Ingrese el numero : "; cin>>rango;
   if(rango>32768)
   { N=-2004;}
   else
   { N=rango; }
   fwrite(&N,sizeof(N),1,F);
 }
 fclose(F);
}

 void adicionar_registro()
{int long N;
 float rango;
 F=fopen("numcad.txt","a");
 if(F==NULL)
 { gotoxy(25,8); cout<<"El archivo no existe"; }
 else
 { gotoxy(25,8); cout<<"Ingrese el numero : "; cin>>rango;
   if(rango>32767)
   { N=-2004;}
   else
   { N=rango; }
   fwrite(&N,sizeof(N),1,F);
 }
 fclose(F);
}

 void mostrar_archivo()
{int j=0, i=0;
 int long N;

 F=fopen("numcad.txt","r");
 if(F==NULL)
 { gotoxy(25,8); cout<<"El archivo no existe"; }
 else
 { gotoxy(1,1);cout<<"É";
   for(i=0;i<78;i++)
   { cout<<"Í"; }
   cout<<"»";
   gotoxy(1,2); cout<<"º";
   gotoxy(25,2);cout<<"Conversion de numeros a cadenas";
   gotoxy(80,2);cout<<"º";
   gotoxy(1,3);cout<<"Ì";
   for(i=0;i<78;i++)
   { cout<<"Í"; }
   gotoxy(80,3);cout<<"¹";
   gotoxy(1,4); cout<<"º"; gotoxy(80,4);cout<<"º";
   gotoxy(1,5); cout<<"º"; gotoxy(80,5);cout<<"º";
   gotoxy(5,4); cout<<"Numero   Cadena";
   gotoxy(5,5); cout<<"------   ------";

   fread(&N,sizeof(N),1,F);
   while(!feof(F))
   {gotoxy(1,6+j);  cout<<"º"; gotoxy(80,6+j);cout<<"º";
    gotoxy(5,6+j);  cout<<N;
    gotoxy(14,6+j); puts(convertir(N));
    fread(&N,sizeof(N),1,F);
    j++;
   }
   gotoxy(1,6+j); cout<<"º"; gotoxy(80,6+j);cout<<"º";
   cout<<"È";
   for(i=0;i<78;i++)
   { cout<<"Í"; }
   cout<<"¼";
 }
 fclose(F);
 getch();
}

 void realizar_procedimiento(int opc)
{ switch(opc)
  { case 1 : crear_archivo(); break;
    case 2 : adicionar_registro(); break;
    case 3 : mostrar_archivo(); break;
  }
}

 void menu_principal()
{clrscr();
 textcolor(15);
 textbackground(1);
 gotoxy(30,6); cprintf("        MENU         ");
 textcolor(15);
 textbackground(6);
 gotoxy(30,8); cprintf(" CREAR       ARCHIVO ");
 gotoxy(30,10);cprintf(" ADICIONAR  REGISTRO ");
 gotoxy(30,12);cprintf(" MOSTRAR     ARCHIVO ");
 gotoxy(30,14);cprintf("        SALIR        ");

 textcolor(15);
 textbackground(4);
}

 void principal()
{  char flecha;
   int i=1, E=0;

   textcolor(15);
   textbackground(0); cout<<" ";

   do
   {menu_principal();
    switch(i)
    {case 1: gotoxy(30,8);  cprintf(" CREAR       ARCHIVO ");
	     gotoxy(52,8);  cprintf("<-");break;
     case 2: gotoxy(30,10);  cprintf(" ADICIONAR  REGISTRO ");
	     gotoxy(52,10);  cprintf("<-");break;
     case 3: gotoxy(30,12); cprintf(" MOSTRAR     ARCHIVO ");
	     gotoxy(52,12); cprintf("<-");break;
     case 4: gotoxy(30,14); cprintf("        SALIR        ");
	     gotoxy(52,14); cprintf("<-");break;
    }
    textcolor(15);
    textbackground(0);

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
     case ENT:if(i>=0&&i<=3)
	      { clrscr();
		realizar_procedimiento(i);
	      }
	      else
	      { exit(1); }
	      break;
    }
   }while(E==0);
}

 void main()
{
  principal();
}