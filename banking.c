#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct customer
{
    char name[30];
    int phone;
    char address[60],c;
    int acc_no;
}m;
void main()
{
 printf("############ ENTER INFORMATION RELATED TO CUSTOMER ################\n");
 printf("enter customer name :\n");
 scanf("%[^\n]s",m.name);
 printf("enter contact number of customer :\n");
 scanf("%d",&m.phone);
 printf("enter address of the customer :\n");
 scanf("%[^\n]s",m.address);
 printf("enter account number of customer :\n");
 scanf("%d",&m.acc_no);

 printf("############# DISPLAY INFORMATION RELATED TO CUSTOMER ###############\n");
 printf("customer name is :\n");
 puts(m.name);
 printf(" contact number of customer :\n%d ",m.phone);
  printf("\ncustomer address is :\n");
 puts(m.address);
 printf(" \naccount number of customer : \n%d",m.acc_no);
int amount,deposit=0,withdraw,account,transfer,choice,minbal=500;
float rate,time,interest;
    while(1)
    {

    printf("\n****** WELCOME YOU TO THE BANKING SERVICE ******");
    printf("\n1 check your account balance");
    printf("\n2 Deposit Cash");
    printf("\n3 Withdraw Cash");
    printf("\n4 Enter account number");
    printf("\n5 interest on your deposit");

    printf("\n6 Quit the process");
    printf("\n7 minimum balance to keep your account in working");
    printf("\n @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    printf("\n########################## ****************** ####################################");
    printf("\nEnter your choice");
    scanf("%d",&choice);


switch(choice)

{
   case 1:
   amount=deposit+minbal;
   printf("\n your balance is %d",amount);
   break;
   case 2:
   printf("\n enter amount to deposit");
   scanf("%d",&deposit);
   amount=minbal+deposit;
   printf("\n your total balance is %d",amount);
   break;
   case 3:
   printf("\n enter amount to withdraw");
   scanf("%d",&withdraw);
   if(withdraw%100!=0)
   {
   printf("withdraw cash is multiple of 100");
   }
   else if(withdraw>(amount-minbal))
   {
   printf("insuficcient balance");
   }
   else
   {
   amount=amount-withdraw;
   printf("your remaining balance is %d",amount);
   }
   break;
   case 4:
   printf("\n enter account number ");
   scanf("%d",&account);
   printf("\n enter amount to transfer ");
   scanf("%d",&transfer);
   if(transfer%100!=0)
   {
   printf("transfer cash is multiple of 100");
   }
   else if(transfer>(amount-minbal))
   {
   printf("insufficient cash for transfer");
   }
   else
   {
   amount=amount-transfer;
   printf("Your transfer is completed");
   printf("total amount left is %d",amount);
   }
   break;
   case 5:
   printf("\n**********INTEREST INFORMATION****************");
   printf("\n information regarding interest on your deposits");
   printf("\n enter amount to depoisit :");
   scanf("%d",&deposit);
   amount=(deposit+minbal);
   printf("\n total amount in your account is %d",amount);
   printf("\n percentage rate on your amount :");
   scanf("%f",&rate);
   printf("\n total time for which you deposited your amount in bank :");
   scanf("%f",&time);
   interest=(amount*rate*time)/100;
   printf("\n total interest on your deposit is %f",interest);
   printf("\n ################ NOW YOUR NEW AMOUNT WITH INTEREST IN YOUR ACCOUNT ####################");
   amount=(amount+interest);
   printf("\n new amount in ypur account is %d",amount);
   break;
   case 6:
   exit(0);
   break;
   case 7:
   printf("\n your minimum account balance is %d",minbal);
   break;
   default:
   printf("Invalid option is choosen");
   break;
   printf("#######  THANK YOU #######");

}
printf("\nTHANK YOU FOR BEING A VALUEABLE CUSTOMER\n");
getch();
   }
}

