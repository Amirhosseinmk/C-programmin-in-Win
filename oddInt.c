#include <stdio.h>
#include <math.h>
int main(){
int data [] = {1,2,2,3,3,3,4,3,3,3,3,2,2,4,1};
int size = sizeof data / sizeof data[0];
int result;
for(int i = 0; i<size-1; i++)
{   
    int count = 0;
    for(int j = size - 1; j >= 0; j--)
    {
        if(data[i] == data[j])
        {
            count+=1;
        }
    }
    result = count%2;
    if(result != 0)
    {
       printf("%d",data[i]);
       return 0;
    }
}
}