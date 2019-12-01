#include "myBank.h"

double accounts[ROWS] [COLS]={{0},{0}};
void openacount(double amount)
{
    for(int i=0 ;i<COLS;i++)
    {
        if(accounts[0][i]==0)
            {
                accounts[0][i]=1;
                accounts[1][i]=amount;
                printf("The New Account Is Created **number of account is : %d\n",FIRST_ACCOUNT+i);
                return ;
            }          
    }
    printf("There Is No Closed Account \n") ;
}
void Balance_inquiry(int account_number)
{
    if(account_number-FIRST_ACCOUNT>90)
    {
        printf("The Account number is not Found!!\n");
        return;
    }
    if(account_number-FIRST_ACCOUNT<0)
    {
        printf("The Account number is not Found!!\n");
        return;
    }
    int i=account_number-FIRST_ACCOUNT;
    if(accounts[0][i]==1)
        printf("The Balance Inquiry Of This Account: %d is: %.2lf\n ",account_number,accounts[1][i]);
        else
        printf("This Account IS Close\n");

}
void new_balance(int account_number,double amount)
{
    if(account_number-FIRST_ACCOUNT>90)
    {
        printf("The Account Number Is Not Found!!\n");
        return;
    }
    if(account_number-FIRST_ACCOUNT<0)
    {
        printf("The Account number is not Found!! \n");
        return;
    }
    int i=account_number-FIRST_ACCOUNT;
    if (accounts[0][i]==1)  
        {
            accounts[1][i]= accounts[1][i]+amount;
            printf("The New Balance OF This Account : %d   Is: %lf \n",account_number, accounts[1][i]);
        }
        else
        printf("This Account :%d Is Close! \n",account_number);

}
void Cash_withdrawal(int account_number,double amount)
{
     if(account_number-FIRST_ACCOUNT>90)
    {
        printf("The Account Number Is Not Found!!\n");
        return;
    }
    if(account_number-FIRST_ACCOUNT<0)
    {
        printf("The Account Number Is Not Found!!\n");
        return;
    }
    int i=account_number-FIRST_ACCOUNT;
    if(accounts[0][i]==1)
    {
        if (accounts[1][i]-amount>=0)
            {
                accounts[1][i]=accounts[1][i]-amount;
                printf("The New Balance Of This Account :%d Is: %lf\n",account_number,accounts[1][i]);
            } 
            else
                printf("This Account Didn't Have Enough Money!!\n") ;      
    }
    else
            printf("This Account Is Close!\n");
}
void Account_Closing(int account_number)
{
    int i=account_number-FIRST_ACCOUNT;
    if(accounts[0][i]==1)
    {
        accounts[0][i]=0;
        accounts[1][i]=0;
        printf("The Account Is Closed!\n");
    }
    else
    printf("This Account Is Close!\n");
}
void add_interest(int interest_rate)
{
    if(interest_rate < 0){
				printf("Cannot interest negative number \n");
				return;
			}

    
    for(int i=0 ;i<COLS;i++)
    {
        if(accounts[0][i]==1)
        {
            accounts[1][i]+= accounts[1][i] * ((double)interest_rate/100);          
        }
    }
}
void printaccounts()
{
    for(int i=0;i<COLS;i++)
    {
        if(accounts[0][i]==1)
        {
        int account_number=i+FIRST_ACCOUNT;
        printf("Acount Number Is : %d \n  Balance Is :%.2f\n" ,account_number,accounts[1][i] );
        }
    }
}
void close_bank()
{
     for(int i=0;i<COLS;i++)
    {
        if(accounts[0][i]==1)
             {
                 accounts[0][i]=0;
                 accounts[1][i]=0;
             }
    }
    printf("All The Accounts Are Closed!\n");
}
