#include <iostream>
using namespace std;

// int algo(int n){
//     if (n==1){
//         return 1;
//     }
//     if (n%2 == 0){
//         cout<<n/2<<" ";
//         return algo(n/2);
//     }
//     else{
//         cout<<3*n + 1<<" ";
//         return algo(3*n +1);
//     }
// }

int main() {

    long long int n;
    cin>>n;
    // cout<<n<<" ";
    while(n != 1){
        cout<<n<<" ";
        if(n%2 == 0){
            n = n/2;
        }else{
            n = 3*n + 1;
        }
    }
    cout<<1<<" ";


return 0;
}