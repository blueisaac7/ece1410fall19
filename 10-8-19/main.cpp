#include <iostream>
#include <fstream>

#include "Queen.hpp"

using namespace std;

int main ()
{ 
  Queen q;

  ifstream in("input.txt");

  in >> q;

  q.solve();

  std::cout << q << std::endl;
}