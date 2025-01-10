#include<stdio.h>
int main(){
    int n,count=0,original=0,pfNum,initial=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        initial=original;
        for(int j=1;j<=2 && count<n;j++){
            pfNum=initial+1;
            for(int k=1;k<=n;k++){
                printf("%d ",pfNum++);
                original++;
            }
            printf("\n");
            count++;
        }
    }

    return 0;
}