#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "myBank.h"


int main()
{   
    bool continueprogram=true;
    while(continueprogram)
    {
     char input;
        printf("Enter Your Transaction Type! \n");
        scanf(" %c",&input);
        switch (input)
        {
            case 'O':
            {
             double amount;
                printf("Enter initial deposit :\n");
                scanf("%lf",&amount);
                if(amount<0)
                  {
                      printf("Amount Most Be Bigger Than 0! \n");
                        break;
                    }
                openacount(amount);
                break;
          }
          case 'B':
          {
               int account_number;
              printf("Enter Account Number Please \n");
              scanf(" %d",&account_number);
              Balance_inquiry( account_number);
             break;
         }
          case 'D':
          {
             double amount;
             int account_number;
             printf("Enter Account Number Please! \n");
             scanf(" %d",&account_number);
                printf("Please Enter Amount To Deposit \n");
             scanf (" %lf",&amount);
                new_balance( account_number, amount);
               break;
           }
           case 'W' :
           {
                double amount;
                int account_number;
                printf("Enter Account Number Please! \n");
               scanf(" %d",&account_number);
                printf("Please Enter Amount To Withdraw \n");
               scanf (" %lf",&amount);
                Cash_withdrawal(account_number,amount);
                break;
           }
           case 'C':
           {
             int account_number;
               printf("Enter Account Number Please! \n");
              scanf(" %d",&account_number);
                Account_Closing( account_number);
             break;
          }
            case 'I':
            {
            int interest_rate;
            printf("Enter interest rate: \n");
            scanf(" %d",&interest_rate);
            add_interest( interest_rate);
            break;
         }
          case 'P':
          {
            printaccounts();
            break;
          }
          case 'E':
          {
             close_bank();
             continueprogram=false;
             return 0;
            }   
          default:
               printf("No such transaction action exist, Please try again\n");
                break;
      }
    }
    return 0;
   
}