#include<stdio.h>
int main(){
    int rows,spaceCount1,spaceCount2=0;
    scanf("%d",&rows);
    spaceCount1=((rows*2)-1)/2;
    for(int i=1;i<=rows-1;i++){
        for(int j=1;j<=spaceCount1;j++){
            printf(" ");
        }
        printf("*");
        if(i==2){
            spaceCount2=1;
        }
        for(int j=1;j<=spaceCount2 && spaceCount2<=(rows*2)-5;j++){
            printf(" ");
        }
        if(spaceCount2>0){
            printf("*");
        }
        printf("\n");
        spaceCount1-=1;
        spaceCount2+=2;
    }
    for(int k=1;k<=(rows*2)-1;k++){
        printf("*");
    }
    return 0;
}