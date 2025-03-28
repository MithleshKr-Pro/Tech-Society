#include<iostream>
using namespace std;
int main(){
    //copy initialisation
    int a = 20;
    cout<<a<<endl;

    //list initialisation
    int b(20);
    cout<<b<<endl;

    // brace initialisation
    int c{20};
    cout<<c<<endl; 

    // int arr[5] = {1,2,3,4,4};
    // //pointers to array
    // int (*ptr)[5] = &arr;
    // //array of pointers
    // int *ptr[5];

    int ab =30;
    int *x = &ab;
    int **y = &x;
    cout<<y<<endl;
    cout<<*y<<endl;
    cout<<x<<endl;
    cout<<**y<<endl;


    
    return 0;
}

//void printArr(int **arr,int row,int col)
//void printArr(int)