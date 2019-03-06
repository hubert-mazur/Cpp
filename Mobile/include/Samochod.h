#pragma once
#include "Pojazd.h"
#include <iostream>
class Samochod : public Pojazd
{
    friend std::ostream &operator<<(std::ostream &stram, Samochod object);

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
        return _kolor;
    }
    void operator=(Samochod const &object)
    {
        this->_moc = object._moc;
        this->_pojemnosc = object._pojemnosc;
        this->_paliwo = object._paliwo;
        this->_kolor = object._kolor;
        this->_kola = object._kola;
        this->_stan_licznika = 0;
    }

  protected:
    int _kola;
    std::string _kolor;
};
std::ostream &operator<<(std::ostream &stream, Samochod object)
{
    return std::cout << "\n"
                     << "Liczba kol " << object.get_liczbe_kol() << "\n"
                     << "Stan licznika " << object.get_stan_licznika() << " [km]\n"
                     << "kolor " << object.get_kolor() << "\n";
}