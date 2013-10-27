#ifndef __DOUBLYLINKEDLIST_H__
#define __DOUBLYLINKEDLIST_H__
struct Node
{
	int val;
	Node *next;
	Node *prev;
};
class DoublyLinkedList{
private:
	Node* front;
	Node* back;
	unsigned int size;
protected:
public:
	class iterator{
	private:
		Node* curNode;
	protected:
	public:
		iterator();
		iterator(Node*);
		int& operator*() const;
		iterator operator++();
		iterator operator++(int);
		iterator operator--();
		iterator operator--(int);
		bool operator!=(iterator i) const;
		bool operator==(iterator i) const;
	};
	DoublyLinkedList();
	DoublyLinkedList(int*,int*);
	iterator begin();
	iterator end();
	void pushBack(int val);
	void pushFront(int val);
	void popBack();
	void popFront();
	int getFront();
	int getBack();
	bool isEmpty();
	unsigned int getSize();
	~DoublyLinkedList();

};
#endif