#include <stdio.h>
int main(){
    int n,notes,count=0,diff,t=0;
    scanf("%d",&t);
    while(t>0){
        scanf("%d",&n);
        int arrMusic[n];
        for(int i=0;i<=n-1;i++){
            scanf("%d",&notes);
            arrMusic[i]=notes;
        }
        for(int j=0;j<=n-2;j++){
            diff=arrMusic[j+1]-arrMusic[j];
            if((diff!=5 && diff!=-5) && (diff!=7 && diff!=-7)){
                count=1;
            }
        }
        if(count==1){
            printf("no\n");
        }else{
            printf("yes\n");
        }
        count=0;
        t-=1;
    }
    return 0;
}