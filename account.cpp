#include <iostream>
#include "account.h"

void Account::makeDeposit(Money mon, Account acc){
    moneyVe.push_back(mon);
    moneyFlag = true;
}

void Account::makeWithdrawal(Money mon, Account acc){
    moneyVe.push_back(mon);
    moneyFlag = true;
}


std::ostream &operator<<(std::ostream &os, const Account &acc){
    Money mon(acc);

    os << "Account Details\n--------------------------\n";
    os << "Current Balance:" << mon << "\n--------------------------\n";
    

    
    //os << "Current Balance:$" << acc.m_cents << "\n--------------------------\n";
    //os << "Number of Deposits: " << acc.moneyVe.capacity();

    return os;
}

//Account::Account(Money mon(int a, int b)){
//}

/*
void Account::updateAmount(){
  bool operator<(const Money &rhs) const{
    return all_cents < rhs.all_cents;
}
*/