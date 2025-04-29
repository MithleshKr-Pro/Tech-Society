#include <iostream>
#include <vector>
using namespace std;

class Manager;

class Employee{
    private:
    int emp_id;
    string name;
    string address;
    int phone;
    int salary;
    int mgr_id = -1;
    public:
    void disp_emp(){
        cout<<emp_id<<" "<<name<<" "<<address<<" "<<phone<<" "<< salary<<" "<<" " << mgr_id << '\n';
    }
    void set_emp(int id, string name, string address, int phone,int salary){
        this->emp_id = id;
        this->name = name;
        this->address = address;
        this->phone = phone;
        this->salary = salary;
    }
    friend void assign_mgr(Employee &E, Manager &M);
};

class Manager:public Employee{
    int team_size;
    string branch;
    public:
    void set_mgr(int id, string name, string address, int phone,int salary,int team_size,string branch){
        this->team_size = team_size;
        this->branch = branch;
        set_emp(id, name, address, phone, salary);
    }
    void disp_mgr(){
        disp_emp();
        cout<<team_size<<" "<<branch<<" ";
    }
};

class Developer: public Employee{
    vector <string> skills;
    int experience;
    public:
    void set_dev(int id, string name, string address, int phone,int salary,vector<string> skills,int experience){
        this->skills = skills;
        this->experience = experience;
        set_emp(id, name, address, phone, salary);
    }
    

    void disp_dev(){
        disp_emp();
        cout<<experience<<endl;
        for(int i = 0;i<skills.size(); i++){
            cout<<skills[i]<<" ";
        }
        cout<<endl;
    }
};

void assign_mgr(Employee &E, Manager &M){
    cout<<"Mgr Id = "<<E.mgr_id<<endl;
    // cout<<E.mgr_id<<endl;
    E.mgr_id = M.emp_id;
    cout<<"Mgr Id = "<<E.mgr_id<<endl;

}

int main() {
    Employee E1;
    E1.set_emp(1,"Ayush","Punjab",9280323233,1000);
    E1.disp_emp();

    Manager M1;
    M1.set_mgr(2,"Raman","Punjab",9832623874,2000,4,"CSE");
    M1.disp_mgr();
    cout<<endl;
    
    assign_mgr(E1,M1);
    cout<<endl;
    // M1.disp_mgr();
    E1.disp_emp();
    cout<<endl;

return 0;
}