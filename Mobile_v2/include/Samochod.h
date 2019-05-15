#pragma once
#include "Pojazd.h"
#include <iostream>
# include <vector>
# include "Wheels.h"
class Samochod : public Pojazd
{
     std::ostream friend &operator<<(std::ostream &stream, Samochod object);
  public:
    Samochod(Silnik object, std::string kolor, float stan_licznika = 0) : Pojazd(object, stan_licznika)
    {
        _kola = 4;
        _kolor = kolor;
    };
    Samochod(Silnik object, float stan_licznika = 0) : Pojazd(object, stan_licznika)
    {
        _kola = 4;
        _kolor = "czarny";
    };
    Samochod() : Pojazd()
    {
    }
    int get_liczbe_kol()
    {
        return _kola;
    }
    float get_stan_licznika()
    {
        return _stan_licznika;
    }
    std::string &get_kolor()
    {
        return _st_kolor;
    }
    static void DefaultColor (std::string str="Czarny");
    void operator=(Samochod const &object)
    {
        this->_moc = object._moc;
        this->_pojemnosc = object._pojemnosc;
        this->_paliwo = object._paliwo;
        this->_kolor = object._kolor;
        this->_kola = object._kola;
        this->_stan_licznika = 0;
    }
virtual std::string get_nazwa (void)
{
    return nazwa;
}
  protected:
    int _kola;
    std::string _kolor;
    static std::string _st_kolor;
    std::string nazwa;
    std::vector<Wheel*> _wheels;
};



