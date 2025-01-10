#include <stdio.h>
int main(){
    int n,sum=0,newSum;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum = %d",sum);
    //new Method 
    // newSum=n*(n+1)/2;
    // printf("\nSum = %d",newSum);
    return 0;
}