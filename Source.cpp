#include "LinkedList.hpp"
#include <iostream>
#include <cstdlib>

int main()
{
	LinkedList* list = new LinkedList();

	list->AddLast(11);
	list->AddFirst(3);
	list->AddPos(4, 2);
	list->AddLast(14);
	list->AddLast(5);
	list->AddFirst(8);
	list->AddPos(34, 4);
	list->DeleteLast();
	list->DeletePos(3);
	list->DeletePos(4);
	list->AddPos(15, 4);
	list->DeleteByValue(14);
	list->DeleteFirst();
	list->print();
	std::cout << "\nList Length: " << list->GetLength() << '\n';
	delete list;
	system("PAUSE");
	return 0;
}