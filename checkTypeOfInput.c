#include<stdio.h>
// void UsingTernary(int h);
void main(){
    int h;
    
    // printf("\n");
    printf("Enter any One Key :  ");
    scanf("%c",&h);
    if (h>=48 && h<=57){
        printf("It is an Integer");

    }
    if (h>=65 && h<=90){
        printf("It is LargeCase Alphabet");
    }
    if (h>=97 && h<=122){
        printf("It is SmallCase Alphabet");
    }    
    if((h>=0 && h<=47) || (h>57 && h<65) || (h>91 && h<97) || (h>122 && h<=256)){
        printf("It's a Special Character !!");
    }

    // for(int i=0;i<=255;i++){
    // }
    // (h>=48 && h<=57)?printf("It is an Integer"):((h>=65 && h<=90)?printf("It is LargeCase Alphabet"):((h>=97 && h<=122)?printf("It is SmallCase Alphabet"):(((h>=0 && h<=47) || (h>57 && h<65) || (h>91 && h<97) || (h>122 && h<=256))?printf("It's a Special Character !!"):(printf("none")))));

}
// void UsingTernary(int h){
//     (h>=48 && h<=57)?printf("It is an Integer"):((h>=65 && h<=90)?printf("It is LargeCase Alphabet"):((h>=97 && h<=122)?printf("It is SmallCase Alphabet"):(((h>=0 && h<=47) || (h>57 && h<65) || (h>91 && h<97) || (h>122 && h<=256))?printf("It's a Special Character !!"):(printf("none")))));
// }

// #include <stdio.h>

// int main() {
//     char h; // Change to char to read a character

//     printf("Enter any One Key: ");
//     scanf(" %c", &h); // Space before %c to ignore any whitespace

//     // Check if the character is a digit
//     if (h >= '0' && h <= '9') {
//         printf("It is an Integer\n");
//     }
//     // Check if the character is an uppercase letter
//     else if (h >= 'A' && h <= 'Z') {
//         printf("It is a LargeCase Alphabet\n");
//     }
//     // Check if the character is a lowercase letter
//     else if (h >= 'a' && h <= 'z') {
//         printf("It is a SmallCase Alphabet\n");
//     }
//     // If none of the above, it must be a special character
//     else {
//         printf("It's a Special Character !!\n");
//     }

//     return 0; // Return statement for main
// }
