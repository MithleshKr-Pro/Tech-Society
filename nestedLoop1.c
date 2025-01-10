#include<stdio.h>
int main(){
    int rows,count=1,original=1;
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        if(i%2!=0){
            for(int j=1;j<=rows;j++){
                printf("%d ",original);
                original++;
            }
        }else{
            count=original+(rows-1);
            for(int j=1;j<=rows;j++){
                printf("%d ",count);
                count--;
                original++;
            }
        }
        printf("\n");
    }
    return 0;
}