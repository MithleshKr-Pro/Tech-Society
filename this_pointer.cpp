#include <iostream>
#include <string>
using namespace std;

class person{
    string name;
    float age;
    public:
        person(string s, float a){
            name = s;
            age = a;
        }
        person&  greater(person &x){
            if(age > x.age){
                return *this;
            }
            else{
                return x;
            }
        }
        void display(){
            cout<<name<<" "<<age<<endl;
        }
};

int main() {

    person p1("Mithlesh Kumar", 19);
    person p2("Aman Kumar", 20);
    person p3 = p1.greater(p2);
    p3.display();

return 0;
}