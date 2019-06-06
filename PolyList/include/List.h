//
// Created by hubert on 03.06.19.
//

#ifndef LAB08_LIST_H
#define LAB08_LIST_H

#include <typeinfo>
#include "BaseNode.h"
#include "Node.h"

class List {
public:

	List () : Head (nullptr)
	{};

	template<typename T>
	void add (T value)
	{
		BaseNode *temp_node = new Node<T> (value);
		temp_node->setNext (Head);
		Head = temp_node;
	}

	BaseNode *head ()
	{
		return Head;
	}

	virtual ~List ()
	{
		BaseNode *temp = Head;

		while (temp)
		{
			temp = Head->next ();
			delete Head;
			Head=temp;
		}
	}

	template <typename T>
	static T get (BaseNode *object)
	{
		return dynamic_cast<Node<T> *>(object)->getValue ();
	}

private:

	BaseNode *Head;
};


#endif //LAB08_LIST_H
