#include <stdio.h>
void main(){
    for(int i=1;i<=255;i++){
        printf("%c\n",i);
        if(i==5){
         break;   
        }
    }
}