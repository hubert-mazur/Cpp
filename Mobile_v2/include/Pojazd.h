#pragma once
#include "Silnik.h"
#include "Wheels.h"
#include <vector>
# include "Wheels.h"
class Pojazd : public Silnik
{
public:
  Pojazd(Silnik object, float stan_licznika = 0) : Silnik(object.get_moc(), object.get_pojemnosc(), object.get_paliwo()), _stan_licznika(stan_licznika){};
  Pojazd() : Silnik()
  {
  }
  void Przebieg(float stan_licznika)
  {
    _stan_licznika = stan_licznika;
  }

protected:
  float _stan_licznika;
};
