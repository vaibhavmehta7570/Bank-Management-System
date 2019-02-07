#include<stdio.h> 
#include<conio.h> 
#include<stdlib.h> 
int bal=0,r,type; 
char name[20]; 
void create() 
{   
    int ch; 
    printf("Enter the account holder's name \n"); 
    scanf("%s",&name); 
    printf("Enter the type of account you wish to open 1. SB    2.FD     3.Shared \n"); 
    scanf("%d",&type); 
    r=rand();   
} 
void deposit() 
{ 
    int amt; 
    printf("enter the amount you need to deposit :\n "); 
    scanf("%d",&amt); 
    bal=bal+amt; 

    printf("YOur current balance is : %d\n",bal); 
} 
void withdraw() 
{ 
    int amt; 
    if(bal==0) 
    { 
        printf("Your current account balance is: 0 \n"); 
    } 
    else 
   { 
        printf("Enter the amount to be withdrawn: "); 
        scanf("%d",&amt); 
        if((bal-amt)<0) 
        { 
            printf("Transaction Failed withdrawal not possible...INSUFFICIENT BALANCE  \n"); 
        } 
        else 
       { 
            bal=bal-amt; 
            printf("Your current balance is : %d\n",bal); 
        } 
    } 
} 
void balance() 
{ 

    printf("Your current balance is : %d\n",bal); 
} 
int main() 
{ 
    int ch,ch1; 
    printf("press 1 to create the account\npress 2 key to exit"); 
    scanf("%d",&ch1); 
    if(ch1==1) 
    {  
     create(); 
     for(;;) 
     { 
      printf("Your account no is: %d\n",r); 
      printf("Account Holder name is: %s\n",name); 
         printf("Enter your choice :"); 
         printf(" 1:Deposit"); 
         printf("2:Withdraw        3:check balance"); 
         printf("4: Exit "); 
         scanf("%d",&ch); 
         switch(ch) 
         { 
             case 1: deposit(); 
                     break; 
                      
             case 2: withdraw(); 
                     break; 
                      
             case 3: balance(); 
                     break; 
             default : exit(0);      
         } 
     } 
 } 
 else 
  exit(0); 
return 0; 
} 
