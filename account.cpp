#include <iostream>
#include "account.h"

void Account::makeDeposit(Money mon){
    moneyVe.push_back(mon);
    moneyFlag = true;
}

void Account::makeWithdrawal(Money mon){
    moneyVe.push_back(mon);
    moneyFlag = true;
}


std::ostream &operator<<(std::ostream &os, const Account &acc){
    os << "Account Details\n--------------------------\n";
    os << "Current Balance:$" << Account(acc) << "\n--------------------------\n";
    os << "Number of Deposits: " << acc.moneyVe.capacity();

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