#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b){
        for(int i=2*(a/2)+2;i<=b;i+=2){
            printf("%d",i);
        }
    }
return 0;
}