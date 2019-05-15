//
// Created by hubert on 09.05.19.
//

#ifndef LAB08_LOKAJ_H
#define LAB08_LOKAJ_H

#include "Pomieszczenie.h"

template<void (Pomieszczenie::*T) () const>
void Lokaj (const Pomieszczenie &object)
{
	(object.*T) ();
}

template<void (Pomieszczenie::*T) () const>
void Lokaj (Pomieszczenie &object)
{
	(object.*T) ();
}

template<int>
void Lokaj (Pomieszczenie &object)
{
	std::cout << "Nic nie robie." << std::endl;
}


#endif //LAB08_LOKAJ_H
