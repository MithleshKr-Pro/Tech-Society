#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    
    map <int, int> mp;
    vector <int> v(10);
    
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }

    for(auto it: v){
        mp[it] ++;
    }

    long int pairs = 0;
    for(auto it: mp){
        if (it.first < it.second && it.first<n && it.second<n){
            if(v[it.first] == v[it.second])
            pairs++;
        }
    }
    cout<<"no of pairs : "<<pairs<<endl;

return 0;
}
