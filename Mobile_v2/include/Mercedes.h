#pragma once
#include "Samochod.h"

class Mercedes : public Samochod
{
public:
  Mercedes(Silnik object, float stan_licznika = 0) : Samochod(object, "czarny metalic", stan_licznika)
  {
    nazwa = "Mercedes A";
  };
  Mercedes(std::string paliwo, float moc, float pojemnosc) : Samochod(Silnik(moc, pojemnosc, paliwo)){
    for (int i = 0; i < _kola; i++)
    {
      _wheels.emplace_back(new Wheel);
    }
    nazwa = "Mercedes A";
  };
  ~Mercedes ()
  {
    for (int i=0;i<_kola;i++)
    delete _wheels[i];
  }
  std::string getnazwa(void)
  {
    return nazwa;
  }
  std::vector<Wheel *> Wheels()
  {
    return _wheels;
  }
  void WheelsPressureInfo(void) 
  {
    for (int i = 0; i < (int)_wheels.size(); i++)
    {
      std::cout << "[INFO] "
                << nazwa
                << " Wheel [" << i << "] :: Pressure " << *_wheels[i] << " [bar]" << std::endl;
    }
  }
};