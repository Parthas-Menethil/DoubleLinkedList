#include "DoublyLinkedList.h"
DoublyLinkedList::iterator::iterator(){
	curNode = nullptr;
}
DoublyLinkedList::iterator::iterator(Node* n){
	curNode = n;
}
int& DoublyLinkedList::iterator::operator*() const{
	return curNode->val;
}
DoublyLinkedList::iterator DoublyLinkedList::iterator::operator++(){
	curNode = curNode->next;
	return *this;
}
DoublyLinkedList::iterator DoublyLinkedList::iterator::operator++(int){
	iterator it(curNode);
	curNode = curNode->next;
	return it;
}
DoublyLinkedList::iterator DoublyLinkedList::iterator::operator--(){
	curNode = curNode->prev;
	return *this;
}
DoublyLinkedList::iterator DoublyLinkedList::iterator::operator--(int){
	iterator it(curNode);
	curNode = curNode->prev;
	return it;
}
bool DoublyLinkedList::iterator::operator!=(DoublyLinkedList::iterator i) const{
	return !(i.curNode == curNode);
}
bool DoublyLinkedList::iterator::operator==(DoublyLinkedList::iterator i) const{
	return i.curNode == curNode;
}