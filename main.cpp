#include <iostream>
#include "money.h"
#include "account.h"

int main(){

// adding test
Money m(100, 90);
Money b(100, 20);

Money newMon = m + b;
std::cout << "New Money (added)= " << newMon << std::endl;


// subtracting test

Money g(400, 35);
Money h(247, 73);

Money newMon2 = g - h;
std::cout << "New Money (subtracted) = " << newMon2 << std::endl;

/*
//commented out while we work on overloading 
  Account acc(300, 23);
  std::cout << acc << std::endl;

  acc.makeDeposit(Money(200, 00));
  acc.makeDeposit(Money(300, 24));
  acc.makeDeposit(Money(501, 22));
  std::cout << acc << std::endl;
  //deposit sum is $1301.69

  acc.makeWithdrawal(Money(300, 10));
  acc.makeWithdrawal(Money(201, 34));
  std::cout << acc << std::endl;
  //amount after withdrawals are $800.25 
  */
  return 0;
}
