#include "Number.hpp"
#include <iostream>

using namespace std;

Number::Number(int value)
{
    std::cout << "Number ctor (" << value << ")" << std::endl;
    this->value = value;
}

Number Number::operator + (Number otherNumber)
{
    //value += otherNumber.value;
    Number result(this->value + otherNumber.value);


    return result;
}

Number Number::operator - (Number otherNumber)
{
    return Number(value - otherNumber.value);
}


int Number::getValue()
{
    return value;
}


ostream& operator << (ostream& out, Number value)
{
  out << value.value;

  return out;
} 