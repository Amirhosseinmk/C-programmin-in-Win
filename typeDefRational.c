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
int commenDenom(Rational *n1,Rational *n2)
{  
    if((*n1).denominator % (*n2).denominator == 0)
    {
        return ((*n1).denominator);
    }
    else if((*n2).denominator % (*n1).denominator == 0)
    {
        return ((*n2).denominator);
    }
    else 
    {
        return ((*n1).denominator * (*n2).denominator);
    }
   
}
Rational addtion(Rational num1,Rational num2)
{
    Rational result;
    commenDenom(&num1,&num2);
    result.numerator = (num1.numerator * num2.denominator) + (num2.numerator * num1.denominator);
    result.denominator = (num1.denominator * num2.denominator);
    return result;
    }
Rational subtraction(Rational num1, Rational num2)
{
    Rational result;
    result.denominator = (num1.denominator * num2.denominator);
    result.numerator = ((num2.denominator * num1.numerator) - (num2.numerator * num1.denominator));
    return result;

}
Rational multiplication(Rational num1,Rational num2)
{
    Rational result;
    result.numerator = (num1.numerator * num2.numerator);
    result.denominator = (num1.denominator * num2.denominator);
    return result;
}
Rational devision(Rational num1, Rational num2)
{
    Rational result;
    result.numerator = (num1.numerator * num2.denominator);
    result.denominator = (num1.denominator * num2.numerator);
    return result;
}
void increment(Rational *n)
{
  (*n).numerator = ((*n).numerator + (*n).denominator);
}
void decrement(Rational *n)
{
    (*n).numerator = ((*n).numerator - (*n).denominator);
}

int main(){
Num number;
number = input();
    Rational sum = addtion(number.num1,number.num2);
    increment(&number.num1);
    decrement(&number.num2);
    Rational sub = subtraction(number.num1,number.num2);
    Rational multi = multiplication(number.num1,number.num2);
    Rational devided = devision(number.num1,number.num2);
    printf("addtion of rational is:%d/%d\n",sum.numerator,sum.denominator);
    printf("the increment ot your first rational is:%d/%d\n",number.num1.numerator,number.num1.denominator);
    printf("the decrement ot your second rational is:%d/%d\n",number.num2.numerator,number.num2.denominator);
    printf("subtraction of rational is:%d/%d\n",sub.numerator,sub.denominator); 
    printf("multiplication of rational is:%d/%d\n",multi.numerator,multi.denominator);
    printf("devision of rational is:%d/%d\n",devided.numerator,devided.denominator);
    return 0;
}