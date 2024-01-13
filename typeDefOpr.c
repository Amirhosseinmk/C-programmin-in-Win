#include <stdio.h>
#include <stdlib.h>
typedef struct employee
{
    char name[20];
    int age;
}Employee;
typedef struct points
{
    int x;
    int y;
}Points;
typedef struct point
{
    Points p1;
    Points p2;
}Point;

int greater(){
    Employee employee1,employee2;
    if(employee1.age > employee2.age)
    {
        return 1;
    }
    else {
        return 0;
    }
}
Point input(){
    Point point;
    printf("please insert x for p1:");
    scanf("%d",&point.p1.x);
    printf("please insert y for p1:");
    scanf("%d",&point.p1.y);
    printf("please insert x for p2:");
    scanf("%d",&point.p2.x);
    printf("please insert y for p2:");
    scanf("%d",&point.p2.y);
    return point;
}





















int main(){

}