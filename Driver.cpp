/*
Create a linked list without using classes. You must provide the ability for the linked list nodes to store any data type.
You must provide the following functions:

create_list
add_node
remove_node
clear_list
start_node - return the head
end_node - return the tail
*/
//#define typename T
using namespace std;

#include <iostream>

template <typename T>
struct Node
{
	T* data;
	Node<T> *next;
};

/*
template <typename T>
struct linkedList
{
	Node<T> * HEAD = NULL;
	Node<T> * Tail = NULL;

	data = new Node<T>;
	data->next = NULL;

	void addNode(Node<T> data);
	//void addNode(Node<T>data, Node<T> *node);
	void clearList();
};
void linkedList<T>::addNode(Node<T> data)
{
if (HEAD == NULL)
{
HEAD = new Node<T>();
HEAD->data = data;
HEAD->next = NULL;
}
else
HEAD->addNode(data);
}

/*
template <typename T>
void linkedList<T>::addNode(Node<T> data, Node<T> *node )
{
if (node->next)
addNode(data,node->next);
else
{
temp->next = new Node<T>();
temp->next->data = data;
temp->next->next = NULL;
}
}
*
*/
template <typename T>
Node<T> createList(Node<T> &data) 
{
	Node<T> * HEAD = NULL;
	Node<T> * Tail = NULL;

	data = new Node<T>;
	data->next = NULL;
	
	return *data;
}
template <typename T>
void addNode(Node<T> data)
{
	if (HEAD == NULL)
	{
		HEAD = new Node<T>();
		HEAD->data = data;
		HEAD->next = NULL;
	}
	else
		HEAD->addNode(data);
}

void removeNode() 
{

}

template <typename T>
void clearList()
{
	Node<T> * curr = HEAD;

	while (curr->next != 0)
	{
		Node<T> *ND = curr;
		curr = curr->next;
		delete ND;
	}
	delete curr;
}

main()
{

}