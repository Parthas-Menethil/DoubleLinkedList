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
	DoublyLinkedList();
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