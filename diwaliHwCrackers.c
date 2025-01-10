#include <stdio.h>
int main(){
    int k,n,w,lendMoney;
    scanf("%d%d%d",&k,&n,&w);
    lendMoney=(k*(w*(w+1)/2))-n;
    printf("%d",lendMoney);
    return 0;
}