#include <iostream>
#include "account.h"

void Account::makeDeposit(Money mon){
    moneyDep.push_back(mon);
    moneyFlag = true;
}

void Account::makeWithdrawal(Money mon){
    moneyWith.push_back(mon);
    moneyFlag = true;
}


std::ostream &operator<<(std::ostream &os, Account &acc){

    Money initial = acc;
    if (acc.moneyFlag == true){
        for(int count = 0; count < acc.moneyDep.size(); count++) {
            initial = initial + acc.moneyDep[count];
        }

        for(int count = 0; count < acc.moneyWith.size(); count++) {
            initial = initial - acc.moneyWith[count];
        }
    }
    else{ 
        initial = acc;
    }

    os << "Account Details\n--------------------------\n";
    os << "Current Balance:" << initial << "\n--------------------------\n";


    if(acc.moneyDep.size() != 0){

        os << "Number of Deposits: " << acc.moneyDep.size() << "\n--------------------\n";
        for(int i = 0; i < acc.moneyDep.size(); i++){
            os << "(" << i+1 << ") " << acc.moneyDep[i] << "\n";
        }
    } 

    if(acc.moneyWith.size() != 0){
        os << "--------------------------\n";
        os << "Number of Withdrawals: " << acc.moneyWith.size() << "\n--------------------------\n";
        for(int i = 0; i < acc.moneyWith.size(); i++){
            os <<  "(" << i+1 << ") " << acc.moneyWith[i] << "\n";
        }
    }

    acc.moneyFlag = false;
    return os;
}