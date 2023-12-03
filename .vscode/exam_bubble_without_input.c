#include<stdio.h>
void swap(int*a, int*b)
{

    int temp=*a;
    *a=*b; 
    *b=temp;

}
void prt_array(int how_many,int data[],char *str)
{
    int i; 
    printf("%s",str);
    for(i=0; i<how_many; i++)
    printf("%d\t",data[i]);

}
void bubble(int data[],int how_many) 
{
    int i ,j;
    int go_on;
    for(i=0; i<how_many; i++){
    for(j=how_many-1; j>i;j--)
    if(data[j-1] > data[j])
        swap(&data[j-1],&data[j]);
    }  
}
int main (void){
    const int size = 5;
    int grades[]={78, 67, 92, 83, 88};
    prt_array(size,grades,"my grades\n");
    printf("\n\n");
    bubble(grades,size);
    prt_array(size,grades,"my sorted grades\n");
    printf("\n\n"); 
    return 0;
}
