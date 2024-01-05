#include <stdio.h>
void swap(int *a,int *b);
void bubble_sorting(int size,int a[]);
int main(){
    int a[] = {8,4,7,3,2,1};
    int size = sizeof a / sizeof a[0];
bubble_sorting(size,a);
    
}
void swap(int *a,int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;

}
void bubble_sorting(int size,int a[])
{
    for(int i = 0; i<size;i++)
    {
        for(int j=size-1; j>i; j--)
        {
            if(a[j]<a[j-1])
            {
               swap(&a[j],&a[j-1]);
            }
        }
      printf("%d",a[i]);  
    }
}