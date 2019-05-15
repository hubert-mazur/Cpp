//
// Created by hubert on 07.05.19.
//
#include "iostream"
#include "LicznikPoziomow.h"

unsigned LicznikPoziomow::licznik = 0;

LicznikPoziomow::LicznikPoziomow ()
{
	licznik++;
	std::cout << "Rozpoczynamy poziom numer " << licznik << "." << std::endl;
}

LicznikPoziomow::~LicznikPoziomow ()
{
	std::cout << "Konczymy licznik poziom numer " << licznik << "." << std::endl;
	licznik--;
}

