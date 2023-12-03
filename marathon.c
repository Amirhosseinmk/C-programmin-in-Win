#include<stdio.h>
int main(void){
    int mile=26, yard=385;
    double kilometer;
    kilometer=1.609 * (mile + yard/ 1760.0);
    printf("\n A marathon is %lf kilometer.\n\n", kilometer);
    return 0;
}