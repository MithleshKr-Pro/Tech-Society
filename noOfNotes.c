#include <stdio.h>
void main(){
    long long int amt,b,restAmt;
    scanf("%lld",&amt);
        if(amt>0){
        b=amt/500;
        if(b==0){
            printf("");
        }else{
            printf("\nno. of 500 notes = %lld",b);
        }
        restAmt=amt%500;

        b=restAmt/200;
        if(b==0){
            printf("");
        }else{
            printf("\nno. of 200 notes = %lld",b);
        }
        restAmt=restAmt%200;

        b=restAmt/100; 
        if(b==0){
            printf("");
        }else{
            printf("\nno. of 100 notes = %lld",b);
        }
        restAmt=restAmt%100;

        b=restAmt/50;
        if(b==0){
            printf("");
        }else{
            printf("\nno. of 50 notes = %lld",b);
        }
        restAmt=restAmt%50;

        b=restAmt/10;
        if(b==0){
            printf("");
        }else{
            printf("\nno. of 10 notes = %lld",b);
        }
        restAmt=restAmt%10;

        b=restAmt/5;
        if(b==0){
            printf("");
        }else{
            printf("\nno. of 5 notes = %ld",b);
        }
        restAmt=restAmt%5;

        b=restAmt/2;
        if(b==0){
            printf("");
            }else{
                printf("\nno. of 2 notes = %ld",b);
            }
        restAmt=restAmt%2;

        b=restAmt;
        if(b==0){
            printf("");
        }else{
            printf("\nno. of 1 notes = %d",b);
        }
        }
        else{
            printf("No Notes Available");
        }

}