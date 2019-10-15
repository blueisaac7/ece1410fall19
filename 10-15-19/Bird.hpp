#ifndef BIRD_HPP
#define BIRD_HPP

#include <string>

class Bird
{
  public:
    Bird(void);
    virtual std::string speak(void);
    float getWeight(void);
    void eat(float food);
    float getAge(void);
    virtual Bird* spawn(void) = 0;
    void growOlder(float time);

  private:
    float weight;
    float age;

};

#endif