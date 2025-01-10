#include<stdio.h>
int main(){
    int rows,spaceCount1=0,spaceCount2;
    scanf("%d",&rows);
    spaceCount2=(rows*2)-3;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=spaceCount1;j++){
            printf(" ");
        }
        printf("*");
        for(int j=1;j<=spaceCount2;j++){
            printf(" ");
        }
        if(i!=rows){
            printf("*");
            printf("\n");
        }
        spaceCount1++;
        spaceCount2-=2;
    }
    return 0;
}