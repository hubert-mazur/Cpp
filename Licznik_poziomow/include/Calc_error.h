//
// Created by hubert on 07.05.19.
//

#ifndef LAB08_CALC_ERROR_H
#define LAB08_CALC_ERROR_H

#include <string>
#include <iostream>
#include <vector>
#include <exception>

class Calc_error : std::runtime_error
{
public:
	Calc_error (std::runtime_error *obj, std::string str, std::string file_name, int line);
	static void handler ();
protected:
	std::runtime_error *_object_to_delete;
	static int err_caught;
};

#endif //LAB08_CALC_ERROR_H
