#include <stdio.h>
int main(){
    int a,result,sum=0,b;
    scanf("%d",&a);
    b=a%10;
    sum=sum+b;
    for(int i=1;a>0;((a=a/10)&& (i++))){
        result=a%10;
        if(a/10==0 && i!=1){
            sum=sum+result;
        }
    }
    printf("%d",sum);
}                               