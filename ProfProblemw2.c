#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
 double radius;
 printf("enter radius:");
 scanf("%lf", &radius);
printf("volume is : %lf \n\n", 4 *radius*radius*radius*PI/3 );
return 0;
}