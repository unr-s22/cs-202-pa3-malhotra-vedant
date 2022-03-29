#ifndef Account_H
#define Account_H

#include <iostream>
#include <vector>
#include "money.h"

class Account: public Money {

  private:
    std::vector<Money> moneyDep;
    std::vector<Money> moneyWith;
    bool moneyFlag = false;

    // add balance vars?

  public:
    explicit Account(int dollars, int cents) : Money(dollars, cents){};
    void makeDeposit(Money mon);
    void makeWithdrawal(Money mon);
    friend std::ostream &operator<<(std::ostream &os, Account &acc);
};

#endif
