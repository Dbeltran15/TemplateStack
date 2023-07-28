#pragma once
#include "Node.h"
#include <iostream>

using std::cout;
using std::endl;

template <class T>
class TemplateStack
{
public: 

	Node <T>* head = nullptr;
	
	//Funciones
	bool push(T newValue);
	void print();
};

template <typename T>
bool TemplateStack<T>::push(T newValue)
{
	Node<T> * newNode = new Node<T>();
	newNode->value = newValue;
	
	if (this->head == nullptr)
	{
		this->head = newNode;
	}
	else
	{
		Node <T>* it = this->head;
		if (it->value == newNode->value)
		{
			return false;
		}
		while (it->next != nullptr)
		{
			if (it->value == newNode->value || it->next->value == newNode->value)
			{
				return false;
			}
			it = it->next;
		}
		it->next = newNode;
	}
	return true;
}



template <typename T>
void TemplateStack<T>::print()
{
	Node <T>* it = this->head;
	while (it != nullptr)
	{
		cout << it->value << " - ";
		it = it->next;
	}
	cout << endl;
}