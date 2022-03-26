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

    Money initial = acc;
    //bool moneyFlag = true;
    if (acc.moneyFlag == true){
        for each numDeposits
        //maybe use money vectors
        initial + vector[numDeposits]
    }
    else{ //moneyflag = false
        return acc;
    }

    os << "Account Details\n--------------------------\n";
    os << "Current Balance:" << Money(acc) << "\n--------------------------\n";


    if(acc.numDeposits != 0 || acc.numDeposits != 0){

        os << "Number of Deposits: " << acc.numDeposits << "\n--------------------\n";

        for(int i = 1; i <= acc.numDeposits; i++){
            os << "(" << i << ") " << acc.moneyVe[i - 1] << "\n";
        }
    }

    return os;
}

/*
void Account::updateAmount(){
  bool operator<(const Money &rhs) const{
    return all_cents < rhs.all_cents;
}
*/
