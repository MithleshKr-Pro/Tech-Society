#include <bits/stdc++.h>
using namespace std;
bool binary_search(int,int *,int);
int main(){
    int n,m;
    cin>>n;
    int arr[n]={0};
    for(int i = 0; i < n; i++){
        cin >> m;
        arr[i] = m;
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+size);
    for(int i = 1; i <= n+1 ; i++){
        if(!(binary_search(n,arr,i))){
    
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}

bool binary_search(int n,int *arr,int i){
    int s = 0, e = n;
    while (s<=e){
        int mid = s+(e-s)/2;
        if(i == arr[mid]){
            return 1;
        }
        if(i > arr[mid]){
            s = mid+1;
        }else{
            e = mid-1;
        }
    }
    return 0;
}