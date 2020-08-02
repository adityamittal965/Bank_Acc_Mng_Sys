#include "Account_Util.h"

void display(const vector <Account *> &accounts){
    cout << "\n===Accounts=============================" << endl ;
    for(const auto &acc : accounts){
        cout << *acc << endl ;
    }
}

void deposit(vector <Account *> &accounts , double amount){
    cout << "\n===Depositing to Accounts===========================" << endl ;
    for(auto &acc : accounts){
        if(acc->deposit(amount))
            cout << "Deposited " <<  amount << " to " << *acc << endl ;
        else
            cout << "Failed Deposit of " << amount << " to " << *acc << endl ;
    }
}

void withdraw(vector <Account *> &accounts , double amount){
    cout << "\n===Withdrawing from Accounts===========================" << endl ;
    for(auto &acc : accounts){
    if(acc->withdraw(amount))
        cout << "Withdrew " << amount << " from " << *acc << endl ;
    else
        cout << "Failed Withdrawal of " << amount << " from " << *acc << endl ;
    }
}

