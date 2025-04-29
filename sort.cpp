#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v(7);
    v.push_back(3);
    v.push_back(2);
    v.push_back(6);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size()/2; i++)
    {
        int temp = v[i];
        v[i] = v[v.size() - 1 - i];
        v[v.size() - 1 - i] = temp;

        cout<<v[i]<<" ";
    }

    return 0;

}