#include <stdio.h>
void main(){
    int score=0,userInput;
    char wish;
    printf("Game Rules :\nQ1. +2, [no -ve Marking]\nQ2. +5, [no -ve Marking]\nQ3. *30, [no -ve Marking]\nQ4. +2, [-ve marking -1]\nQ5. +2, [-ve Marking -4]\n");
    printf("Do You wanna play Quiz (y/n) ??");
    scanf("%c",&wish);
    if(wish=='Y'||wish=='y'){
        printf("Quiz Start : \n");
        printf("Q1.\n%c\n%cSin",244,245);
        printf("  %c = ?",233);
        printf("\nYour Options : ");
        printf("\n(i)    Cos");
        printf(" %c +c",233);
        printf("\n(ii)   Cos");
        printf(" %c ",233);
        printf("\n(iii) -Sin");
        printf(" %c +c",233);
        printf("\n(iv)  -Cos");
        printf(" %c +c\n",233);
        printf("Choose Options - [1,2,3,4] : ");
        scanf("%d",&userInput);
        if(userInput==4){
            score+=2;
        }
        printf("Your Score : %d\n",score);

        //Q2

        printf("\nQ2.\n%c\n%cCos",244,245);
        printf("  %c = ?",233);
        printf("\nYour Options : ");
        printf("\n(i)    Sin");
        printf(" %c +c",233);
        printf("\n(ii)   Sin");
        printf(" %c ",233);
        printf("\n(iii) -Cos");
        printf(" %c +c",233);
        printf("\n(iv)  -Sin");
        printf(" %c +c\n",233);
        printf("Choose Options - [1,2,3,4] : ");
        scanf("%d",&userInput);
        if(userInput==1){
            score+=5;
        }
        printf("Your Score : %d\n",score);

        //Q3


        printf("Q3. What is the Full Form of ASCII ?\n(i)   All Science Community Institute of India\n(ii)  American Standard Community of information Institute\n(iii) American Standard Code of Information Interchange\n(iv)  Out of Syllabus !!\n");
        printf("Choose Options - [1,2,3,4] : ");
        scanf("%d",&userInput);
        if(userInput==3){
            score*=30;
        }
        printf("Your Score : %d\n",score);

        //Q4

        printf("Q4. What is the Binary Code for 'TechSociety' ?\n(i)   10101101001 110001100 1000100100010 00010000 101100100 0000101111 1000011100 0100001 110011011 110111100\n(ii)  101011010011 100011001000 100100010 000100001011 001000000101 1111000011 10110100001 10011100 11001100\n(iii) 01010100 01100101 01100011 01101000 01010011 01101111 01100011 01101001 01100101 01110100 01111001\n(iv)  10101101 00111000110 010001001000 100001000010 110010000 001011111 0000111000 1001101001 100110011\n");
        printf("Choose Options - [1,2,3,4] : ");
        scanf("%d",&userInput);
        if(userInput==3){
            score+=2;
        }else{
            score-=1;
        }
        printf("Your Score : %d\n",score);

        //Q5

        printf("Q5. Circumference of Circle =?\n");
        printf("(i)  ");
        printf("%cr [r= Radius]\n",227);
        printf("(ii) 2");
        printf("%cr [r=Radius]\n",227);
        printf("(iii) 2r [r=Radius]\n");
        printf("(iv)  None of the Above\n");
        printf("Choose Options - [1,2,3,4] : ");
        scanf("%d",&userInput);
        if(userInput==2){
            score+=2;
        }else{
            score-=4;
        }
        printf("Your Score : %d\n",score);
    }
}
