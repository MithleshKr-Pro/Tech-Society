#include<iostream>
using namespace std;

class Student{
    private:
        char name[20];
        int roll_no;
        int marks;
    public:
        void output_val(string name, int roll_no, int marks){
            cout<<"Name : "<<name<<endl;
            cout<<"Roll No : "<<roll_no<<endl;
            if (marks >= 40){
                cout<<"Marks : "<<marks<<endl;
            }else{
                marks = 40;
                cout<<"Marks : "<<marks<<endl;
            }
        }
};

int main(){
    Student s1;
    cout<<"----------------------------------------------------------------"<<endl;
    s1.output_val("Mithlesh Kumar", 12, 35);
    cout<<"----------------------------------------------------------------"<<endl;
    s1.output_val("Aman Kumar", 13, 45);
    cout<<"----------------------------------------------------------------"<<endl;
    s1.output_val("Anuj Kumar", 14, 89);
    cout<<"----------------------------------------------------------------"<<endl;
    s1.output_val("Manish Kumar", 15, 20);
    cout<<"----------------------------------------------------------------"<<endl;
    s1.output_val("Meena Kumari", 16, 90);
    cout<<"----------------------------------------------------------------"<<endl;

    return 0;
}