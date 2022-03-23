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


//Account::Account(Money mon(int a, int b)){
//}

/*
void Account::updateAmount(){
  bool operator<(const Money &rhs) const{
    return all_cents < rhs.all_cents;
}
*/