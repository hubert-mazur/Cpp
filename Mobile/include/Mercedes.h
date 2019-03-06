#pragma once
#include "Samochod.h"

class Mercedes : public Samochod
{
public:
  Mercedes(Silnik object, float stan_licznika = 0) : Samochod(object, "czarny metalic", stan_licznika){};
  Mercedes() : Samochod(){};
};