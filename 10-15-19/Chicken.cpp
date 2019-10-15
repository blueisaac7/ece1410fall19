#include "Chicken.hpp"


std::string Chicken::speak(void)
{
  return "cluck";
}

Chicken* Chicken::spawn(void)
{
  return new Chicken();
}