#include "stdio.h"
#include "string.h"
#include "stdlib.h"

#include "Customer.h"
#include "feature.h"
#include "display_details.h"
void Entry()
{
    int choice,number,type,ch1,ch2,bill,Totalbill,Room=0;
    int c;
    printf("\n HOW CAN I HELP YOU\n");
    printf("\n 1.Book a room\n2.Book a party hall\n3.exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
               
               printf("Enter the type of room:\n1.Simple\n2.Semi-duplex\n3.Duplex");
               scanf("%d",&type);
               Totalbill=book_room(type);
               printf("Do you want to be a part of programs conducting by hotel: \n1.Include activities\n2.Don't include any activities\n");
               scanf("%d",&c);
               if(c==1)
               {
                printf("Choice the program:\n1.fire camp\n2.trekking\n");
                scanf("%d",&ch1);
                bill=program(ch1);
                
                Customer.billprice=Totalbill+bill;
                
               }
               if(c==2)
               Customer.billprice=Totalbill;
               printf("\n\nYour room has been booked \n");
               Room_booked();
               break;
        case 2:
               printf("Enter the type of party hall required:\n 1.NonAC\t2.Ac\n");
               scanf("%d",&ch2);
               Totalbill=book_hall(ch2);
               Customer.billprice=Totalbill;
               printf("\n\nYour party hall have been booked\n");
               Hall_booked();
               break;
        
               
              
   
        default:
              break;

               
             
            
               

    }
   
    
    



}
int main()
{
    int n;
    Customer.roomno =0;
    Customer.billprice =0;
    Customer.program ="notchosen";
    printf("***WELCOME TO NATIVE***\n");
    printf("Please enter your details before moving to the main page!\n");
    printf("please enter your name:");
    scanf("%s",Customer.name);
    printf("enter your address:");
    scanf("%s",Customer.address);
    printf("enter your nationality:");
    scanf("%s",Customer.nationality);
    printf("enter your email_id:");
    scanf("%s",Customer.email_id);

    Entry();
    



   
 return 0;
}