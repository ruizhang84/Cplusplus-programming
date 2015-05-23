#include <iostream>
#include <string>
using namespace std;

class Account
{
    string userName;
public:
    Account(){};
    Account(string name);
    void  PrintUserName();
};

class CreditAccount : public Account
{
public:
    CreditAccount(string name, int credit);
    void PrintInfo();
private:
    int credit;
};

Account::Account(string name):userName(name){ }

CreditAccount::CreditAccount(string name, int credit):Account(name),credit(credit){ }

void Account::PrintUserName(){
    cout << userName << endl;
}

void CreditAccount::PrintInfo(){
    Account::PrintUserName();
    cout << credit << endl;
}



int main()
{
    CreditAccount a("I Love CPP", 10000);
    a.PrintInfo();
    return 0;
}