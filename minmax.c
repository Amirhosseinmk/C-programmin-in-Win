#include <stdio.h>
void min_max(int num1,int num2,int *max,int *min)
{
 *max = (num1 > num2 ? num1:num2);
 *min = (num1 > num2 ? num2:num1);
}
int main(){
    int num1 , num2, maxValue, minValue;
    printf("please insert num1:");
    scanf("%d",&num1);
    printf("please insert num2:");
    scanf("%d",&num2);
    min_max(num1,num2,&maxValue,&minValue);
    printf("maximum value is:%d\n",maxValue);
    printf("minimum value is:%d",minValue);
    return 0;
}