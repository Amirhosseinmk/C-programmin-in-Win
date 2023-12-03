#include <stdio.h>
#include <string.h>
struct user_amir {
    int pass;
    char username[100];
};
struct user_leon {
    int pass;
    char username[100];
};
int main(){
 struct user_amir s1; 
 struct user_leon s2;
 strcpy(s1.username, "amir@yahoo.com");
 strcpy(s2.username, "leon@yahoo.com");

    char input[100];
    int my_answer = 0;
    do{
        printf("enter your username:");
    scanf("%s",&input);
    if(strcmp(s1.username,input)==0) { 
        printf("your username is correct");
        my_answer = 1;
    }
    else { 
        printf("try again\n");
    }}while(!my_answer);
    return 0;
}