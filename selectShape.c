#include <stdio.h>
#include <math.h>
#define pi acos(-1.0)
void main(){
    int shapeNum;
    float area,a,b,c;
    printf("Selct Shape [1. Circle 2. Square 3. Triangle] :");
    scanf("%d",&shapeNum);
    switch (shapeNum){
        case 1:
            printf("\nEnter Radius : ");
            scanf("%f",&a);
            area=pi*a*a;
            printf("\nArea of Circle : %f",area);
            break;

        case 2:
            printf("\nEnter Side of square : ");
            scanf("%f",&a);
            area=a*a;
            printf("\nArea of Square : %f",area);
            break;

        case 3:
            printf("\nEnter 3 side Lengths of Traingle");
            scanf("%f %f %f",&a,&b,&c);
            float s;
            s=(a+b+c)/2;
            area=sqrt(s*(s-a)*(s-b)*(s-c));
            printf("\nArea of Triangle = %f",area);
            break;
        
        default:
            printf("No shape Selected !!");
    }
}
