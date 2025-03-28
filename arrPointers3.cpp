#include<bits/stdc++.h>
using namespace std;
// void print2dArr(int (*ptr)[3],int);
// void print3dArr(int (*ptr)[2][3],int);
int main(){
    // int a[]={1,2,3,4,5,6};
    // int *a1 = &a[0];
    // int (*aPtr)[6] = &a;
    // cout<<a1<<endl;
    // cout<<a1+1<<endl;
    // cout<<aPtr<<endl;
    // cout<<aPtr+1<<endl;




    // int arr1[2][3];
    // int arr2[2]={1,2};
    // int arr2[2][3]={1,2,3,4,5,6};
    // int arr3[1][2][3]={1,2,3,4,5,6};
    // print2dArr(arr2,2);
    // print3dArr(arr3,1);


    char c = 'B';
    float f = 2.34;
    double d = 2.35;
    char * c1 = &c;
    double *d1 = &d;
    float *f1 = &f;
    cout<<f1<<"\t"<<d1<<"\t"<<c1<<endl;




    return 0;
}

// void print2dArr(int (*arr2)[3],int size){
//     for(int i =0; i<size;i++){
//             for (int j =0; j<3;j++){
//                     cout<<arr2[i][j]<<endl;
                
//             }
//             cout<<"\n";
//         }
// }

// void print3dArr(int (*arr3)[2][3],int size1){
//     for(int i =0; i<size1;i++){
//         for (int j =0; j<2;j++){
//             for(int k= 0; k<3;k++){
//                 cout<<arr3[i][j][k];

//             }
//         }
//         cout<<"\n";
//     }
// }