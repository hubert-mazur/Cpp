//
// Created by hubert on 15.05.19.
//

/** Simple class for name keeping. Provides some basic functionality */

#ifndef LAB08_OBJECT_H
#define LAB08_OBJECT_H

#include <string>
#include <iostream>

class Object {
public:

	/** Simple constructor for name member.  */
	Object (std::string str) : name (str)
	{};

/**
 * Prints to standard output string member of class.
 * Ensures const.
 */

	void Print () const
	{
		std::cout << "name " << name << std::endl;
	}

protected:
	std::string name; /** Class member std::string for name of object */
};


#endif //LAB08_OBJECT_H
