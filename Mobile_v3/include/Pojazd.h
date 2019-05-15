#pragma once
#include "Silnik.h"

#include <vector>

class Pojazd : public Silnik
{
public:
  Pojazd(Silnik object, float stan_licznika = 0) : Silnik(object.get_moc(), object.get_pojemnosc(), object.get_paliwo()), _stan_licznika(stan_licznika){};

  void Przebieg(float stan_licznika)
  {
    _stan_licznika = stan_licznika;
  }

  Pojazd (): Silnik() {};
  virtual ~Pojazd () = default;

protected:
  float _stan_licznika;
};
