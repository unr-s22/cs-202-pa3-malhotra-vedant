#ifndef Money_H
#define Money_H


#include <iostream>

class Money {
    private:
        int m_dollars;
        int m_cents;


    public:
        explicit Money();
        explicit Money(int dollars, int cents);

        friend bool operator <(Money const one, Money const two);
        friend bool operator >(Money const one, Money const two);
        friend bool operator <=(Money const one, Money const two);
        friend bool operator >=(Money const one, Money const two);
        friend bool operator !=(Money const one, Money const two);
        friend bool operator ==(Money const one, Money const two);
        friend Money operator +(Money const one, Money const two);
        friend Money operator -(Money const one, Money const two);
        friend std::ostream &operator<<(std::ostream &os, const Money &money);//



};

#endif

