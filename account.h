#ifndef Account_H
#define Account_H

#include <iostream>
#include <vector>
#include "money.h"

class Account {

  private:
    std::vector<Money> money;

  public:
    void makeDeposit();
    void makeWithdrawal();
};

#endif
