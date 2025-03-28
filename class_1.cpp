#include <iostream>
using namespace std;

class student_details{
    public:
    string name;
    int roll_no;
};

class physique_details: public student_details{
public:
int height;
int weight;
};

int main() {
 student_details stud1;
 stud1.name = "Ramesh Kumar";
 stud1.roll_no = 1;



return 0;
}