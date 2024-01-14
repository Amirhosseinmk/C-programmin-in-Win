#include <stdio.h>
#include <math.h>
void BreakEvaluation(int column,int row);
int main(){
    int n;
    int m;
    printf("please determine n:");
    scanf("%d",&n);
    printf("please determine m:");
    scanf("%d",&m);
   BreakEvaluation(n,m);
    return 0;
}
void BreakEvaluation(int column,int row){
    int rB = row - 1;
    int cB = (column - 1) * row;
    int FinalB = rB + cB;
    printf("you need the minimum of %d break",FinalB);
}