#include<stdio.h>
int main(){
    int rows,spaceCount1=1,spaceCount2;
    scanf("%d",&rows);
    spaceCount2=(rows*2)-5;
    for(int h=1;h<=(rows*2)-1;h++){
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=rows-1;i++){
        for(int j=1;j<=spaceCount1;j++){
            printf(" ");
        }
        printf("*");
        for(int k=1;k<=spaceCount2;k++){
            printf(" ");
        }
        if(spaceCount2>0){
            printf("*");
        }
        spaceCount1+=1;
        spaceCount2-=2;
        printf("\n");
    }



    return 0;
}