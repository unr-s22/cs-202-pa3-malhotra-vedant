#ifndef Money_H
#define Money_H


#include <iostream>
//#include <osstream>

class Money {
    private:
        int m_dollars;
        int m_cents;


    public:
        explicit Money();
        explicit Money(int dollars, int cents);

    friend Money &operator <(Money const dollars, Money const cents){

    }

    friend Money &operator >(Money const dollars, Money const cents){

    }

    friend Money &operator <=(Money const dollars, Money const cents){

    }

    friend Money &operator >=(Money const dollars, Money const cents){

    }

    friend Money &operator !=(Money const dollars, Money const cents){

    }

    friend Money &operator ==(Money const dollars, Money const cents){

    }

    friend Money &operator +(Money const dollars, Money const cents){

    }

    friend Money &operator -(Money const dollars, Money const cents){

    }

private:
    friend std::ostream &operator<<(std::osstream &os, const Money &money);{
        return os;
    }

};

#endif
