#include <stdio.h>
int main(){
    int n,first=0,second=1,new;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        new=first+second;
        printf("%d ,",first);
        first=second;
        second=new;
    }
    return 0;
}