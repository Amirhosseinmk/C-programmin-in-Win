#include<stdio.h>
double sqaure (double);
double cube (double);
int main (void){
    int how_many=0 ,i,j;
    printf(" I want to cube and sqaure fot 1 to n where n is: ");
    scanf("%d", &how_many);
    for ( i=1; i<= how_many; i++){
        for (j=0; j<10 ; j++)
        printf("\n%lf\t%lf\t%lf", i+j/10.0,sqaure(i+j/10.0),cube(i+j/10.0));
    }
return 0;
};
double sqaure (double x){
return (x * x);
}
double cube ( double x){
    return (x*x*x);
}