#ifndef ILLEGALBALANCEEXCEPTION_H
#define ILLEGALBALANCEEXCEPTION_H
#include <iostream>

class IllegalBalanceException : public std::exception
{
public: 
    IllegalBalanceException() noexcept{};
    virtual const char* what() const noexcept{
        return "Illegal Balance Exception" ;
    }
    virtual ~IllegalBalanceException() = default ;
};

#endif // ILLEGALBALANCEEXCEPTION_H
