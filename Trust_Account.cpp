#include "Trust_Account.h"
using namespace std ;

Trust_Account::Trust_Account(string name , double balance , double int_rate)
    : Savings_Account{name , balance , int_rate} {
        
    }
    
bool Trust_Account::deposit(double amount){
    if(amount >= 5000)
        amount += bonus ;
    return Savings_Account::deposit(amount) ;
}

bool Trust_Account::withdraw(double amount){
    if(amount > 0.2 * balance || num_withdrawals  >= max_num_of_withdrawals){
        return false ;
    }
    else{
    num_withdrawals++ ;
    return Savings_Account::withdraw(amount) ;
    }
}

void Trust_Account::print(std::ostream &os) const{
    os << "[Trust Account : " << name << " : " << balance << " , " << int_rate  << "%, withdrawals : " << num_withdrawals << "]" ;
}
