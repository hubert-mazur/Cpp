//
// Created by hubert on 15.05.19.
//

#ifndef LAB08_VECTOR_H
#define LAB08_VECTOR_H


class Vector
{
public:
	Vector () = default;

	template <typename T>
	static void Initialise  (T numb)
	{
		array = static_cast<T*>(new T [numb]);
	}

	template <typename T>
	static void Initialise (int numb, T object)
	{
		size = numb;
		array = new T [numb];

		for (int i=0;i<numb;i++)
			*(static_cast<T*>(array)+i) = object;

	}

	template <typename T>
	static T& At (int pos)
	{
		return *(static_cast<T*>(array) + pos);
	}

	template <typename T>
	static void Reset ()
	{
		if (array)
		{
			delete [] static_cast<T *>(array);
			array = nullptr;
		}

	}

	static int Size ()
	{
		return size;
	}

protected:
	static int size;
	static void *array;
};

 void *Vector::array = nullptr;
 int Vector::size = 0;

#endif //LAB08_VECTOR_H
