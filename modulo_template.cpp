#include <iostream>
using namespace std;

template<int m = 1000000007>
class Modular {
    int value;
    
public:
    Modular(int val) {
        value = val;
    }
    
    void add(int a, int b) {
        value = (a % m + b % m) % m;
    }

    void sub(int a, int b) {
        value = (a % m - b % m + m) % m;
    }

    void mul(int a, int b) {
        value = (a % m * b % m) % m;
    }

    int get() {
        return value;
    }

    void ans() {
        cout << value << endl;
    }
};

int main() {
    Modular<> ans(0);
    ans.add(3, 5);

    return 0;
}
