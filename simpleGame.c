#include <stdio.h>
void main(){
    int score=0,num;
    printf("Q.- Guess a number :");
    scanf("%d",&num);
    if (num>10){
        score+=10;
        printf("Score = %d",score);
    }else{
        score-=5;
        printf("Score = %d",score);  
    }
}