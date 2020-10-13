
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h.>
#include<conio.h>
void delay(int number_of_seconds) 
{ 
    int milliseconds = 1000 * number_of_seconds; 
  
    clock_t start_time = clock(); 

    while (clock() < start_time + milliseconds) 
        ;
}

int winner(char player,char computer)
    {
        //returns 1 if player  wins
        //returns  if computer wins
        //returns -1 if its a draw
    if(player==computer){
        return -1;
    }
    if(player=='r' && computer=='s'){
        return 1;
    }
    else{
        if(computer=='r' && player=='s')
        return 0;
    }
    if(player=='s' && computer=='p'){
    return 1;
    }
    else{
        if(computer=='s' && player=='p')
    return 0;
    }
    if(player=='p' && computer=='r'){
    return 1;
    }    
    else {
        if(computer=='p' && player=='r'){
        return 0;
         }
    }
    }
int ComputerTurn(){
    int c;
    c=rand()%3+1;
    return c;
}
void main() {
    int playerscore=0,compscore=0,temp=0,count=0,i;
    char player,computer;
    char rps[]={'r','p','s'};
    char playername[25];
    printf("welcome to the game\nEnter your name\a\n");
    gets(playername);
    srand(time(NULL));
        for (i = 0; i < 3; i++) {                   
    printf("Select 1 for Rock\nSelect 2 for Paper\nSelect 3 for Scisorrs\n");
    scanf("%d",&temp);
    if(temp>3)  {
        printf("wrong choice entered\n start again\n");
        break;
                }
    else{
    player=rps[temp-1];
    printf("you chose %c\n",player);
    printf("computers turn\n");
    temp=ComputerTurn();
    computer=rps[temp-1];
    printf("computer chose %c\n",computer);
    if(winner(player,computer)==1) {
        playerscore++;
    }  
    else if(winner(player,computer)==-1){
        compscore++;
        playerscore++;
    }
    else {
        if(winner(player,computer)==0)
        compscore++;
    }
    printf("%s : %d\n",playername,playerscore);
    printf("Computer : %d\n",compscore);
    count++;
    delay(3);
    system("cls");
    }
    }
    while(count==3){
        count++;
    if(playerscore>compscore){
        printf("%s won the game\a\a\a\a\n",playername);
    }
    else if (playerscore<compscore){
        printf("computer won the game\n");
    }
    else if(playerscore==compscore){
        printf("its a draw\n");
    }
    printf("game over!\n");

    }
    }
