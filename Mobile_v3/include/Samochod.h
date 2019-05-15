#pragma once
#include "Pojazd.h"
#include <iostream>
# include <vector>

class Samochod : public Pojazd
{
     std::ostream friend &operator<<(std::ostream &stream, Samochod object);
  public:
    Samochod(Silnik object, std::string kolor, float stan_licznika = 0) : Pojazd(object, stan_licznika)
    {
        _kolor = kolor;
    };
    Samochod(Silnik object, float stan_licznika = 0) : Pojazd(object, stan_licznika)
    {
        _kolor = "red";
    };

	Samochod():Pojazd(){};

    float get_stan_licznika()
    {
        return _stan_licznika;
    }
    std::string &get_kolor()
    {
        return _st_kolor;
    }

    virtual  ~Samochod () = default;

    static void DefaultColor (std::string str="red");

    void operator=(Samochod const &object)
    {
        this->_moc = object._moc;
        this->_pojemnosc = object._pojemnosc;
        this->_paliwo = object._paliwo;
        this->_kolor = object._kolor;
        this->_stan_licznika = 0;
    }
virtual std::string get_nazwa (void)
{
    return nazwa;
}
  protected:
    std::string _kolor;
    static std::string _st_kolor;
    std::string nazwa;
};



