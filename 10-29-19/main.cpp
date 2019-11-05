#include <iostream>

using namespace std;

template <typename A, typename B, typename C>
A add (int a, C b)
{
  return (A)(a + b);
}

int main()
{

  cout << add<int, float, double>(3,5) << endl;
  //cout << add<std::string, int, float>(3.1f,5.5f) << endl;

  cout << add<std::string, std::string, std::string>(string("A"), string("B")) << endl;


  return 0;
}