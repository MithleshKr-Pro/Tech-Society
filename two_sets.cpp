#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n;
    cin>>n;
    long long sum = n*(n+1)/2;
    if (sum%2 != 0){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    vector <long long> v;
    long long temp = sum/2;
    long long i = 0;
    long long sum1 = 0;
    for (; i<temp/(1+n); i++){
        v.push_back(i+1);
        v.push_back(n-i);
        sum1 += n+1;
    }
    if(sum1 < temp)
    v.push_back(i+1);
    if(sum1 + i+1 < temp)
    v.push_back(temp - (1+n)*(temp/(n+1)) - i-1);
    
    cout<<v.size()<<endl;
    for (auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
    sort(v.begin(), v.end());

    cout<<n - v.size()<<endl;
    for(long long i = 1; i <= n; i++){
        if(!binary_search(v.begin(), v.end(), i))
            cout<<i<<" ";   
    }
    cout<<endl;

return 0;
}