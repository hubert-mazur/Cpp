//
// Created by hubert on 07.05.19.
//

#include "Calc_error.h"

int Calc_error::err_caught = 0;

Calc_error::Calc_error (std::runtime_error *obj, std::string str, std::string file_name, int line) : runtime_error (
		"-- z powodu: " + str + "[plik = " + file_name + ", linia = " + std::to_string (line) + "]\n")
{
	_object_to_delete = obj;
	err_caught++;
	std::cout << "wywolalem sie!\n";
	throw;
}

void Calc_error::handler () try
{
	throw;
}

catch (Calc_error *obj)
{
//	std::cout<<"Yup, i found Calc_error object\n";
}

catch (std::exception *obj)
{
//	std::cout<<obj->what ();
}


