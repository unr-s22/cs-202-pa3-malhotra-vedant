#include <iostream>
#include "money.h"

    Money::Money(int dollars, int cents){
        m_dollars = dollars;
        m_cents = cents;
    }

    bool operator <(Money const one, Money const two){
        int oneA = one.m_dollars;
        int oneB = one.m_cents;
        int twoA = two.m_dollars;
        int twoB = two.m_cents;

        int newOne = oneA + oneB;
        int newTwo = twoA + twoB;

        if (newOne < newTwo) {
            return true;
        } else {
            return false;
        }
        
    }

    bool operator >(Money const one, Money const two){

    }

    bool operator <=(Money const one, Money const two){
        int oneA = one.m_dollars;
        int oneB = one.m_cents;
        int twoA = two.m_dollars;
        int twoB = two.m_cents;

        int newOne = oneA + oneB;
        int newTwo = twoA + twoB;

        if (newOne <= newTwo) {
            return true;
        } else {
            return false;
        }
    }

    bool operator >=(Money const one, Money const two){

    }

    bool operator !=(Money const one, Money const two){

    }

    bool operator ==(Money const one, Money const two){

    }

    Money operator +(Money const one, Money const two) {
        int oneA = one.m_dollars;
        int oneB = one.m_cents;
        int twoA = two.m_dollars;
        int twoB = two.m_cents;

        int newDollar = oneA + twoA;
        int newCent = oneB + twoB;

        if (newCent >= 100) {
            newDollar += 1;
            newCent = newCent - 100;
        }


        return Money(newDollar, newCent);
    }

    Money operator -(Money const one, Money const two){
        int oneA = one.m_dollars;
        int oneB = one.m_cents;
        int twoA = two.m_dollars;
        int twoB = two.m_cents;

        int newDollar = oneA - twoA;
        int newCent = oneB - twoB;

        // make sure to add checks for if balance won't work out (aka negative)!

        if (newCent < 0) {
            newDollar -= 1;
            newCent = 100 + newCent;
        }
        
        return Money(newDollar, newCent);
    }

    std::ostream &operator<<(std::ostream &os, const Money &money){

        if (money.m_cents == 00){
            os << "$" << money.m_dollars << "." << money.m_cents << 0;
        } else {
            os << "$" << money.m_dollars << "." << money.m_cents;
        }

        return os;
    }

