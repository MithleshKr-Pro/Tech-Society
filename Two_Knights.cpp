// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;
//     // cin >> n;
//     int arr[4][4];
//     int safe_places = 0;
//     int cnt = 0;
//     int places = 120;

//     for(int i = 0; i<4; i++){
//         for(int j = 0; j<4; j++){
//             arr[i][j] = 1;
//         }
//     }



//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<"arr Val : "<<i<<" " <<j<<": "<<arr[i][j]<<endl;
//             if(arr[i][j]){
//             // 1 squares Horizontal, 2 Square Vertical
//             if (j + 2 < n)
//             {
//                 if (i + 1 < n &&  arr[i+1][j+2] ){
//                     places -= 1;
//                     // arr[i+1][j+2] = 0;
//                     cout<<"place : ["<<i<<" "<<j<<"]["<<i+1 <<" "<<j+2<<"]"<<endl;           
//                 }
//             // cout<<"Places = "<<places<<endl;

//                 if (i - 1 >= 0 && arr[i-1][j+2]){
//                     places -= 1;
//                     // arr[i-1][j+2] = 0;
//                     cout<<"place : ["<<i<<" "<<j<<"]["<<i-1 <<" "<<j+2<<"]"<<endl;           
//                 }
//             // cout<<"Places = "<<places<<endl;

//             }
//             if (j - 2 >= 0)
//             {
//                 if (i + 1 < n && arr[i+1][j-2]){
//                     places -= 1;
//                     // arr[i+1][j-2] = 0;
//                     cout<<"place : ["<<i<<" "<<j<<"]["<<i+1 <<" "<<j-2<<"]"<<endl;           
//                 }
//             // cout<<"Places = "<<places<<endl;

//                 if (i - 1 >= 0 && arr[i-1][j-2]){
//                     places -= 1;
//                     // arr[i-1][j-2] = 0;
//                     cout<<"place : ["<<i<<" "<<j<<"]["<<i-1 <<" "<<j-2<<"]"<<endl;           
//                 }
//             // cout<<"Places = "<<places<<endl;

//             }
//             // 2 squares Horizontal, 1 Square Vertical
//             if (i + 2 < n)
//             {
//                 if (j + 1 < n && arr[i+2][j+1]){
//                     places -= 1;
//                     // arr[i+2][j+1] = 0;
//                     cout<<"place : ["<<i<<" "<<j<<"]["<<i+2 <<" "<<j+1<<"]"<<endl;           
//                 }
//             // cout<<"Places = "<<places<<endl;

//                 if (j - 1 >= 0 && arr[i+2][j-1]){
//                     places -= 1;
//                     // arr[i+2][j-1] = 0;
//                     cout<<"place : ["<<i<<" "<<j<<"]["<<i+2 <<" "<<j-1<<"]"<<endl;           
//                 }
//             // cout<<"Places = "<<places<<endl;

//             }
//             if (i - 2 >= 0)
//             {
//                 if (j + 1 < n && arr[i-2][j+1]){
//                     places -= 1;
//                     // arr[i-2][j+1] = 0;
//                     cout<<"place : ["<<i<<" "<<j<<"]["<<i-2 <<" "<<j+1<<"]"<<endl;           
//                 }
//             // cout<<"Places = "<<places<<endl;

//                 if (j - 1 >= 0 && arr[i-2][j-1]){
//                     places -= 1;
//                     // arr[i-2][j-1] = 0;
//                     cout<<"place : ["<<i<<" "<<j<<"]["<<i-2 <<" "<<j-1<<"]"<<endl;           
//                 }
//             // cout<<"Places = "<<places<<endl;

//             }
//             places -= 1;
//             arr[i][j] = 0;
//             // cout<<"Places = "<<places<<endl;
//         }
//         }
//     }

//     cout << places << endl;

//     return 0;
// }


