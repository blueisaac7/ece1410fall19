#include <iostream>
#include "Chicken.hpp"
#include "Duck.hpp"
#include "Robin.hpp"

using namespace std;


int main(void)
{
  Duck quack;
  Chicken peep;
  Robin chirp;
  cout << "Chicken says " << peep.speak() << endl;
  cout << "Duck says " << quack.speak() << endl;
  cout << "Robin says " << chirp.speak() << endl;
  
  Bird* pQuack = &quack;
  Bird* pPeep = &peep;
  Bird* pChirp = &chirp;

  cout << "Chicken says " << pPeep->speak() << endl;
  cout << "Duck says " << pQuack->speak() << endl;
  cout << "Robin says " << pChirp->speak() << endl;

  Bird* pQuackSpawn = pQuack->spawn();

  cout << "Bird pointer says " << pQuack->speak() << endl;
  cout << "Bird spawn pointer says " << pQuackSpawn->speak() << endl;

  delete pQuackSpawn;
  //pQuack = &peep;


  Bird b = Chicken();

  //cout << "Bird pointer says " << pQuack->speak() << endl;


/*
  peep.growOlder(1.0);

  cout << peep.speak() << endl;

  Chicken* peepSpawn = peep.spawn();
  //cout << (*bobSpawn).speak() << endl;
  cout << peepSpawn->speak() << endl;
*/
  return 0;
}