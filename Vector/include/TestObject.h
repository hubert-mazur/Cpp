//
// Created by hubert on 15.05.19.
//

#ifndef LAB08_TESTOBJECT_H
#define LAB08_TESTOBJECT_H


class TestObject
{
public:
	TestObject (int numb = 0) : ID_number (numb)
	{};

	~TestObject () = default;

	inline void Print () const
	{
		std::cout << "Object with ID=" << ID_number << std::endl;
	}

	inline void Set (int numb)
	{
		ID_number = numb;
	}

protected:
	int ID_number;
};


#endif //LAB08_TESTOBJECT_H
