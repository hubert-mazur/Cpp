//
// Created by hubert on 09.05.19.
//

#ifndef LAB08_POMIESZCZENIE_H
#define LAB08_POMIESZCZENIE_H

#include <string>
#include <iostream>


class Pomieszczenie
{

public:
	explicit Pomieszczenie (std::string str) : name (str)
	{
		std::cout << "Tworze pomieszczenie: " << name << std::endl;
	};

	void zetrzyj_kurze () const
	{
		std::cout << "Scieram kurze w pomieszczeniu: " << name << std::endl;
	}

	void odkurz () const
	{
		std::cout << "Odkurzam w pomieszczeniu: " << name << std::endl;
	}

	void umyj_podloge () const
	{
		std::cout << "Myje podloge w pomieszczeniu: " << name << std::endl;
	}

	template<typename T>
	void wstaw (const T &object)
	{
		std::cout << "Wstawiam " << object << " do pomieszczenia: " << name << std::endl;
	}

	const std::string &getName () const
	{
		return name;
	}

protected:
	std::string name;
};


#endif //LAB08_POMIESZCZENIE_H
