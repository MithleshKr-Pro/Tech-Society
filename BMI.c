#include<stdio.h>
void main(){
    float ht,wt,bmi;
    int Case;
    printf("BMI Calculator\n");
    printf("Enter height (in m) :");
    scanf("%f",&ht);
    printf("Enter Weight (in Kg) :");
    scanf("%f",&wt);
    bmi=wt/(ht*ht);

    if(bmi<18.5){
        Case=1;
    }
    if(bmi>=18.5 && bmi<=24.5){
        Case=2;
    }
    if(bmi>=25 && bmi<=29.9){
        Case=3;
    }
    if(bmi>30){
        Case=4;
    }

    switch(Case){
        case 1:
            printf("Under - Weight");
            break;
        case 2:
            printf("Normal - Weight");
            break;
        case 3:
            printf("Over - Weight");
            break;
        case 4:
            printf("Obesity");
            break;
        default:
            printf("Please Enter Proper Height & Weight !!");
    }

}