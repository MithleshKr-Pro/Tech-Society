#include <stdio.h>
int main(){
    int n,a,b=0,c,d,e=1,i,f;
    scanf("%d",&n);
    f=n;
    c=n;
    for( i=1;n!=0;i++){
        n=n/10;
        
    }
    for(int j=2;j<=i;j++){
        e=e*10;
    }
    
    for(;f!=0;){
        a=f%10;
        b=b+a*e;
        f=f/10;
        e=e/10;
    }
    if(b==c){
        printf("yes");
    }
    else {
        printf("no");
    }
    return 0;
}