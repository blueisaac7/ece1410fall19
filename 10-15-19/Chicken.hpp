#ifndef CHICKEN_HPP
#define CHICKEN_HPP

#include <string>

class Chicken
{
  public:
    Chicken(void);
    std::string speak(void);
    float getWeight(void);
    void eat(float food);
    float getAge(void);
    Chicken* spawn(void);
    void growOlder(float time);

  private:
    float weight;
    float age;

};

#endif