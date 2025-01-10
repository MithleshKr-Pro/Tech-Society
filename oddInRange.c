#include <stdio.h>
int main(){
    int a,b,sum=0;
    scanf("%d%d",&a,&b);
    if(a<b){
        for(int i=2*(a/2)+1;i<b;i+=2){
            sum=sum+i;
        }
    }
    if(a%2!=0){
        printf("%d",sum-a);
    }else{
        printf("%d",sum);
    }
    return 0;
}