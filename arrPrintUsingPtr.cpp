#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};

    //print Array
    //As we know that, 
    //arr[i] = *(arr+i) 
    // arr[i][j] = for a value of i ---> *(*(arr+i)+j)
    //int *ptr = nullptr; 
    //nullptr is keyword in c++
    //int a{};
    //means a is null
    //int *ptr{}
    //means a is null

    for(int i =0;i<5;i++){
        cout<<*(arr+i)<<" ";
    }

    cout<<"\n";

    //reverse of Array
    for(int i=4;i>=0;i--){
        cout<<*(arr + i)<<" ";
    }
    cout<<"\n";

    for(int *ptr = arr+4; ptr-arr>=0;ptr--){
        cout<<*ptr<<" ";
    }

    cout<<"\n";
    int arr2[3][2] ={1,2,3,4,5,6};

    for(int i= 0; i<3;i++){
        for(int j= 0;j<2;j++){
            cout<<*(*(arr2+i)+j)<<" ";
        }
        cout<<"\n";
    }


    return 0;
}