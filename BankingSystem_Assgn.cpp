#include <iostream>
using namespace std;

// static int ac_num = 1;
class Account
{
protected:
    double balance;
    int accountNumber;

public:
    Account(double bal, int ac_no) : balance{0}, accountNumber{ac_no}
    {
        balance = bal;
        // ac_num++;
    }

    void deposit(double amt)
    {
        if (amt > 0)
        {
            balance += amt;
        }
    }
    void withdraw(double amt)
    {
        if (amt >= balance)
        {
            balance -= amt;
        }
        else
        {
            cout << "Insufficient Funds !!" << endl;
        }
    }

    void viewBalance()
    {
        cout << "Account Balance : " << balance << endl;
    }

    void transferFunds(Account &to, double amt)
    {
        to.balance += amt;
        balance -= amt;
        cout << "Funds Transfered SuccessFully  -_-" << endl;
    }
};

class SavingsAccount : public Account
{
    double interestRate;

public:
    SavingsAccount(double bal, int ac_no, double rate) : Account(bal, ac_no), interestRate{5}
    {
        interestRate = rate;
        // ac_num++;
    };

    SavingsAccount(double bal, int ac_no) : Account(bal, ac_no), interestRate{5} {};

    void applyInterest(double rate)
    {
        interestRate = rate;
    }

    void display()
    {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Current Balance : " << balance << endl;
    }
};

class CurrentAccount : public Account
{
    double overdraftLimit;

public:
    CurrentAccount(double bal, int ac_no, double limit) : Account(bal, ac_no), overdraftLimit{100000}
    {
        overdraftLimit = limit;
        // ac_num ++;
    }

    CurrentAccount(double bal, int ac_no) : Account(bal, ac_no), overdraftLimit{1000} {}

    void withdraw(double amt)
    {
        if (amt <= overdraftLimit)
        {
            balance -= amt;
        }
        else
        {
            cout << "Withdrawal more than Limit : " << overdraftLimit << " not allowed." << endl;
        }
    }

    void display()
    {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Current Balance : " << balance << endl;
    }
};

int main()
{
    SavingsAccount S1(1000, 1);
    CurrentAccount C1(1000, 2);

    S1.deposit(500);
    C1.deposit(500);
    S1.applyInterest(10);
    C1.withdraw(400);
    C1.withdraw(1200);
    C1.display();
    S1.display();

    C1.transferFunds(S1, 500);

    C1.display();
    S1.display();

    return 0;
}