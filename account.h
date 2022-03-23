#ifndef Account_H
#define Account_H

#include <iostream>
#include <vector>
#include "money.h"

class Account {

  private:
    std::vector<Money> moneyVe;
    bool moneyFlag = false;

  public:
    void makeDeposit(Money mon);
    void makeWithdrawal(Money mon);
    void updateAmount();

  //explicit Account(Money mon(int a, int b));

};

#endif
