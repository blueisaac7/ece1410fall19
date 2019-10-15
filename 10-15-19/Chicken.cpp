#include "Chicken.hpp"


Chicken::Chicken(void)
{
  weight = 0.1;
  age = 0.0f;
}


std::string Chicken::speak(void)
{
  std::string result;
  
  if (age > 0.5)
  {
    result = "cluck";
  }
  else 
  {
    result = "cheep";
  }

  return result;
}

void Chicken::growOlder(float time)
{
  age += time;

  weight += time * 0.1;
}

Chicken* Chicken::spawn(void)
{
  Chicken* result = NULL;
  if (age >= 1.0)
  {
    result = new Chicken();
  }

  return result;
}