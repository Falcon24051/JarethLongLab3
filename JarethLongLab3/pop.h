
#ifndef POP_H
#define POP_H
#include "list.h"
#include <string>

using namespace std;

struct node {
	ItemType data;
	node* next;

};

class stack {
public:
	ItemType weasil;
	ItemType getValue() { return weasil; }
	stack();
	~stack();
	bool isEmpty();
	bool isFull();
	void Push(ItemType item);
	void Pop();
	ItemType nextItem();
	void info();
	void Top();
private:
	int leng;
	int maxLeng = 50;
	node* top;
	node* curPos;

};

#endif //!POP_H