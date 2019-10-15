#include "Bird.hpp"

Bird::Bird(void)
{
  weight = 0.1;
  age = 0.0f;
}


std::string Bird::speak(void)
{
  return "generic bird noise";
}

void Bird::growOlder(float time)
{
  age += time;

  weight += time * 0.1;
}