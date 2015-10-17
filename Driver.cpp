/***********************************************************
* Author:				Abdul Yahya
* Created:				10/16/15
* Updated:				10/16/15
* H.W. Number:			Assignment 3
* Filename:				Driver.cpp
*
*Create a linked list without using classes. You must provide the ability for the linked list nodes to store any data type.
*You must provide the following functions:
*
*create_list
*add_node
*remove_node
*clear_list
*start_node - return the head
*end_node - return the tail
************************************************************/


//#define typename T
using namespace std;

#include <iostream>
template <typename T>
struct Node
{
	listNode *HEAD;
	listNode *CURR;
};
template <typename T>
struct listNode
{
	T* data;
	listNode<T> *next;
};

template <typename T>
listNode<T> *startNode(Node<T> HEAD) const
{
	listNode<T> *temp = HEAD;

	return HEAD;
	
};

template <typename T>
listNode<T> *endNode(listNode<T> CURR) const
{
	listNode<T> *temp = CURR;

	return CURR;
}

template <typename T>
listNode<T> *createList(listNode<T> data)
{
	listNode<T> *node = (listNode<T>*)malloc(sizeof(listNode<T>));

	if (node == NULL)
	{
		cout << "Create List is NULL";
		return NULL;
	}
	else
	{
		node->data = data;
		node->next = NULL;
	}
	
	node->HEAD = node->CURR = node;

	return node;
}	

template <typename T>
listNode<T> *addNode(listNode<T> data)
{
	if (HEAD == NULL)
	{
		return (createList(data))
	}

	listNode<T> *node = (listNode<T>*)malloc(sizeof(listNode<T>));
	if (node == NULL)
	{
		return NULL;
	}
	node->data = data;
	node->next = NULL;

	node->next = 
	HEAD = node;
	
	return node;
}

template <typename T>
void *removeNode() 
{
	listNode<T> *CURR = HEAD;
	listNode<T> *ND = CURR;

	CURR = CURR->next;

	delete ND;
}

template <typename T>
void clearList()
{
	listNode<T> *CURR = HEAD;

	while (curr->next != 0)
	{
		listNode<T> *ND = curr;
		curr = curr->next;
		delete ND;
	}
	delete curr;
}

/*
template <typename T>
void display() {

	listNode<T>* temp;
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
	listNode<T> *node = HEAD;

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