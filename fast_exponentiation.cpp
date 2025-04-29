#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//find factorial of a number % m

int factorial(int num,int m){
    if(num == 0){
        return 1;
    }else{
        return (num*factorial(num -1, m))%m;
    }

}

int main() {
    cout<<factorial(5,200)<<endl;
    cout<<factorial(6,7)<<endl;
    cout<<factorial(212, 7 + pow(10,9))<<endl;

return 0;
}