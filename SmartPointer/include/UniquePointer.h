//
// Created by hubert on 15.05.19.
//

/** This is a template class, that provides smart pointer handling.
 * For each, only one object of this class may have an address to pointer.
 * Implemented methods and overloaded operators manage their pointers, while setting it's references to NULL.
 */

#ifndef LAB08_UNIQUEPOINTER_H
#define LAB08_UNIQUEPOINTER_H

#include <iostream>



template<typename T>
class UniquePointer
{

public:

	explicit UniquePointer (T *object) : pointer (object) /** Constructor */
	{};


	void setPointer (T *pointer) /** pointer setter */
	{
		UniquePointer::pointer = pointer;
	}

	UniquePointer (UniquePointer &object) /** Copy constructor */
	{
		pointer = object.pointer;
		object.setPointer (NULL);
	}

	~UniquePointer () /** Destructor, checks if pointer has been already empty */
	{
		if (pointer)
			delete pointer;
	}


	friend std::ostream &operator<< (std::ostream &ostr,
									 const UniquePointer &object) /** overloaded stream operator, used for printing pointers address */
	{
		ostr << "[pointing to " << object.pointer << "]";
		return ostr;
	}

	T operator* ()
	{
		return *pointer;
	}

	T *operator-> () /** operator -> returns pointer to holded object */
	{
		return pointer;
	}

	UniquePointer &
	operator= (UniquePointer &object) /** overloaded operator =, checks if object's pointers are the same */
	{
		if (this->pointer != object.pointer)
		{
			delete this->pointer;
			this->pointer = object.pointer;
			object.pointer = NULL;
		}
		return *this;
	}

	operator T * () const /** method returns pointer to object */
	{
		return this->pointer;
	}

protected:
	T *pointer; /** pointer, to template type object  */

};


#endif //LAB08_UNIQUEPOINTER_H
