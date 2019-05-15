//
// Created by hubert on 14.05.19.
//

#ifndef LAB08_FORD_H
#define LAB08_FORD_H
#pragma once

#include "Samochod.h"

class Ford : public Samochod
{
public:
	Ford(Silnik object, float stan_licznika = 0) : Samochod(object, "czarny metalic", stan_licznika)
	{
		nazwa = "Ford A";
	};
	Ford(std::string paliwo, float moc, float pojemnosc) : Samochod(Silnik(moc, pojemnosc, paliwo)){

		nazwa = "Ford";
	};

	Ford ():Samochod() {};
	~Ford () = default;

	std::string getnazwa(void)
	{
		return nazwa;
	}


};
#endif //LAB08_FORD_H
