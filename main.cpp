#include <iostream>
#include "money.h"
#include "account.h"

int main(){
  

  Account acc(300, 23);
  std::cout << acc << std::endl;

  acc.makeDeposit(Money(200, 00));
  acc.makeDeposit(Money(300, 24));
  acc.makeDeposit(Money(501, 22));
  std::cout << acc << std::endl;

  acc.makeWithdrawal(Money(300, 10));
  acc.makeWithdrawal(Money(201, 34));
  std::cout << acc << std::endl;
  
  return 0;
}
