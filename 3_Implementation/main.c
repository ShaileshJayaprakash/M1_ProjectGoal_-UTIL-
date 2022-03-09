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
  int ch,cust_count=0,i,act_no;
void main()
{
    
	    printf("<<<-----------------*-------------------->>>\n1: Add New Customer Wallet.\n");
	    printf("2: Search Existing Customer Account.\n");
        printf("3: Pay the Bills.\n");
        printf("4: Print All Customers Details.\n");
        printf("5: Top-Up Balance.\n");
        printf("6: Exit\n<<<-----------------*-------------------->>>\n");

        printf("\nselect what do you want to do ?:- ");
	    
        
    while(1){
        scanf("%c",&ch); 
        switch (ch){
            case '1':
                cust_count += 1;
                 printf("Serial number:- %d", cust_count);
                int id = createAccount(i);
                i += 1;
                printf("Your Account Number is:- %d\n\n", id);
                main();
                break;
            case '2':
                printf("Enter the Account Number:- ");
                scanf("%d", &act_no);
                searchACustomer(act_no);
                main();
                break;
            case '3':
                printf("Enter the Account Number:- ");
                scanf("%d", &act_no);
                payBill(act_no);
                main();
                break;
            case '4':
                printAllCustomers();
                main();
                break;
            case '5':
                printf("Enter Your Account Number:- ");
                scanf("%d", &act_no);
                addBalance(act_no);
                main();
                break;
            case '6':
                printf("<<<----------Records Saved Successfully<<>>Thanks For Using:):)--------->>>");
                exit(0);
                break;
        }
    }
      return;
 }