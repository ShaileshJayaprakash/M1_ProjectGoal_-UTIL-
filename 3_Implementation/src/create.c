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
int id = 10001;
 int createAccount(int ind)
    {
          customer[ind].acct_no = id++;
          printf("\nEnter the name of the customer:- ");
          scanf("%s", customer[ind].name);
          printf("Enter Contact Number:-\t");
          scanf("%ld", &customer[ind].mobile_no);
          printf("Enter city:- ");
          scanf("%s", customer[ind].city);
          printf("How much balance you want to maintain:- ");
          scanf("%f", &customer[ind].balance);
          return customer[ind].acct_no;
      }