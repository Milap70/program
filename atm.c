#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
int acc[5]={1,2,3,4,5};
int pass[5]={1001,2020,3333,4044,5005};
int num,pin,try=3,count=0,choice,balance,amount,n_balance;

srand(time(0));
balance = rand()%1000 +1;

printf("Enter Acoount Number:");
scanf("%d",&num);
printf("Enter Pin:");
scanf("%d",&pin);
         
         while(try!=0){
        if(pin == pass[num-1])
            {
                printf("login successfull");
                count++;
                break;
             }
       else
          {
             try--;
            printf("wrong crendentials\n you have %d attempts left: ",try);
          }
        }
do{
printf("1.Check Balance\n ");
printf("2.Withdraw money\n ");
printf("3.Deposit money\n ");
printf("4.Exit\n ");
printf("Enter choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("Your Balance is %d$\n",balance);
        break;

case 2: printf("enter amount you want to withdrw\n:");
        scanf("%d",&amount);
        n_balance = balance-amount;
        printf("you withdraw %d$,%d balance left",amount,n_balance);
        break;

case 3: printf("enter amount you want to Deposit\n:");
        scanf("%d",&amount);
        n_balance = balance+amount;
        printf("you Deposit %d$,%d balance left",amount,n_balance);
        break;

case 4: printf("Thank you");
        count++;
         break;
         default:
         printf("invalid choice");
}
}while(count!=2);


}
