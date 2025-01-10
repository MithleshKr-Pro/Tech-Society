#include <stdio.h>
int main(){
    int n,flag=0,notes,notes1,t,diff;
    scanf("%d",&t);
    while(t>0){
            scanf("%d",&n);
            scanf("%d",&notes);
            for(int i=0;i<=n-2;i++){
            scanf("%d",&notes1);
            diff=notes-notes1;
                if((diff!=5 && diff!=-5) && (diff!=7 && diff!=-7)){
                    flag=1;
                }
            notes=notes1;
            }
        if(flag==1){
            printf("no\n");
        }else{
            printf("yes\n");
        }
        t-=1;
        flag=0;
    }
    return 0;
}