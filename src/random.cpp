#include "random.hpp"

static float uniform_deviate(int seed)
{
  return seed * (1.0f / (RAND_MAX + 1.0f));
}

void init_random()
{
  srand(time(NULL));
}

float uniform_random()
{
  return uniform_deviate(rand());
}
