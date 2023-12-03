#include <stdio.h>
#include <math.h>
int main()
{
    const int n = 4;
    int a[4] = {5,2,3,9};
    int i = 0 , j = 0;
    for(i=0; i<n; i++)
    for(j=n-1; j>i;j--)
    if(a[j] + a[j--] == 8)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;

}