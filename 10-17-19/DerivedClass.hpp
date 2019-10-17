#ifndef DERIVED_CLASS_HPP
#define DERIVED_CLASS_HPP

#include <iostream>
#include "BaseClass.hpp"

using namespace std;

class DerivedClass : protected BaseClass
{
  public:
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    
    void getData(void)
    {
      cout << "a size: " << sizeof(BaseClass::a) << endl;

      a = 8;
      b = 5;

      cout << "a: " << a << endl;

      cout << "b: " << b << endl;
    }

  private:

};

#endif