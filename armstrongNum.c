#include <stdio.h>
#include <stdbool.h>
int numberOfDigit(int number);
bool evaluateArmstrong (int prototype);
int main(){
    int user_num;
    printf("please enter number?");
    scanf("%d",&user_num);
    printf("Is %d an Armstrong number?%s",user_num,evaluateArmstrong(user_num)? "True":"False");
    }
int numberOfDigit (int number)
{
    int sum =0;
    while(number !=0)
    {
        number /=10;
        sum++;
    }
    return sum;
}
bool evaluateArmstrong (int prototype)
{
    int digit = numberOfDigit(prototype);
    int sum = 0;
    for(int i = prototype; i!=0; i/=10)
    {
       int num = i%10;
       int n = 1;
       for(int j = 0; j < digit; j++)
       {
        n*=num;
       }
       sum+=n;
    }
    return sum == prototype;
}