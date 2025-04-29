#include <iostream>
using namespace std;

class operator_overloading{
    public:
    int x;
    int operator [](int x){
        return x;
    }

};

int main() {
    operator_overloading o1;
    cout<<o1.operator[](4);

return 0;
}