#include <iostream>

#include "DerivedClass.hpp"
#include "AnotherClass.hpp"

int main()
{
  BaseClass stuff;
  DerivedClass something;
  AnotherClass junk;

  something.getData();

  cout << "size of BaseClass: " << sizeof(stuff) << endl;
  cout << "size of DerivedClass: " << sizeof(something) << endl;
  //something.a = 9;

  //junk.a = 5;

  // stuff.b = 7; can't access b because it is protected!

  return 0;
}