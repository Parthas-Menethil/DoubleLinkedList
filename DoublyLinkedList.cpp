#include "DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList() : front(nullptr), back(nullptr), size(0){

}
DoublyLinkedList::~DoublyLinkedList(){
	while (!isEmpty)
		popFront();
}
unsigned int DoublyLinkedList::getSize(){
	return size;
}
bool DoublyLinkedList::isEmpty(){
	return !size;
}
int DoublyLinkedList::getFront(){
	return front->val;
}
int DoublyLinkedList::getBack(){
	return back->val;
}
void DoublyLinkedList::pushBack(int val){
	Node* i = new Node;
	i->val = val;
	i->next = i->prev = nullptr;
	if (front){
		i->prev = back;
		back->next = i;
		back = i;
	}
	else{
		front = back = i;
	}
	size++;
}
void DoublyLinkedList::pushFront(int val){
	Node* i = new Node;
	i->val;
	i->next = i->prev = nullptr;
	if (front){
		i->next = front;
		front->prev = i;
		front = i;
	}
	else{
		front = back = i;
	}
	size++;
}
void DoublyLinkedList::popBack(){
	if (back){
		if (back == front){
			delete back;
			back = front = nullptr;
		}
		else{
			Node* t = back->prev;
			t->next = nullptr;
			delete back;
			back = t;
		}
		size--;
	}
}
void DoublyLinkedList::popFront(){
	if (front){
		if (front == back){
			delete front;
			front = back = nullptr;
		}
		else{
			Node* t = front->next;
			t->prev = nullptr;
			delete front;
			front = t;
		}
		size--;
	}
}