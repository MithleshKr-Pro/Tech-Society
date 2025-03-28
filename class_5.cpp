#include <iostream>
#include <string>
using namespace std;

class parent{
    int member1;
    int &ref;
    public:
    parent(int num1):ref{member1}{
        member1 = num1;
        cout<<"Member 1 = "<< member1<<endl;
    }

};

class child:public parent{
    int member2;
    public:
    child(int num1, int num2):member2{num2},parent(num2){
        cout<<"Member 2 = "<< member2<<endl;
    }
};

int main() {
    child c(2,3);

return 0;
}