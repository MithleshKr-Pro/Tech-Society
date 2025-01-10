#include <stdio.h>
int main(){
    int n,largest=0,a;
    scanf("%d",&n);
    for(;n!=0;){
        a=n%10;
        if(largest<=a){
            largest=a;
        }
        n=n/10;
    }
    printf("%d",largest);



    return 0;
}