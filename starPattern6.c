#include <stdio.h>
int main(){
    int rows,spaceCount,starCount=1;
    scanf("%d",&rows);
    spaceCount=(rows*2)-2;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=starCount;j++){
            printf("*");
        }
        for(int k=1;k<=spaceCount;k++){
            printf(" ");
        }
        for(int l=1;l<=starCount;l++){
            printf("*");
        }
        printf("\n");
        spaceCount-=2;
        starCount+=1;
    }

    return 0;
}