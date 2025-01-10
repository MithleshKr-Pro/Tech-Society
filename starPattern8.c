#include<stdio.h>
int main(){
    int rows,spaceCount,starCount=1;
    scanf("%d",&rows);
    spaceCount=((rows*2)-1)/2;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=spaceCount;j++){
            printf(" ");
        }
        for(int k=1;k<=starCount;k++){
            printf("*");
        }
        starCount+=2;
        spaceCount-=1;
        printf("\n");
    }

    return 0;
}