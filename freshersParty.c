/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void main(){
  int choice;
    while(1){
       int choice;
            printf("\n========== Welcome to the College Fresher Party ==========\n");
            printf("1. View Cultural Events\n");
            printf("2. Explore Food Menu\n");
            printf("3. Participate in Fun Games\n");
            printf("4. Check Out the Winners\n");
            printf("5. Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
    
    switch(choice){
        case 1: 
            printf("\n--- Cultural Events ---\n");
            printf("1. Dance Battle\n");
            printf("2. Singing Competition\n");
            printf("3. Stand-up Comedy\n");
            break;
        
        case 2: 
            printf("\n--- Food Menu ---\n  The menu of food for freshers\n-KADAI Paneer \n-DAL MAKHNI\n-mushroom 2 payaja \n-RAITA\n-Rice\n -DAHI BHALLE\n-SALAD\n-TANDOORI ROTI\n-DESSERT\n-Snacks mai\n1. Veg kebab\n2. Manchurian\n3. Cheese corn roll\n4. ⁠cold drinks");
            break; 
        
        case 3: 
            printf("\n--- Fun Games ---\n 1. Mr. Fresher - Bhaskar Bhushan (Bb) \n 2.Mrs Fresher - Pankaj Tiwari \n 3. Mr Efficient - Dhairya \n 4. Mrs.Efficient -  \n 5. Mr. Talented - Ayush Dogra \n 6. Mrs Talented - ");
            break; 
        
        case 4: 
            printf("\n--- Event Winners ---\n 1. Bhaskar Bhosdi");
            break;
        
        case 5:
            printf("\nThank you !!\n");
            exit(0);
            break;
            }

//     return 0;