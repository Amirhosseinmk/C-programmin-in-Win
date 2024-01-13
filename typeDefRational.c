#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct {
    int numerator;
    int denominator; 
}Rational;
typedef struct{
    Rational num1;
    Rational num2;
}Num;
Num input()
{   
    Num number;
    printf("please insert numerator of num1:");
    scanf("%d",&number.num1.numerator);
    printf("please insert denominator of num1:");
    scanf("%d",&number.num1.denominator);
    printf("please insert numerator of num2:");
    scanf("%d",&number.num2.numerator);
    printf("please insert denominator of num2:");
    scanf("%d",&number.num2.denominator);
    return number;

}
int bigger(Rational num1,Rational num2)
{  
    
   if(num1.denominator > num2.denominator)
   {
    return num1.denominator;
   }
   else
   {
    return num2.denominator;
   }
}
Rational addtion(Rational num1,Rational num2)
{
    Rational result;
    result.denominator = (num1.denominator * num2.denominator);
    result.numerator = (num1.denominator * num2.numerator) + (num2.denominator * num1.numerator);
    return result;
}

int main(){
Num number;
number = input();
    Rational sum = addtion(number.num1,number.num2);
    printf("our rational is:%d/%d",sum.numerator,sum.denominator);
}