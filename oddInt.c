#include <stdio.h>
#include <math.h>
int main(){
    int data [] = {1,2,2,3,3,3,4,3,3,3,2,2,1};
    int size = sizeof data / sizeof data[0];
    int result;
    for(int i = 0; i < size -1; i++)
    {
        for(int j =(size -1); j > i; j--)
        {
          printf("%d\t%d\n",data[i],data[j]);
        }
    }    
return 0 ;
}