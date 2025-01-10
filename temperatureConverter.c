#include <stdio.h>
#include <conio.h>
void main(){
    float finalTemp,inputTemp;
    char tempChoice;
    printf("Default temperature Scale is Celsius scale :\n");
    printf("In which Scale would you like to convert Temperature into [c,f,k]:");
    // tempChoice=getche();
    printf("\nEnter Temperature (C) : ");
    scanf("%f",&inputTemp);
    switch(tempChoice){
        default:
            finalTemp=inputTemp;
            printf("\nTemperature in Celsius (C) : %f",finalTemp);
        case 'c':
            finalTemp=inputTemp;
            printf("\nTemperature in Celsius (C) : %f",finalTemp);
            break;

        case 'f':
            finalTemp=(9*inputTemp/5) +32;
            printf("\nTemperature in Farenhiet (F) : %f",finalTemp);
            break;

        case 'k':
            finalTemp=273+inputTemp;
            printf("\nTemperature in Kelvin (K) : %f",finalTemp);
            break;

        // default:
        //     finalTemp=inputTemp;
        //     printf("\nTemperature in Celsius (C) : %f",finalTemp);
    }
}