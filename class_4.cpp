#include <iostream>
#include <string>
using namespace std;

class Person{
    string name;
    int age;

    public:
    void set_person(string name, int age){
        this->name = name;
        this->age = age;
    }

    void person_display(){
        cout<<name<<" "<<age<<" ";
    }
};

class Student: public Person{
    string student_id;
    string department;

    public:
    void set_student(string name,int age,string student_id, string department){
        this->student_id = student_id;
        this->department = department;
        set_person(name, age);
    }

    void student_display(){
        person_display();
        cout<<student_id<<" "<<department<<" ";
    }
};

class Research_student: public Student{
    string field;
    string guide;

    public:
    void set_research(string name,int age,string student_id,string department, string field,string guide){
        this->field = field;
        this->guide = guide;
        set_student(name,age,student_id,department);
    }

    void research_display(){
        student_display();
        cout<<field<<" "<<guide<<" ";
    }
};

class Teacher: public Person{
    string teacher_id;
    string subject;

    public:
    void set_teacher(string name, int age, string teacher_id, string subject){
        set_person(name,age);
        this->teacher_id = teacher_id;
        this->subject = subject;
    }

    void teacher_display(){
        person_display();
        cout<<teacher_id<<" "<<subject<<" ";
    }

};

int main() {
    Teacher t1;
    t1.set_teacher("Ayush",18,"01","OOPS");
    t1.teacher_display();

    Research_student R1;
    R1.set_research("Aman",19,"01","CSE","(AI & ML)","Himanshu");
    R1.research_display();

return 0;
}