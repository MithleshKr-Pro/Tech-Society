#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("%d \n",n/2);
    if(n%2==0){
        for(int i=1;i<=n/2;i++){
            printf("%d ",2);
        }
    }else{
        for(int i=1;i<=(n/2)-1;i++){
            printf("%d ",2);
        }
        printf("%d ",3);
    }
    return 0;
}