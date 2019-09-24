#include <iostream>
#include "Hello.hpp"

using namespace std;

void doSomething()
{
  Hello a("Cameron");
}


int main()
{
  cout << "Doing something now" << endl;
  int number;
  Hello greeting("greeting");
  doSomething();
  Hello bonjour("french");
  Hello h1("h1");

  cout << "Size of Hello: " << sizeof(h1) << endl;

  cout << "size of int: " << sizeof(int) << endl;

  greeting.greet();

  //string greetingsName = greeting.getName();


  //cout << "Hello " << greeting.name << endl;

  return 0;
}
