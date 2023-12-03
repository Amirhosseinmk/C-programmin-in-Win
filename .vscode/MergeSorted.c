#include <stdio.h>
void swap(int*a, int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void prt_array(int size, int data[])
{
    int i;
    for(i=0 ; i<size; i++)
    printf("%d\t",data[i]);
}
void bubble_sort(int data[], int size)
{
    int i,j;
    for(i=0; i<size; i++){
    for(j=size-1; j>i; j--)
    if(data[j-1] > data[j])
    swap(&data[j-1],&data[j]);
}
}
void merge (int a[], int b[],int c[],int size)
{
    int i =0, j=0, k=0;
    while(i < size && j < size)
    if( a[i] < b[j])
    c[k++] = a[i++];
    else
    c[k++]= b[j++];
    while(i < size)
    c[k++]=a[i++];
    while(j < size)
    c[k++]=b[j++];
}
int main (void){
    const int size = 5;
    int a[5] = {70,10,20,30,80};
    int b[5] = {5,10,15,2,1};
    int c[2*size];
    printf("Data A is:\n");
    prt_array(size,a);
    printf("\n");
    printf("Data B is:\n");
    prt_array(size,b);
    printf("\n");
    printf("\nSorted data A is:\n");
    bubble_sort(a,size);
    prt_array(size,a);
    printf("\n");
    printf("\nSorted data B is:\n");
    bubble_sort(b,size);
    prt_array(size,b);
    printf("\n\n");
    printf("sorted merge data is:\n");
    merge(a,b,c,size);
    prt_array(2*size,c);
    return 0;
}