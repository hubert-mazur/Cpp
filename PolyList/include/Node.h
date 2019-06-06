//
// Created by hubert on 03.06.19.
//

#ifndef LAB08_NODE_H
#define LAB08_NODE_H

#include "BaseNode.h"

template<typename T>
class Node : public BaseNode {
public:
	explicit Node (T val) : value (val)
	{};

	T getValue () const
	{
		return value;
	}

	const std::type_info &getType () const override
	{
		return typeid (T);
	}

	virtual ~Node () = default;

private:
	T value;

};


#endif //LAB08_NODE_H
