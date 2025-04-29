#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int arr[n+1] = {0};
    arr[0] = 1;
    for(int i = 1; i< n; i++){
        int a;
        cin>>a;
        arr[a] = 1;
    }

    for(int j = 1; j <=n; j++){
        if(arr[j] == 0){
            cout<<j<<endl;
        }
    }

return 0;
}