#include <stdio.h>
#include <math.h>
#define TechSociety main
#define M_PI acos(-1.0)
void TechSociety(){
    float theta,R,u,H,g=10,x,y;
    printf("Enter Initial Velocity : ");
    scanf(" %f",&u);
    printf("\nEnter Angle of Projection : ");
    scanf(" %f",&theta);
    theta=(M_PI)*theta/180;
    
    R=u*u*sin(2*theta)/g;            //R== max horizontal range at given u,theta
    
    H=u*u*sin(theta)*sin(theta)/(2*g);          //H == max vertical height at given u,theta

    printf("Horizontal Range (R) : %f\n",R);
    printf("height Achieved by projectile : %f\n",H);
    printf("If you wanna get height of projectile from Ground at any x, Put x : ");
    scanf("%f",&x);
    y=x*tan(theta)-g*x*x/(2*u*u*cos(theta)*cos(theta));     //y == vertical Height of Projectile at any x,theta
    printf("height of projectile (in y) : %f",y);
    // for(int i=0;i<=256;i++){
    //     printf("\n%d=>%c",i,i);
    // }

}