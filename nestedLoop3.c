#include<stdio.h>
int main(){
    int n,update=0,original=1,printNum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        update=n;
        for(int j=1;j<=n;j++){
            if(j==1){
                printf("%d ",original);
                printNum=original;
            }
            if(j%2==0){
                printNum+=update;
                printf("%d ",printNum);
            }else{
                if(j!=1){
                    printNum-=update;
                    printf("%d ",printNum);
                }
            }
            original++;
            update-=1;
        }
        printf("\n");

    }





    return 0;
}