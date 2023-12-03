#include <stdio.h>
 int reps = 0;

void f(void)
{
    static int called = 0;
    printf("f called = %d\n", called );
    called++;
    reps = reps + called;   
}
int main(void){
     int i = 1;
    const int limit =10;
    for(i=1; i<limit; i++){
    printf("i local = %d  , universal reps=%d\n", i, reps);
    f();}
    return 0;
     }
