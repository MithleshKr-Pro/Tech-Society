#include<stdio.h>
int main(){
    int n,sum=0,lastDt,firstDt;
    scanf("%d",&n);
    // firstDt=n%10;
    while(n>=10){
        n=n/10;
        if(n<10){
            lastDt=n;
            sum=sum+lastDt;
        }
    }
    // sum=sum+firstDt;s
    printf("%d",sum);

    return 0;
}