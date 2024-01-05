
#include <stdio.h>
#include <stdlib.h>

typedef struct {
        int day;
        int month;
        int year;
    }Date;
    void print(Date x){
       x.day = x.day + 1;
       printf("tomorrow is:%d , month:%d , year:%d",x.day,x.month,x.year);
    }
    Date inputDate(){
        Date x;
        printf("insert day:");
        scanf("%d",&x.day);
        printf("insert month:");
        scanf("%d",&x.month);
        printf("inserd year:");
        scanf("%d",&x.year);
        return x;
    }
    int main(){
        Date today;
        today = inputDate();
        print(today);
        return 0;
    }

    
