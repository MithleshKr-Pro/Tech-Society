#include <iostream>
using namespace std;

//references should be initialised

class Person{
    public:
    int age;
    string name;
    int &ref;
    Person(int age, string name,int &x):ref{x}{

    }
};

int main() {
int x = 20;
Person p{12,"xyz",x};
p.ref = 10;
cout<<x;

return 0;
}