#include "DoublyLinkedList.h"
#include <iostream>
using namespace std;
int main(){
	DoublyLinkedList dll;
	dll.pushFront(12);
	dll.pushFront(11);
	dll.pushFront(10);
	dll.pushBack(13);
	dll.pushBack(14);
	dll.pushFront(9);
	while (!dll.isEmpty()){
		cout << "[DLL]Element:" << dll.getBack() << endl;
		dll.popBack();
	}
	int a[] = {55,66,77,88,99};
	DoublyLinkedList dll2(a, a + 5);
	for (DoublyLinkedList::iterator it = dll2.begin(); it != dll2.end(); ++it){
		cout << "[DLL2]Element:" << *it << endl;
	}
	return 0;
}