#include <iostream>
#include "account.h"

void Account::makeDeposit(){

}

void Account::makeWithdrawal(){

}

void Account::updateAmount(){
  bool operator<(const Money &rhs) const{
    return all_cents < rhs.all_cents;
}
