#include <iostream>

using namespace std;

template <class Ryan>
Ryan add (Ryan a, Ryan b)
{
  return a + b;
}

int main()
{

  cout << add(3,5) << endl;
  cout << add(3.1f,5.5f) << endl;

  cout << add(string("A"), string("B")) << endl;


  return 0;
}