#include "DoublyLinkedList.h"
#include <iostream>
using namespace std;
int main(){
	DoublyLinkedList dll;
	dll.pushFront(12);
	dll.pushFront(11);
	dll.pushFront(10);
	dll.pushBack(13);
	while (!dll.isEmpty()){
		cout << "Element:" << dll.getFront() << endl;
		dll.popFront();
	}
	return 0;
}