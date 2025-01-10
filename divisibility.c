#include <stdio.h>
void main(){
    int num;
    scanf("%d",&num);
    if(num%55==0){
        printf("yes");
    }else{
        printf("No");
    }
    if (((num%5==0) && (num%11!=0)) || (num%5!=0 && num%11==0)){
        printf("\n divisible by 5 or 11");
    }
    // else{
    //     printf("\ndivided by None");
    // }
    // if (num%11==0){
    //     printf("\nOnly divisible by 11");
    // }
}
