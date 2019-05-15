#pragma once
#include "Samochod.h"

class Mercedes : public Samochod
{
public:

	 friend std::ostream& operator<<(std::ostream&,const Mercedes&);
	 Mercedes& operator= (const Mercedes &object)
	 {
		 this->_moc = object._moc;
		 this->_pojemnosc = object._pojemnosc;
		 this->_paliwo = object._paliwo;
		 this->_kolor = object._kolor;
		 this->_stan_licznika = 0;
		 this->nazwa = object.nazwa;
	 }


  Mercedes(std::string paliwo, float moc, float pojemnosc) : Samochod(Silnik(moc, pojemnosc, paliwo)){

    nazwa = "Mercedes";
  };

  Mercedes():Samochod(){};

  ~Mercedes () = default;

  std::string getnazwa(void)
  {
    return nazwa;
  }

};

inline std::ostream& operator<< (std::ostream& ostr,const Mercedes &object)
{
	ostr<< "[INFO] Car:: Type "<<object.nazwa<<std::endl;
	ostr<< "[INFO] Car:: Color "<<object._kolor<<std::endl;
	ostr<< "[INFO] Engine:: Fluel "<<object._paliwo<<std::endl;
	ostr<< "[INFO] Engine:: Capacity "<<object._pojemnosc<<std::endl;
	ostr<< "[INFO] Engine:: Power "<<object._moc<<std::endl;
	return ostr;
}