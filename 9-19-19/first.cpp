#include <iostream>
#include "other.hpp"

using namespace std;

int addNumbers(int a, int b)
{

  return a + b;
}



int main(int argc, char** argv)
{
  printf("Hello %s\n", argv[1]);


  int potato = 3;

  potato += 9;

  printf("Potato: %i\n", addNumbers(8, 3));

  printf("3 * 4 = %i\n", multipleNumbers(3, 4));

  for (int i = 0; i < 10; ++i)
  {
    printf("i: %i\n", i);
  }

  std::cout << "Hello C++ World!" << std::endl;
  cout << "Hello C++ World!" << endl;


  return 0;
}
