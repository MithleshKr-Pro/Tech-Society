#include<stdio.h>
int main(){
    int n,update;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        update=4;
        for(int j=1;j<=4;j++){
            printf("%d ",update);
            update-=1;
        }
        printf("\n");
    }

    return 0;
}