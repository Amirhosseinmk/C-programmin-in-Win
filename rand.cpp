#include <ctime>
#include <iostream>
#include <stdio.h>
int main (void)
{
    srand(time(NULL));
    int num = (rand()%5)+1;
    printf("%ld",num);
}