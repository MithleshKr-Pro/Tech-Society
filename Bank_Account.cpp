#include <iostream>
#include <string>
using namespace std;

class BankAccount{
    static int count;
    int ac_no;
    double balance = 0;

    public:
    BankAccount(int ac_no, double balance){
        count++;
        this->ac_no = ac_no;
        this->balance = balance;
    }
    
    public:
    void deposit(int amt){
        if (amt>0){
            cout<<"Deposit Amount = "<<amt<<endl;
            balance += amt;
            cout<<"Your Balance = "<<balance<<endl;
        }else{
            cout<<"Invalid Amount"<<endl;
        }
    }
    void withdraw(int amt){
        if (amt <= balance){
            cout<<"Withdraw Amount = "<<amt<<endl;
            balance -= amt;
            cout<<"Your Balance = "<<balance<<endl;
        }
    }
};

int BankAccount::count = 0;

int main() {
    BankAccount A1(01,500);
    A1.deposit(5000);
    A1.withdraw(600);

return 0;
}