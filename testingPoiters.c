#include <stdio.h>
#include <stdlib.h>
int main(){
    int num1 = 5, num2 = 2;
    int *ptrA, *ptrB;
    ptrA = &num1;
    ptrB = &num2;
    *ptrA = *ptrA + 1;
    *ptrB = *ptrB + 3;

    //printf("value of num1: %d\n, num2:%d",num1, num2);
    ptrA = ptrB; // ptrA -> num2 , beccause ptrB -> num2
    ptrB = ptrA; // ptrB -> num2 , because in the line above we initiolize ptrA = num2.

    printf("value of num1: %d\n num2:%d\n",num1, num2);
    printf("value of *ptrA: %d\n, *ptrB:%d",*ptrA, *ptrB);
    return 0;
}