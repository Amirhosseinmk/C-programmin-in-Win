#include <stdio.h>
void findingTarget(int data[], int size);
void target (int data[], int size, int result,int i);
int main(){
    int data [] = {2,3,4,5,0};
    int size = sizeof data / sizeof data[0];
    findingTarget(data,size);
    return 0;
}
void findingTarget(int data[], int size){
for(int i = 0; i < size -1; i++)
{
    int result = data[i] + data[i + 1];
    target(data,size,result,i);
}
}
void target (int data[], int size, int result,int i){
for(int j = size - 1; j >= i; j--)
{
if(result == data[j])
{
    printf("The target is: %d\t by adding these two:%d + %d",data[j],data[i],data[i+1]);
}
}
}