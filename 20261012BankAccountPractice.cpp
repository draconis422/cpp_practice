#include<iostream>

using namespace std;

class BankAccount{
    private:
        int balance;
    
    public:
        void SetBalance(int amount);
        void Deposit(int amount);
        int Show();
};

void BankAccount::SetBalance(int amount){
    balance = amount;
}

void BankAccount::Deposit(int amount){
    balance += amount;
}

int BankAccount::Show(){
    return balance;
}

int main(){
    BankAccount account1;
    account1.SetBalance(100);
    BankAccount& r = account1;
    r.Deposit(50);
    BankAccount account2;
    account2.SetBalance(200);
    account2.Deposit(20);
    cout << r.Show() << endl;
    cout << account2.Show() << endl;
    return 0;
}