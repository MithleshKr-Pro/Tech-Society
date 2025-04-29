#include <iostream>
using namespace std;

class Modulo{
    public:
    int x;
    int y;

    Modulo(int x, int y, int z){

    }
    void add(int x, int y,int m){
        cout<<(x + y) % m<<endl;
    }
    void mul(int x, int y,int m){
        cout<<(x%m * y%m) % m<<endl;
    }
};

int main() {
    Modulo A1(;

return 0;
}