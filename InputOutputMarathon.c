#include<stdio.h>
int main(void){
    int mile, yard;
    printf("enter the mile :\n");
    scanf("%d", &mile);
    printf("enter the yard :\n");
    scanf("%d",&yard);
    double kilometer;
    kilometer=1.609 * (mile + yard/ 1760.0);
    printf("\n A marathon is %lf kilometer.\n\n", kilometer);
    return 0;
}