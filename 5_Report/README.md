# Description
It is a simple console utility app designed to demonstrate the practical use of c programming language.The growth in business,finance and banking also lead to the growth in the need of e-finance applications where all the information regarding the customer transanctions can be maintained online.Online wallet is a console based utility app where a customer can create and maintain an account. This account contains all the information of the customer and can be accessed through mobile phone at the comfort of the customer.

# Identifying Features

1. Easy to operate and understandable.
2. Developed using C language.
3. The simple calculations are embedded in the code.
4. Customer-defined consolidation.
5. Multi-pay with automated remitance capture.
       
### Services
Service is the entity offered by the company/organization/bank and targeted to the customers.

### Accounts
The customer account includes customer contact, profile information, account number, city and balance amount in the account.

### Payments
Each customer in the system has an account balance, which affects any invoices requested by the customer and any payments done by the customer.

## 5W's and 1H
![](/6_ImagesAndVideos/5W's%20and%201H.jpg)
  
## SWOT Analysis
![](/6_ImagesAndVideos/SWOT%20Analysis.jpg)
  
## Requirements
  
# High Level Requirements
 
| ID |                               Description                                     | Category|Status|
|----|-------------------------------------------------------------------------------|---------|------|
|HR01| New customer can create account                                               |Technical| TBI  |
|HR02| Customer can maintain a Balance                                               |Technical| TBI  |
|HR03| Customer information can be displayed                                         |Technical| TBI  |
|HR04| Customer can maintain money in account's wallet                               |technical| TBI  |
|HR05| The last transaction amount of the custmoer in the store have to be maintained|Technical| TBI  |
|HR06| Customer can opt for home delivery                                            |Technical|FUTURE|
|HR07| The data should not be lost during failure                                    |Scenario |FUTURE|
|HR08| The information of the customer sould not be leaked                           |Scenario |FUTURE|
    
# Low Level Requirements
  
| ID |                               Description                                                                        |HRID|Status|
|----|------------------------------------------------------------------------------------------------------------------|----|------|
|LR01| For Each new account a new array cell of structure type have to be created                                       |HR01| TBI  |
|LR02|Balance can be mantanied by creating a structure array each cell holding information of the user and their balance|HR02| TBI  |
|LR03| Customer information can be displayed by printing the structure array                                            |HR03| TBI  |
|LR04| When paying bill the balance attribute is modified and updated                                                   |HR04| TBI  |
|LR05| The home delivery option cane be implemented by taking the address of the customer                               |HR05| TBI  |
|LR06| The data can be protected by using file to store all the data                                                    |HR06|FUTURE|
|LR07| The data should not be lost during failure                                                                       |HR07|FUTURE|
|LR08| The authentication mechanisms have to be implementd to prevent data leakage                                      |HR08|FUTURE|

#  Test Plan and Output

|Test_ID|Description|Expected_input|Expected_output|Output|
|-------|-----------|--------------|---------------|------|
|H_01|To check whether the name variable is given in strings or not|strings without spaces|Name variable should be assigned with the given string|Success|
|H_02|check Whether the mobile number given contains only 10 digits|10 digit integer|The 10 digit number should be assigned to mobile Information placeholder|Success|
|H_03|Checking whether the amount which customer wants to pay is less than or equal to his wallet balance|1.Floating point value 2. integer|Debit the used amount from Customer's wallet and update the new balance in real-time|Success|

## Output

## Searching the account
![](/6_ImagesAndVideos/Searching%20the%20account.jpeg)
## Paying the bills
![](/6_ImagesAndVideos/Paying%20the%20bills.jpeg)
## Top-up balance
![](/6_ImagesAndVideos/Top-up%20Balance.jpeg)
## Exit
![](/6_ImagesAndVideos/Exit.jpeg)

## Badges
![codiga grade](https://api.codiga.io/project/31812/score/svg)
![codiga grade](https://api.codiga.io/project/31812/status/svg)
[![CI](https://github.com/ShaileshJayaprakash/M1_ProjectGoal_-UTIL-/actions/workflows/build.yml/badge.svg)](https://github.com/ShaileshJayaprakash/M1_ProjectGoal_-UTIL-/actions/workflows/build.yml)
[![cppcheck-action](https://github.com/ShaileshJayaprakash/M1_ProjectGoal_-UTIL-/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/ShaileshJayaprakash/M1_ProjectGoal_-UTIL-/actions/workflows/cppcheck.yml)

## Codacy Badge
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/ccd2f3bbff69441c98c374ed508ec0e5)](https://www.codacy.com/gh/ShaileshJayaprakash/M1_ProjectGoal_-UTIL-/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=ShaileshJayaprakash/M1_ProjectGoal_-UTIL-&amp;utm_campaign=Badge_Grade)



### * Documentation is done for the project with Doxygen
### * Codacy, Codiga,cpp checck cl badge work done
### * Implementation is done and the file runs succesfully

