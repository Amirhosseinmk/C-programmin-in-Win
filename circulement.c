#include <stdio.h>
#define PI 3.14159
int main(){
    double area=0.0 ,radius=0.0;
    printf("Enter the redius: ");
    scanf("%lf",&radius);
    area= PI * radius * radius;
    printf("radius of %lf meter, area is %lf sq.r meter\n", radius,area);
    return 0;

}