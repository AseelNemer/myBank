#include <stdio.h>
#include <stdbool.h>
#include <math.h>
 
 #define ROWS 2
 #define COLS 50
 #define FIRST_ACCOUNT 901
 #define LAST_ACCOUNT 950



 void openacount(double amount);
 void Balance_inquiry(int account_number);
 void new_balance(int account_number,double amount);
 void Cash_withdrawal(int account_number,double amount);
 void Account_Closing(int account_number);
 void add_interest(int interest_rate);
 void printaccounts();
 void close_bank();
 
