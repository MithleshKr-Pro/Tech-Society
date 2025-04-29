#include <iostream>
using namespace std;

template <typename t>
t add(t x, t y){
    return x+y;
}

int main() {
cout<<add<int>(4,5)<<endl;
cout<<add(4,5)<<endl;

return 0;
}