#include <iostream>
#include "money.h"
#include "account.h"

int main(){

/*
        friend bool operator !=(Money const one, Money const two);
         friend bool operator ==(Money const one, Money const two);
*/


//All of the following are UNUSED operators to show that they work
  Money mon1(200, 35);
  Money mon2(4000, 1);

  if(mon1 > mon2){
      std::cout << "mon1 is greater" << std::endl;
  } else {
      std::cout << "mon2 is greater" << std::endl;
  }

  if(mon1 <= mon2){
      std::cout << "mon1 is less than or equal to mon2" << std::endl;
  } else {
      std::cout << "mon2 is less than or equal to mon1" << std::endl;
  }

  if(mon1 >= mon2){
      std::cout << "mon1 is greater than or equal to mon2" << std::endl;
  } else {
      std::cout << "mon2 is greater than or equal to mon1" << std::endl;
  }



// Printing Out Account 

  std::cout << "--------------------------------------------------" << std::endl;

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
  
  return 0;
}
