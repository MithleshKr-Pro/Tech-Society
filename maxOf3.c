#include <stdio.h>
void main(){
    int a,b,c,max1;
    scanf("%d %d %d",&a,&b,&c);
    max1=a>b?a:b;
    if(max1>c){
    printf("%d is greatest",max1);
    }else{
    printf("%d is greatest",c);
   }
}