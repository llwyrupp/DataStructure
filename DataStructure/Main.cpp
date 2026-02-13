#include "List.h"
#include "LinkedList.h"

int main(void) {

	List<int> list;

	for (int i = 0; i < 10; ++i)
		list.Add(i);


	LinkedList<int> linkedList;

	linkedList.Insert(10);
	linkedList.Insert(40);
	linkedList.Insert(30);

	linkedList.Print();
	return 0;
}