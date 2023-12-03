#include <stdio.h>
int main(){
FILE *fptr;
fptr = fopen("C:\\Users\\Amir\\Desktop\\C++ projects\\game.c", "r");
if(fopen == NULL){
    printf("error opening file\n");
    return 1;
}
fclose(fptr);
return 0;
}