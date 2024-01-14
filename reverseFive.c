#include <stdio.h>
#include <string.h>
int main(){
    char sentance [100];
    printf("please write a sentance:");
    fgets(sentance,sizeof(sentance),stdin);
    sentance[strcspn(sentance, "\n")] = '\0';
    int size  = sizeof(sentance)/sizeof(sentance[0]);
    int length = strlen(sentance);
        for(int i = 0; i <= length; i++)
        {
            if((c =getchar()) == ' '){
            printf("%c\n",sentance[i]);
            break;
        }
        return 0 ;
        }
}