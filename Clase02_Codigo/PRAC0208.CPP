#include <iostream.h>
#include <conio.h>

 void main()
{float monto, imp1, imp2, imp3, imp4, imp5, impt;

 cout<<"Ingrese el monto del autovaluo : "; cin>>monto;

 if(monto<=120000)
 {imp1=0;
  impt=0;
 }
 else
 { if(monto<=170000)
   {imp1=0;
    imp2=(monto-120000)*0.25;
    impt=imp1+imp2;
   }
   else
   { if(monto<=210000)
     {imp1=0;
      imp2=50000*0.25;
      imp3=(monto-170000)*0.30;
      impt=imp1+imp2+imp3;
     }
     else
     { if(monto<=270000)
       {imp1=0;
	imp2=50000*0.25;
	imp3=40000*0.30;
	imp4=(monto-210000)*0.35;
	impt=imp1+imp2+imp3+imp4;
       }
       else
       {imp1=0;
	imp2=50000*0.25;
	imp3=40000*0.30;
	imp4=60000*0.35;
	imp5=(monto-270000)*0.40;
	impt=imp1+imp2+imp3+imp4+imp5;
       }
     }
   }
 }
 cout<<"El impuesto total a pagar es : "<<impt;

 getch();
 clrscr();
}

