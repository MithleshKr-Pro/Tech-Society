#include <bits/stdc++.h>
using namespace std;

long int power(long long n, long long b){
    if(n==1) return 2;
    else return 2*power(n-1,b)%b;
}

int main() {

    long long n;
    cin>>n;
    cout<<power(n,(long long)(pow(10,9))+7)<<endl;
    // cout<<(long long)(power(n,1000000007))<<endl;
    // cout<<(long long)pow(2,n)%(long long)(pow(10,9)+7)<<endl;

return 0;
}