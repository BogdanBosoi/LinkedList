#pragma once

#ifndef _LINKEDLIST_
#define _LINKEDLIST_

#include "Node.hpp"

class LinkedList {
private:
	int length;
	Node* head;
public:
	LinkedList();
	~LinkedList();
	int GetLength();
	void AddFirst(int data);
	void AddLast(int data);
	void AddPos(int data, int pos);
	void DeletePos(int pos);
	void DeleteFirst();
	void DeleteLast();
	void DeleteByValue(int value);
	void print();
};


#endif