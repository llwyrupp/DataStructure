#include "List.h"

int main(void) {

	List<int> list;

	for (int i = 0; i < 10; ++i)
		list.Add(i);

	return 0;
}