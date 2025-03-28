#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,digit,n1 = 0,i =0;
    cin>>n;
    while (n>0){
        digit = n%10;
        if(digit == 0){
            digit = 5;
        }
        n1 = digit*pow(10,i) + n1;
        n = n/10;
        i++;
    }
    cout<<n1;


    return 0;
}