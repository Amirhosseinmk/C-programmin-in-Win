#include <stdio.h>
#include <stdlib.h>
typedef struct  {
int x;
int y;
}Point;

Point inserting()
{   
    Point dx;
    printf("please inser the x point:");
    scanf("%d",&dx.x);
    printf("please inser the y point:");
    scanf("%d",&dx.y);
    return dx;
}

void printing(Point dx)
{
    printf("(x,y)=(%d,%d)",dx.x,dx.y);
}
int main(){
    Point place;
    place = inserting();
    printing(place);
    return 0;
}