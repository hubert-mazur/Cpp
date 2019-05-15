//
// Created by hubert on 14.05.19.
//

#ifndef LAB08_FACTORY_H
#define LAB08_FACTORY_H


class Factory
{
public:
	Factory () = default;

	template <typename T1>
	void prototype (T1 object)
	{
		holder <T1> (false,object);
	}


	template <typename T>
	T produce ()
	{
		return holder (true,Mercedes());
	}

	template <typename S>
	S holder (bool choice,S object)
	{
		static S obj;
		if (!choice)
		{
			obj = object;
		}
		return obj;

	}

};


#endif //LAB08_FACTORY_H
