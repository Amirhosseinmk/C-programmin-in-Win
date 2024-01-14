#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int day;
    int month;
    int year;
}DATE;
DATE input()
{
    DATE x;
    printf("insert the day:");
    scanf("%d",&x.day);
    printf("insert the month:");
    scanf("%d",&x.month);
    printf("insert the year:");
    scanf("%d",&x.year);
    return x;
}
void printDate(DATE x){
    printf("the day:%d , the month:%d , the year:%d",x.day,x.month,x.year);
}
int main()
{
    DATE graduationDate;
    graduationDate = input();
    printDate(graduationDate);
    

    return 0;
}