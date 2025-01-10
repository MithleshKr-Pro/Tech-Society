#include<stdio.h>
char allSame(float a,float b,float c);
void main(){
    float a,b,c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if ((a>b && a>c) || (a==b && b>c) || (a==c && c>b)){
        printf("%f is greatest\n",a);
        allSame(a,b,c);
    }
    if ((b>a && b>c) || (b==c && c>a) || (b==a && a>c)){
        printf("%f is greatest\n",b);
        allSame(a,b,c);
    }
    if ((c>=b && c>=a) || (c==b && b>a) || (c==a && a>b)){
        printf("%f is greatest\n",c);
        allSame(a,b,c);
    }
}                                       
char allSame(float a,float b,float c){
    if(a==b==c){
        printf("all 3 are same\n");
    }
}