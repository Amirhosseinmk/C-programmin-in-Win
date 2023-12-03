#include <stdio.h>

void show_balance(double balance)
{
    printf("Your Balance is : $%d", balance);
}
double deposit()
{
    double amount = 0.0;
    printf("How much money do you want to be deposited?:");
    scanf("%d",&amount);

if (amount > 0){
        
        return amount;
}  
    else { 
        printf("You insert a wrong value");
        return 0;
}

}
double with_draw (double balance)
{
    double amount=0.0;
    printf("How much money do you want to be withdrawn?:");
    scanf("%d",&amount);
if (balance<amount){
    printf("You are going to OVERDRAWING your account\n");
    return amount;
}
    

}
int main (){
    double balance = 0.0;
    int choice = 0;
    

    do {
        printf("\n***********************\n WHAT DO YOU WANT TO DO?\n***********************\n");
        printf("1.SHOW BALANCE\n");
        printf("2.DEPOSIT\n");
        printf("3.WITHDRAW\n");
        printf("4.EXIT\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            show_balance(balance);
            break;
            case 2:
            balance = balance + deposit(); 
            show_balance(balance);
            break;
            case 3:
            balance = balance - with_draw(balance);
            show_balance(balance);
            break;
            case 4:
            printf("thank you for choosing us today");
            break;
            default:
            printf("Invalid input");
        }

    } while ( choice != 4);
return 0;
}