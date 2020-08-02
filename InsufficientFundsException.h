#ifndef INSUFFICIENTFUNDSEXCEPTION_H
#define INSUFFICIENTFUNDSEXCEPTION_H
#include <iostream>

class InsufficientFundsException : public std::exception
{
public:
    InsufficientFundsException() noexcept{};
    virtual const char* what() const noexcept{
        return "Insufficient Funds Exception" ;
    }
    virtual ~InsufficientFundsException() = default ;
};

#endif // INSUFFICIENTFUNDSEXCEPTION_H
