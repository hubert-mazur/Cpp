#pragma once
#include "string"
class Silnik
{

public:
  Silnik(int moc, float pojemnosc, std::string paliwo) : _moc(moc), _pojemnosc(pojemnosc), _paliwo(paliwo){};
  int get_moc()
  {
    return _moc;
  }
  float get_pojemnosc()
  {
    return _pojemnosc;
  }
  std::string get_paliwo()
  {
    return _paliwo;
  }
  Silnik()
  {
  }

protected:
  int _moc;
  float _pojemnosc;
  std::string _paliwo;
};