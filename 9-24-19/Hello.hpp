#ifndef HELLO_HPP
#define HELLO_HPP

#include <string>
#include <iostream>

class Hello
{
public:
  Hello()  // Constructor, invoked on instantiation
  {
    std::cout << "Hello ctor" << std::endl;
  }

  //Hello(const &Hello toCopy); // Copy constructor
  ~Hello() // Destructor, invoked on deletion* (aka memory clean up)
  {
    std::cout << "Hello dtor" << std::endl;
  }
protected:
  // Intentionally leaving this empty... stay tuned. Don't drop the class.

private:
  std::string name;

};



#endif
