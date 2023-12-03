#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main(void){
    double parameter;
    double result;
    printf("enter a number between 0 and 1 :\n");
    scanf("%lf", &parameter);
    if (parameter >0 && 1> parameter){
    result = sin(parameter * PI/180);    
    printf("your result for input %f is %f\n",parameter,result);
    }
    else{ 
    printf("you chose a wrong parameter which is not included between 0 and 1");

    }
    return 0;
}