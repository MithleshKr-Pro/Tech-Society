#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long arr[n] = {0};
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    long long temp = arr[0];
    long long moves = 0;
    for (int i = 1; i<n; i++){
        if(arr[i] <temp) moves += temp - arr[i]; 
        else temp = arr[i];
    }
    cout<<moves<<endl;

return 0;
}