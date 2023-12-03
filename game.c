#include <stdio.h>
#include <time.h>
#include <stdlib.h>
char GetUserChoice () 
{
  char player; 
printf(" This is Rock, paper, scissor game\n");
do{
printf("Choose one of the following:\n");  
printf(" r means rock, p means papper, s mean scissor\n");
scanf("%c",&player);
} while (player !='r' && player !='p' && player !='s');
return player;
}

void ShowChoice(char choice){ 
switch(choice){
case 'r': 
printf("Rock\n");
break;
case 'p': 
printf("Paper\n");
break;
case 's': 
printf("scissor\n");
break;
}
}

char GetComputerChoice()
{
srand(time(NULL));
int num;
num = rand() % 3 + 1;
switch(num){
case 1: return 'r';
case 2: return 'p';
case 3: return 's';
}
return 0;
}
void DetermineWinner( char player, char computer)
{
  switch( player)
  { 
  case 'r':
    if( computer == 'r'){
    printf("Draw\n");
  }
    else if (computer == 'p'){
    printf("You lose\n");
  }
    else{
    printf("you win\n");
  }
  break;
  case 'p':
    if(computer=='p'){
    printf("Draw\n");
    }
    else if (computer=='r'){
    printf("You win\n");}
    else{
    printf("you lose\n");}
    break;
  case 's':
    if (computer=='r'){
    printf("You lose\n");}
    else if (computer=='p'){
    printf("you win\n");}
    else{
    printf("Draw\n");}
    break;
}
}
int main (void){
    char player;
    char computer;
    player = GetUserChoice();
    printf(" Your choice is:");
    ShowChoice(player);
    computer = GetComputerChoice();
    printf(" Computer choice is:");
    ShowChoice(computer);
    DetermineWinner( player, computer);
return 0;
}

