#ifndef Account_H
#define Account_H

#include <iostream>
#include <vector>
#include "money.h"

class Account: public Money {

  private:
    std::vector<Money> moneyVe;
    bool moneyFlag = false;
    int numDeposits = 0;
    int numWithdrawls = 0;

    // add balance vars?

  public:
    explicit Account(int dollars, int cents) : Money(dollars, cents){};
    void makeDeposit(Money mon);
    void makeWithdrawal(Money mon);
    friend std::ostream &operator<<(std::ostream &os, const Account &acc);

  //explicit Account(Money mon(int a, int b));

};

#endif
