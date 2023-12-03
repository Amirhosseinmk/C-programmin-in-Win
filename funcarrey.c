#include<stdio.h>
double average_grades(int howmany, int grades[]){
    int i;
    double sum = 0;
    for( i =0; i< howmany; i++)
    sum = sum + grades[i];
return (sum / howmany);
}
void print_table_grades(int howmany, int grades[]){
    int i;
    printf(" I have %d grades\n",howmany);
    printf(" my grades are :\n");
    for (i=0; i<howmany; i++)
    printf("%d\t",grades[i]);
    printf("\n");

}
int main (void){
    int const SIZE= 5;
    int grades[SIZE];
    grades[0]= 24;
    grades[1]= 10;
    grades[2]= 30;
    grades[3]= 15;
    grades[4]= 25;
    print_table_grades(SIZE,grades);
    printf("\n\n");
    printf("my average is %.3f", average_grades(SIZE,grades));
    return 0;
    }


    
    
