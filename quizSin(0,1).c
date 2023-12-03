#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main(void){
    double parameter=0.35; // as an instructure said to use a number between 0 and 1
    double result;
    result = sin (parameter * PI/180);
    printf("a number between 0 and 1 is %f and the result is %f", parameter,result);
    return 0;
}