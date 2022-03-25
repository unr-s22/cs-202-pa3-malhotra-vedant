#include <iostream>
#include "account.h"

void Account::makeDeposit(Money mon){
    moneyVe.push_back(mon);
    moneyFlag = true;
    numDeposits++;
}

void Account::makeWithdrawal(Money mon){
    moneyVe.push_back(mon);
    moneyFlag = true;
    numWithdrawls++;
}


std::ostream &operator<<(std::ostream &os, const Account &acc){
    Money mon(acc);

    os << "Account Details\n--------------------------\n";
    os << "Current Balance:" << mon << "\n--------------------------\n";
    os << "Number of Deposits: " << acc.numDeposits << "\n--------------------\n";

    if(acc.numDeposits != 0 || acc.numDeposits != 0){

        for(int i = 1; i <= acc.numDeposits; i++){
            os << "(" << i << ") " << acc.moneyVe[i] << "\n";
        }
    }
    
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