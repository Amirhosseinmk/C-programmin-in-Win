#include <stdio.h>
#include <stdlib.h>

typedef struct employee
{
    char name[20];
    int age;
}Employee;
typedef struct point
{
    int x;
    int y;
}Point;
int greater (Employee emp1 , Employee emp2)
{   
    if(emp1.age > emp2.age)
    return 1;
    else
    return 0;
}
Point addition (Point p1 ,Point p2)
{
    Point result;
    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y;ßß
    return result;
}
void increment(Point *p)
{
    (*p).x++;
    (*p).y++;
}

int main(){
Employee employee1 = {"amir",27};
Employee employee2 = {"john",30};
Point p1 = {2,5};
Point p2 = {6,8};
greater(employee1,employee2);
Point p3 = addition(p1,p2);
increment(&p1);
increment(&p2);
printf("%d\n",greater(employee1,employee2));
printf("%d , %d\n",p3.x,p3.y);
printf("%d ,%d\n",p1.x,p1.y);
printf("%d, %d\n",p2.x,p2.y);
return 0;
}
