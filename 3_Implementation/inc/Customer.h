
/**
 * @file Customer.h
 * @author Soumya
 * @brief Customer Structure defination
 * @date 2021-08-30
 * @version 3.2
 * @copyright Copyright (c) 2021
 * 
 */


#ifndef CUSTOMER_H
#define CUSTOMER_H
#include"math.h"
 struct { 
 char name[20];
 char address[50];
 char email_id[30];
 char nationality[25];
 int roomno;
 char *roomtype;
 int billprice;
 char *program;
 char *status;
}Customer;
#endif