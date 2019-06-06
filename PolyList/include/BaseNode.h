//
// Created by hubert on 03.06.19.
//

#ifndef LAB08_BASENODE_H
#define LAB08_BASENODE_H

#include <typeinfo>

class BaseNode {

public:
	BaseNode () : Next (nullptr)
	{};

	void setNext (BaseNode *object)
	{
		Next = object;
	}

	template<typename T>
	bool isType ()
	{
		return getType () == typeid (T);
	}

	virtual const std::type_info &getType () const = 0;

	BaseNode *next () const {
		return Next;
	}

	virtual ~BaseNode () = default;

private:
	BaseNode *Next;

};


#endif //LAB08_BASENODE_H
