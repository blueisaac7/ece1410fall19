#include <iostream>


class Number
{
public:
  Number(int value)
  {
    this->value = value;
  }

  int add(int toBeAdded)
  {
    return value + toBeAdded;
  }

private:
  int value;
};
