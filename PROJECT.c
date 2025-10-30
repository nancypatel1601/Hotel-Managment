
#include <stdio.h>


int main ()
{
        int   a,b,c,rt,rc,tn,rt1,rt2,rbill,tbbill,tbill ;


        hello :


        tbbill=0 ;
        rbill=0;
        tbill=0 ;




        printf ("\n\n\t\t\t Welcome to Hotel JAY AMBE ") ;


        printf ("\n\t\t\t MAIN MENU ");


        printf ("\n\t\t\t 1.Book Room ");
        printf ("\n\t\t\t 2.Book Table  ");
        printf ("\n\n\t\t\t Enter Your choice ");
        scanf ("%d",&a);


        if (a==1)
        {
                hi :


                printf ("\n\n\t\t\t ROOM MENU ");
                printf ("\n\t\t\t 1.Non AC 2 sharing   800  /-");
                printf ("\n\t\t\t 2.Non AC 3 sharing   1000 /-");
                printf ("\n\t\t\t 3.Non AC 4 sharing   1200 /-");
                printf ("\n\t\t\t 4.AC 2 sharing       1500 /-");
                printf ("\n\t\t\t 5.AC 3 sharing       1800 /-");
                printf ("\n\t\t\t 6.AC 4 sharing       2200 /-");


                printf ("\n\n\t\t\t Enter Your Choice : ");
                scanf ("%d",&rt);


                if (rt==1)
                        rt1=800 ;


                else
                if (rt==2)
                        rt1=1000;


                else
                if (rt==3)
                        rt1=1200;


                else
                if (rt==4)
                        rt1=1500;


                else
                if (rt==5)
                        rt1=1800;


                else
                if (rt==6)
                        rt1=2200;


                else
                        goto hi ;


                printf ("\n\t\t\t Rooms Required : ");
                scanf ("%d",&rc);


                rbill=rbill+(rc*rt1);


                hlo :




                printf ("\n\n\t\t\t1. Return to main menu ");
                printf ("\n\t\t\t 2. Return to room menu ");
                printf ("\n\t\t\t 3. Return to table menu ");
                printf ("\n\t\t\t 4. Head forward to bill payment ");
                printf ("\n\t\t\t Enter Your choice : ");
                scanf ("%d",&b);


                if (b==1)
                        goto hello ;


                else
                if (b==2)
                        goto hi ;


                else
                if (b==3)
                        goto h1 ;


                else
                if (b==4)
                        goto bye ;


                else
                        goto hlo;




        }


        else
        if (a==2)
        {
                h1 :




                printf ("\n\n\t\t\t Table Menu ");
                printf ("\n\n\t\t\t 1 Table contains 4 seats ");
                printf ("\n\n\t\t\t 1. Table for morning snacks    600  /-" );
                printf ("\n\t\t\t 2. Table for lunch             1000 /- ");
                printf ("\n\t\t\t 3. Table for afternoon snack   800  /-") ;
                printf ("\n\t\t\t 4. Table for dinner            1200 /-");
                printf ("\n\n\t\t\t Enter Your choice ");
                scanf ("%d",&c);


                if (c==1)
                        rt2=600;


                else
                if (c==2)
                        rt2=1000;


                else
                if (c==3)
                        rt2=800;


                else
                if (c==4)
                        rt2=1200;


                else
                        goto h1;


                printf ("\n\n\t\t\t NO. of Tables to be booked : ");
                scanf ("%d",&tn) ;
                tbbill=tbbill+(tn*rt2);


                goto hlo ;




        }


        bye :


        tbill=tbbill+rbill;


        printf ("\n\n\t\t\t  BILL WINDOW ");
        printf ("\n\n\t\t ROOM Booking BIll = %d",rbill);
        printf ("\n\t\t TABLE BILL = %d",tbbill );
        printf ("\n\n\t\t TOTAL BILL TO PAY = %d",tbill);




        return 0;

}