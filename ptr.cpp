#include<bits/stdc++.h>
using namespace std;
int main(){
    //constant Pointers
    // // const int a =10;
    // // const int *ptr = &a;    


    // // int b= 10;
    // // ptr = &b;
    // // *ptr=20;


    // // int a =0;
    // // int *const ptr = &a;
    // // int b = 20;
    // // *ptr = 30;


    // // int a =20;
    // // const int *p = &a;
    // // a = *(++p);
    // // cout<<a<<endl;
    // // cout<<*(p++)<<endl;


    /*
    |------------------------------------|
    |   Condition      | Pointer | value |
    |------------------------------------|
    | const int*       | True    | False |
    | int * const      | False   | True  |
    | const int* const | False   | False |
    |------------------------------------|
    */

    
    int a = 20;
    int *p = &a;
    a = *(++p);
    cout<<a;


    // int a =0;
    // const int * const ptr = &a;


    // *ptr =20;
    return 0;
}