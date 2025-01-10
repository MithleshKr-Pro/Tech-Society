#include <stdio.h>
void main(){
    double a,b;
    int choice;
    printf("Enter two number :");
    scanf("%lf %lf",&a,&b);
    // switch(a){                          //used for menu-Driven Programs
    //     case 1:
    //     printf("1");
    //     break;

    //     case 2:
    //     printf("2");
    //     break;

    //     case 3:
    //     printf("3");
    //     break;

    //     case 4:
    //     printf("4");
    //     break;

    //     default:
    //     printf("None");
    // }

    printf("1 Addition \n");
    printf("2 subtract\n");
    printf("3 Multiply\n");
    printf("4 Divide\n");
    printf("Enter Your Choice : ");
    scanf(" %d",&choice);
    switch(choice){
        case 1:
        printf("%f",a+b);
        break;

        case 2:
        printf("%f",a-b);
        break;

        case 3:
        printf("%f",a*b);
        break;

        case 4:
        if(a>=b){
            printf("%lf",a/b);
        }else{
            printf("not Divisible");
        }
        break;

        default:
        printf("Invalid Choice");
    }
    

}