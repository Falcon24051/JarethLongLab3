#include <iostream>
#inlcude "pop.h"

using namespace std;

	
	stack::stack()
	{
		leng = 0;
		top = nullptr;
		curPos = nullptr;
	}

	stack::~stack()
	{
		isEmpty();
	}



	bool stack::isEmpty()
	{
		return(top == nullptr);
	}

	bool stack::isFull()
	{
		if (leng == maxLeng)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}

	void stack::Push(ItemType weasil)
	{
		node* temp = new node;
		temp->data = weasil;

		if (top == nullptr)
		{
			temp->data = weasil;
			cin << item;
		}

		leng++
	}

	void stack::Pop()
	{

	}

	void stack::Top()
	{

	}

	void stack::info()
	{

	}
	
