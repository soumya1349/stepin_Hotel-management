#include"Customer.h"
#include"stdio.h"

void Room_booked()
{
    printf("***Details***\n");
    printf("Name: %s\n",Customer.name);
    printf("Nationality: %s\n",Customer.nationality);
    printf("Email-Id: %s\n",Customer.email_id);
    printf("Room-No: %d\n",Customer.roomno);
    printf("Room-type: %s\n",Customer.roomtype);
    printf("Programs Taken: %s\n",Customer.program);
    printf("Generated bill is: %d\n",Customer.billprice);
    printf("***Thank you for visiting***\n");
    printf("***Have a Nice day***\n");

}
void Hall_booked()
{
    printf("***Details***\n");
    printf("Name: %s\n",Customer.name);
    printf("Nationality: %s\n",Customer.nationality);
    printf("Email-Id: %s\n",Customer.email_id);
    printf("Status of Booking: %s\n",Customer.status);
    printf("Generated bill is: %d\n",Customer.billprice);
    printf("***Thank you for visiting***\n");
    printf("***Have a Nice day***\n");

}