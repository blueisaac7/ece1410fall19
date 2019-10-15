#include <iostream>
#include "Chicken.hpp"

using namespace std;


int main(void)
{
  Chicken bob;
  cout << bob.speak() << endl;


  bob.growOlder(1.0);

  cout << bob.speak() << endl;

  Chicken* bobSpawn = bob.spawn();
  //cout << (*bobSpawn).speak() << endl;
  cout << bobSpawn->speak() << endl;

  return 0;
}