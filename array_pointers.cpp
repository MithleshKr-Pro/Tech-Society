#include<iostream>
using namespace std;
void print_Array(int (*arr)[4],int size){
    for (int i= 0; i < size; i++){
        for (int j=0; j<4;j++){
            cout<<  arr[i][j]<<"\t";
        }
    }
}
// void print_Array(int arr[][4],int size){

// }
int main(){
    int arr[2][4] ={1,2,3,4,5,6,7,8};
    print_Array(arr,2);
    return 0;
}