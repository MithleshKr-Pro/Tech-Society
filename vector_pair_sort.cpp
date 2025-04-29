#include <bits/stdc++.h>
using namespace std;

// bool compare(pair<int, int> a, pair<int, int> b){

// }

int main() 
{
    
    vector <pair <int,int>> v{4};
    for(int i = 0; i<4; i++){
        cin>>v[i].first>>v[i].second;
    }

    for(auto it:v){
        cout<<it.first<<","<<it.second<<" ";
    }
    cout<<endl;
    

    // sort(v.begin(),v.end(),greater<pair<int,int>>());
    // greater <pair<int, int>>();
    // reverse(v.begin(),v.end());

    sort(v.begin(), v.end(), [](pair<int,int> a, pair<int, int> b){
        if (a.second > b.second) return true;
        else if(a.second == b.second){
            if (a.first < b.first) return true;
            else return false;
        
        }
        return false;
    });

    for(int i = 0; i<4; i++){
        cout<<v[i].first<<","<<v[i].second<<" ";
    }

return 0;
}