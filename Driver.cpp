/***********************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/16/15
* H.W. Number:			Assignment 3
* Filename:				Driver.cpp
Create a linked list without using classes. You must provide the ability for the linked list nodes to store any data type.
You must provide the following functions:

create_list
add_node
remove_node
clear_list
start_node - return the head
end_node - return the tail
************************************************************/


//#define typename T
using namespace std;

#include <iostream>
/*
struct initList
{
	 *HEAD = NULL; };
};
*/
template <typename T>
struct Node
{
	T* data;

	Node<T> *next;
	//Node<T> *CURR = NULL;
};

template <typename T>
struct linkedList
{
	Node<T> *HEAD = NULL;
	Node<T> *CURR = NULL;

};

struct startNode *HEAD = NULL;
template <typename T>
Node<T> *createList(Node<T> data)
{
	Node<T> *node = (Node<T>*)malloc(sizeof(Node<T>));
	
	if (node == NULL)
	{
		return NULL;
	}
	else
	{
		node->data = data;
		node->next = NULL;
	}
	
	HEAD = CURR = node;

	//HEAD = CURR = node;

	return node;
}	

template <typename T>
Node<T> *addNode(Node<T> data)
{
	if (HEAD == NULL)
	{
		return (createList(data))
	}

	Node<T> *node = (Node<T>*)malloc(sizeof(Node<T>));
	if (node == NULL)
	{
		return NULL;
	}
	node->data = data;
	node->next = NULL;

	node->next = startNode->
	HEAD = node;
	
	return node;
}

template <typename T>
void *removeNode() 
{
	Node<T> *CURR = HEAD;
	Node<T> *ND = CURR;

	CURR = CURR->next;

	delete ND;
}

template <typename T>
void clearList()
{
	Node<T> *CURR = HEAD;

	while (curr->next != 0)
	{
		Node<T> *ND = curr;
		curr = curr->next;
		delete ND;
	}
	delete curr;
}

/*
template <typename T>
void display() {

	Node<T>* temp;
	temp = HEAD;

	if (temp == NULL)
		cout << "No data inside !" << endl;

	while (temp != NULL) {
		cout << "Data : " << temp->data << endl;
		temp = temp->next;
	}
}
*/
template <typename T>
void printList()
{
	Node *node = HEAD;

	while (node != NULL)
	{
		cout << node->data;
		node = node->next;
	}
	cout << "\n -------Printing list End------- \n";
}

int main()
{
	Node<int>addNode(int);
	int i = 0, ret = 0;
	Node<int> *node = NULL;
	
	printList<int>();

	for (i = 5; i<10; i++)
		addNode(i);

	printList<int>();

	for (i = 4; i>0; i--)
		addNode(i);

	printList<int>();


}