#include <stdio.h>
#include <math.h>

void show_balance (double balance);
double deposit(double*balance);
double withdraw(double*balance);
char option();
int main()
{   
    char op;
    double balance = 0.00;
    int choice;
    do{
    printf("Hello\n Welcome to your Bank Statement\n How can I help you today?\n");
    printf("1.SHOW BALANCE\n");
    printf("2.DEPOSIT\n");
    printf("3.WITHDRAW\n");
    printf("4.EXIT\n");
    printf("please choose between valid number 1 to 4\n");
    scanf("%d",&choice);
    switch(choice) 
    {   
        case 1 :
        show_balance(balance);
        op = option();
        break;
        case 2 :
        deposit(&balance);
        show_balance(balance);
        op = option();
        break;
        case 3 :
        withdraw(&balance);
        show_balance(balance);
        op = option();
        break;
return 0;

    }
    
}while(choice != 4 &&  op !='n');

}
void show_balance (double balance)
{
printf("your balance is: $%.2f\n",balance);
}
double deposit(double*balance) 
{
double amount = 0;
printf("how much money do you want to be deposited?\n");
scanf("%lf",&amount);
*balance = (*balance + amount);
return *balance;
}
double withdraw (double *balance)
{
    double amount = 0;
    printf("How much money do you want to withdraw?");
    scanf("%lf",&amount);
    *balance = *balance - amount;
    return *balance;
}
char option ()
{   
    char str;
    printf("Do you want to continue?(Y/N)");
    scanf(" %c",&str);
    if(str == 'n' || str == 'N')
    {
        printf("thank you for choosing us today ");
        return 0;
    }}