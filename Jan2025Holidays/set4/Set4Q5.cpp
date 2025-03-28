#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        arr[i] = m;
    }
    
    int area =0;
    for (int i = 0; i<n; i++){
        for(int j =i+1; j<n;j++){
            if(area < (j-i)*min(arr[i],arr[j]) ){
                area = (j-i)*min(arr[i],arr[j]);
            }
        }
    }
    cout<<area;

    return 0;
}