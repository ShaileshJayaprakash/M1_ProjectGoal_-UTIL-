
#include "bill.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
  struct account {
	char name[100];
	int acct_no;
	long mobile_no;
	char city[100];
	float balance;
  }customer[1000];
 
 void printAllCustomers() {
      int cust_count=0;
          for (int i = 0; i < cust_count ; i++ )
          {
              printf("CUSTOMER-- %d\n", (i+1));
              printf("\t Customer ID:- %d\n", customer[i].acct_no);
              printf("\t customer name:- %s\n", customer[i].name);
              printf("\t customer mobile:- %ld\n", customer[i].mobile_no);
              printf("\t Customer city:- %s\n", customer[i].city);
              printf("\t Customer Balance:- %.2f\n", customer[i].balance);
          }
          return;
      }