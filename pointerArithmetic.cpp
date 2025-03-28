#include <bits/stdc++.h>
using namespace std;
int  main(){
    int *ptr;
    int a= 9;
    ptr = &a;


    // cout<<(long long)(ptr)<<endl<<(long long)(++ptr)<<endl<<(long long)(ptr)<<endl<<(long long)(--ptr);
    // cout<<(long long)(++ptr)<<endl<<(long long)(ptr)<<endl;
    // cout<<ptr-1<<endl;
    // cout<<(long long)(ptr)<<endl;
    // cout<<(long long)(--ptr)<<endl;


    int *q = ptr +1;
    cout<<q-ptr<<endl;
    cout<<(long long)(ptr)<<" "<<(long long)(q)<<endl;
    cout<<(ptr>q)<<endl;
    



    return 0;
}