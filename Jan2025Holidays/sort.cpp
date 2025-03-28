#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int arr[n]={0};
    for(int i = 0; i < n; i++){
        cin >> m;
        arr[i] = m;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i]<<"\t";
    }

    //sorting starts
    for (int i =0; i<n ; i++){
        for( int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout<<"\n"<<"After Sorting : ";
    for(int i = 0; i < n; i++){
        cout << arr[i]<<"\t";
    }
    return 0;
}