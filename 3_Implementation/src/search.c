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

void searchACustomer(int act_no)
      {
         int cust_count = 0; 
          for(int i = 0; i < cust_count; i++){
              if(customer[i].acct_no == act_no){
                  printf("Customer ID is:- %d\n", customer[i].acct_no);
                  printf("Customer name:- %s\n", customer[i].name);
                  printf("Customer mobile number:- %ld\n", customer[i].mobile_no);
                  printf("customer city name:- %s\n", customer[i].city);
                  printf("Account balance:- %.2f\n\n", customer[i].balance);
              }
          }
          return;
      }