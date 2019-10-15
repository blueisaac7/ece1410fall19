#ifndef BIRD_HPP
#define BIRD_HPP

#include <string>

enum BirdTypes
{
  CHICKEN = 0,
  ROBIN = 1,
  DUCK = 2
};


class Bird
{
  public:
    Bird(BirdTypes type);
    virtual std::string speak(void);
    float getWeight(void);
    void eat(float food);
    float getAge(void);
    virtual Bird* spawn(void) = 0;
    void growOlder(float time);
    BirdTypes getType(void);

  private:
    float weight;
    float age;
    BirdTypes type;
};

#endif