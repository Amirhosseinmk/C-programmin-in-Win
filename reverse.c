#include <stdio.h>
#include <string.h>
 int main(){
    char name[100];
    printf("please enter your name:");
    fgets(name,100,stdin);
    int size = strlen(name);
     name[strcspn(name, "\n")] = '\0';
    for(int i = size;i >= 0;i--){
      printf("%c",name[i]);
       
    }
    return 0;
 }