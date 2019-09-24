#ifndef HELLO_HPP
#define HELLO_HPP

#include <string>
#include <iostream>

class Hello
{
public:
  Hello(std::string theName)  // Constructor, invoked on instantiation
  {
    name = theName;
    std::cout << "Hello ctor (" << name << ")" << std::endl;
  }

  //Hello(const &Hello toCopy); // Copy constructor
  ~Hello() // Destructor, invoked on deletion* (aka memory clean up)
  {
    std::cout << "Hello dtor (" << name << ")" << std::endl;
  }


  void greet()
  {
    std::cout << "Hello " << name << "!" << std::endl;
  }

protected:
  // Intentionally leaving this empty... stay tuned. Don't drop the class.

private:
  std::string name;
  int aNumber;
  int otherNumber;
};



#endif
