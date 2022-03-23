#include <iostream>
#include "money.h"

    Money::Money(int dollars, int cents){
        m_dollars = dollars;
        m_cents = cents;
    }

    Money &operator <(Money const dollars, Money const cents){

    }

    Money &operator >(Money const dollars, Money const cents){

    }

    Money &operator <=(Money const dollars, Money const cents){

    }

    Money &operator >=(Money const dollars, Money const cents){

    }

    bool &operator !=(Money const dollars, Money const cents){

    }

    bool &operator ==(Money const dollars, Money const cents){

    }

    Money &operator +(Money const dollars, Money const cents){

    }

    Money &operator -(Money const dollars, Money const cents){

    }

    std::ostream &operator<<(std::ostream &os, const Money &money){
        os << "$" << money.m_dollars << "." << money.m_cents;
        return os;
    }

