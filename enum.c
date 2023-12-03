#include <stdio.h>
#include <string.h>
enum level {
    low = 30, //comment: all of the levels are in CM
    medium,
    high
};
void choosing_hight(enum level *hight);
int main ()
{
    enum level hight;
    choosing_hight(&hight);
    switch(hight){
        case 30:
        printf("it is the minimum hight: %d",hight);
        break;
        case 31:
        printf("it is the medium hight: %d",hight);
        break;
        case 32:
        printf("it is the tallest hight: %d",hight);
        break;
    }
    return 0;

}
void choosing_hight (enum level *hight)
{
    
    printf("insert your level:");
    scanf("%d",hight);

}