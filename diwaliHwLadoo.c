#include <stdio.h>
int max3Func(int,int,int);
int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int s1,s2,s3,s4,max3,secondMax4,max4,winner1,winner2;
        scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
        max3=max3Func(s1,s2,s3);
        if(max3<s4){
            max4=s4;
        }else{
            max4=max3;
        }
        if(max4==s1){
            secondMax4=max3Func(s2,s3,s4);
        }
        if(max4==s2){
            secondMax4=max3Func(s1,s3,s4);
        }
        if(max4==s3){
            secondMax4=max3Func(s1,s2,s4);
        }
        if(max4==s4){
            secondMax4=max3Func(s1,s2,s3);
        }
        if(s1>s2){
            winner1=s1;
        }else{
            winner1=s2;
        }
        if(s3>s4){
            winner2=s3;
        }else{
            winner2=s4;
        }
        if(winner1==secondMax4 || winner2==secondMax4){
            printf("yes\n");
        }else{
            printf("no\n");
        }
        t-=1;
    }
    return 0;
}
int max3Func(int a,int b,int c){
    int max3;
    if(a>b){
            if(a>c){
                max3=a;
            }else{
                max3=c;
            }
        }else{
            if(b>c){
                max3=b;
            }else{
                max3=c;
            }
        }
        return max3;
}