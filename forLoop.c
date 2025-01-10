#include <stdio.h>
    
void main(){
    double factorial=1;
    int n,sum=0;
    scanf("%d",&n);
    
    for( int i=1;i<=n;i++){
        sum+=i;
    }
    printf("Sum [upto %d] = %d\n",n,sum);

    for(int i=1;i<=n;++i){
        if(i<=10){
            printf("%d * %d = %d\n",n,i,i*n);
        }
    }

    for(0;0 ;0){
        printf("weare");
    }
    int i=1;
    while (i<=n){
        printf("%d\n",i);
        i++;
    }
    
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    printf("factorial [upto %d] = %f",n,factorial);
    
}