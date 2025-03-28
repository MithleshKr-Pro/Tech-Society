#include <iostream>
using namespace std;

class parent{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
};
class child: public parent{
    public:
    int d;

};

int main() {
child c;
// c.b = 10;

return 0;
}