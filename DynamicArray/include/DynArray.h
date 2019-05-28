//
// Created by hubert on 28.05.19.
//

#ifndef LAB08_DYNARRAY_H
#define LAB08_DYNARRAY_H

#include <iosfwd>
#include <iostream>

template<typename T>
class DynArray {

public:
	explicit DynArray (int size)
	{
		length = size;
		box = new T[size];
	}

	explicit DynArray (int size, const std::string *strArray)
	{
		box = new T[size];
		length = size;

		for (int i = 0; i < length; i++)
		{
			box[i] = strArray[i];
		}
	}

	int size () const
	{
		return length;
	}

	T &operator[] (int elem)
	{
		return *(box + elem);
	}

	T *getBox () const
	{
		return box;
	}

	int getLength () const
	{
		return length;
	}

	~DynArray ()
	{
		delete[] box;
	}

	T *begin ()
	{
		return box;
	}

	T *end ()
	{
		return (box + length);
	}

	class Iterator {

	public:
		Iterator (T *object)
		{
			safeLock = object;
		}

		T *getSafeLock () const
		{
			return safeLock;
		}


		bool operator!= (const T *object)
		{
			if (safeLock != object)
				return true;
			else
				return false;
		}

		T *operator++ ()
		{
			return ++safeLock;
		}


		T operator* ()
		{
			return *safeLock;
		}

		T *operator-> ()
		{
			return safeLock;
		}

	private:
		T *safeLock;
	};

private:
	T *box;
	int length;

};

template<typename T>
std::ostream &operator<< (std::ostream &ostr, const DynArray<T> &object)
{
	ostr << "{";
	for (int i = 0; i < object.getLength () - 1; i++)
		ostr << "\"" << object.getBox ()[i] << "\", ";

	ostr << "\"" << object.getBox ()[object.getLength () - 1];
	ostr << "\"}";

	return ostr;
}


#endif //LAB08_DYNARRAY_H
