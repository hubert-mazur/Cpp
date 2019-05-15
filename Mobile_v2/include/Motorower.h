#pragma once
#include "Pojazd.h"

class Motorower : public Pojazd
{
    friend std::ostream &operator<<(std::ostream &stram, Samochod object);

  public:
    Motorower(Silnik object, std::string kolor, float stan_licznika = 0) : Pojazd(object, stan_licznika)
    {
        _kola = 2;
        _kolor = kolor;
    };
    Motorower(Silnik object, float stan_licznika = 0) : Pojazd(object, stan_licznika)
    {
        _kola = 2;
        _kolor = "czarny";
    };
    Motorower() : Pojazd()
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

  protected:
    int _kola;
    std::string _kolor;
};
std::ostream &operator<<(std::ostream &stream, Motorower object)
{
    return std::cout << "\n"
                     << "Liczba kol " << object.get_liczbe_kol() << "\n"
                     << "Stan licznika " << object.get_stan_licznika() << " [km]\n"
                     << "kolor " << object.get_kolor() << "\n";
}