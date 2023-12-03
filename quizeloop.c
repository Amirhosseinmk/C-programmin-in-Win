#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main(void){
    double interval;
    float x;
    int i;
    for (i = 0; i < 30; i++)
    {
        interval = (i / 10.0);
        x=sin(interval*PI/180);
        printf("sin(%lf) = %lf\t",interval,abs(x));
    }
    printf("\n+++++++\n");

    return 0;
}