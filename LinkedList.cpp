#include <iostream>
#include <cstdlib>

#include "LinkedList.hpp"

void LinkedList::DeleteByValue(int value) {

	Node* node = new Node();
	node = head;
	int pos = 1;
	while (node->data != value && node->next != NULL)
	{
		pos++;
		node = node->next;
	}
	
	if (node->next != NULL || node->data == value)
		LinkedList::DeletePos(pos);
}

void LinkedList::DeleteLast() {
	Node* node = new Node();
	node = head;
	if (node->next != NULL) {
		while (node->next->next != NULL)
			node = node->next;
		node->next = NULL;
	}
	else
		head = NULL;
	length--;

}

void LinkedList::DeleteFirst() {
	head = head->next;
	length--;
}

void LinkedList::DeletePos(int pos) {
	if (pos == 1)
		DeleteFirst();
	else if (pos >= length)
		DeleteLast();
	else {
		Node *node = new Node;
		node = head;
		int contor = 0;
		for (contor = 0; contor < pos - 2; contor++)
			node = node->next;
		node->next = node->next->next;
		length--;
	}

}

LinkedList::LinkedList() {
	this->length = 0;
	this->head = NULL;
}

LinkedList::~LinkedList() {
	std::cout << "LIST DELETED";
}

void LinkedList::AddFirst(int data) {
	Node* node = new Node();
	node->data = data;
	node->next = this->head;
	this->head = node;
	this->length++;
}

void LinkedList::AddLast(int data) {
	Node* node = new Node();
	Node* temp = new Node();
	
	node = this->head;
	if (node != NULL) {
		while (node->next != NULL)
			node = node->next;
		temp->data = data;
		temp->next = NULL;
		node->next = temp;
		this ->length++;
	}
	else
		LinkedList::AddFirst(data);
}

void LinkedList::AddPos(int data, int pos) {
	Node* node = new Node();
	Node* temp = new Node();
	node = this->head;
	if (pos == 1)
		LinkedList::AddFirst(data);
	else if (node != NULL && pos <= length) {
		int contor;
		for (contor = 0; contor < pos - 2; contor++)
			node = node->next;
		//std::cout << contor << "\n" << node -> data << "\n";
		temp->next = node->next;
		temp->data = data;
		node->next = temp;
		this->length++;
	}
	else
		LinkedList::AddLast(data);

}

void LinkedList::print() {
	Node* head = this->head;
	int i = 1;
	while (head) {
		//std::cout << i << ": " << head->data << std::endl;
		std::cout << head->data << " ";
		head = head->next;
		i++;
	}
}

int LinkedList::GetLength() {
	return length;
}

