#ifndef ANOTHER_CLASS_HPP
#define ANOTHER_CLASS_HPP

#include "DerivedClass.hpp"

class AnotherClass : public DerivedClass
{
  public:
    void doMore()
    {
      a = 5;
      b = 7;
    }

  private:

};


#endif