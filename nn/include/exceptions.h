#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <string>

class Exceptions
{
    public:
    std::string msg;
    Exceptions(std::string str):msg(str){}
    ~Exceptions(){}
};

#endif