#include <iostream>
#include "money.h"
#include "account.h"

int main(){
  
  Money m(100,10);
  Account acc(300, 23);

  Account deposit(200,00);
  Account deposit(300,24);
  Account deposit(501,22);
  Account withdrawal(300,10);
  Account withdrawal(201,34);

std::cout << m << std::endl;

  Account acc(300,23);
std::cout << acc << std::endl;
  
  return 0;
}
