#pragma once
#include "Motorower.h"

class Romet : public Motorower
{
public:
  Romet(Silnik object, float stan_licznika = 0) : Motorower(object, "czerwony metalic", stan_licznika){};
  Romet() : Motorower(){};
  Romet(Romet const &object)
  {
    this->_moc = object._moc;
    this->_paliwo = object._paliwo;
    this->_pojemnosc = object._pojemnosc;
    this->_kola = object._kola;
    this->_kolor = object._kolor;
    this->_stan_licznika = 0;
  }
};