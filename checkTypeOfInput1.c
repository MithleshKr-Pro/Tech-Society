#include <stdio.h>
#include <conio.h>
void main(){
    char a;
    scanf("%c",&a);
    //  getch()
    if(a>='a' && a<='z'){
        printf("it's an Small alphabet");

    }else if(a>='0' && a<='9'){
        printf("it's an integer");

    }else if(a>='A' && a<='Z'){
        printf("it's an Capital alphabet");

    }
}