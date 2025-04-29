#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename t, typename u>
pair<t,u> maxi(t x, u y){
    return pair<t, u>(x,y);
}

template <typename t>
t add(t x, t y, t z){
    return x+y+z;
}

template <typename t>
t add(t x, t y){
    return x+y;
}
template <typename t,typename u>
void print(t x, u y){
    cout<<x<<" "<<y<<endl;
}


int main() {
    pair <int, float> p;
    p = maxi <int, float>(2,3);
    cout<<p.first<<" "<<p.second<<endl;
    // cout<<maxi<int,float> (2,4)<<endl;
    // cout<<maxi<int, float> (2.5,2.7)<<endl;
    // cout<<maxi<float, int> (2.5,2.7)<<endl;

    print(4,4.5);
    print(4,5);

    cout<<add<int> (2,4)<<endl;
    cout<<add<int> (2,4,4)<<endl;
    cout<<add<float> (2,4.4)<<endl;
    cout<<add<float> (2,4.4,3.4)<<endl;


return 0;
}