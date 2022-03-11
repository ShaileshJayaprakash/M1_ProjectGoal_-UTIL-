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
void addBalance(int act_no)
      {
          float amount = 0;
          int cust_count=0;
          printf("Enter the amount to add for your Wallet:- ");
          scanf("%f", &amount);
          for(int i =0; i < cust_count; i++){
              if (customer[i].acct_no == act_no){
                  customer[i].balance += amount;
                  printf("Updated account balance:- %.2f\n\n", customer[i].balance);
              }
          }
          return;
      }