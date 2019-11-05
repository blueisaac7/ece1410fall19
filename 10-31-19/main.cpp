#include <iostream>

#include <list>
#include <queue>
#include <stack>
#include <vector>

using namespace std;


int add (int a, int b = 9)
{
  return a + b;
}


template <typename G>
class Ghost
{
  public:
    Ghost(G dataToHaunt)
    {
      ghostlyData = dataToHaunt;
    }

  private:
    G ghostlyData;
};

int main()
{
  Ghost<int> bill(0);
  Ghost<std::string> ted("boo");


  list<int> myList;
  stack<std::string> myStack;

  cout << add(2) << endl;

  vector<std::string> numbers;

  cout << sizeof(numbers) << endl;
  for (int i = 0; i < 10000000000; ++i)
  {
    numbers.push_back("lkjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj");
    if ( i % 1000 == 0)
    {
      //cout << "numbers[" << i << "]: " << numbers[i] << endl;
    }
  }

cout << sizeof(numbers) << endl;

  return 0;
}