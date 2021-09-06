#include"Customer.h"
#include"stdio.h"

int book_room(int b)
{
   int bill;
   if(b==1)
   {
       bill=500;
       Customer.roomtype="Simple";
       Customer.roomno=100;
       printf("\n\nSimple room have been choosen\n");
   }
   else if(b==2)
   {
       bill=800;
       Customer.roomtype ="Semi-duplex";
       Customer.roomno=200;
       printf("\n\nSemi-duplex room have been choosen\n");
   }
   else if(b==3)
   {
       bill = 1000;
       Customer.roomtype ="Duplex";
       Customer.roomno=300;
       printf("\n\nDuplex room have been choosen\n");
   }
   
   return bill;
   
}
int book_hall(int x)
{
    int bill=0;
    if(x==1)
    {
        bill=10000;
        printf("\n\nNon-AC have been choosen\n");
        Customer.status="Non-AC hall booked";
    }
    else if(x==2)
    {
        bill=15000;
        printf("\n\nAC have been choosen\n");
        Customer.status="AC hall booked";
    }
    return bill;
}
int program(int p)
{
    int bill=0;
   if(p==1)
   {
       bill=500;
       Customer.program="fire camp";
   }
   if(p==2)
   {
       bill=800;
       Customer.program="trekking";
   }
   return bill;

}
