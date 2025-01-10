#include <stdio.h>
void main(){
    float units,total;
    scanf("%f",&units);
    if(units<100){
        printf("\nElectric Bill per Unit= Rs.3");
        total=units*3;
        printf("\nBill : %f",total);
    }
    if(units>=100 && units<250){
        printf("\nElectric Bill per Unit= Rs.6");
        total=99*3+(units-99)*6;
        printf("\nBill : %f",total);
    }
    if(units>=250 && units<400){
        printf("\nElectric Bill per Unit= Rs.10");
        total=99*3+(249-99)*6+(units-249)*10;
        printf("\nBill : %f",total);
    }
    if(units>=400 && units<500){
        printf("\nElectric Bill per Unit= Rs.15");
        total=99*3+(249-99)*6+(400-250)*10+(units-399)*15;
        printf("\nBill : %f",total);
    }
    if (units>=500){
        printf("\nElectric Bill per Unit= Rs.21");
        total=99*3+(249-99)*6+(400-250)*10+(500-400)*15+(units-499)*21;
        printf("\nBill : %f",total);
    }
    if(total>1000){
        total=total+total*0.2;
        printf("\ntotal Bill [+20 Percent tax] : %f",total);
    }
}