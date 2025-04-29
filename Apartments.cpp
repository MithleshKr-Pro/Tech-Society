#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin>>n>>m>>k;
    vector<int> v1(n);
    vector<int> v2(m);

    for(int i = 0; i<n; i++){
        cin>>v1[i];
    }
    map <int, int> mp;
    for(int i = 0; i<m; i++){
        cin>>v2[i];
        mp[v2[i]]++;
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int count =0;
    for(int i = 0; i<n; i++){
        int t1 = v1[i]-k;
        int t2 = v1[i]+k;
        for(int j=0; )
        
    }



return 0;
}