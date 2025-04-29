#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Euclidean GCD

int gcd(int a, int b){
    if(b == 0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}

int main(){
    int m,n;
    cin>>m>>n;
    cout<<gcd(m,n)<<endl;

    //Normal method
    if(max(m,n) != m){
        int temp = m;
        m = n;
        n = temp;
    } 
    while(m%n != 0){
        int temp = n;
        n = m%n;
        m = temp;
    }

    cout<<n<<endl;
    return 0;
}