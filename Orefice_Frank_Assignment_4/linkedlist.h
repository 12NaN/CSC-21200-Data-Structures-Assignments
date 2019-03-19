#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "stack.h"
template <class ItemType>
class node{
	public:
	
		stack<ItemType> value;
		node<ItemType>* next;
			
		node(ItemType nodeValue)
		{
			value.push(nodeValue);
			next = nullptr;
		}
};

template <class ItemType>
class LinkedList
{
	public:
		LinkedList()
		{
			headptr = nullptr;
		}
		~LinkedList();
		LinkedList(LinkedList<ItemType>* copy);
		LinkedList<ItemType>& operator=(const LinkedList<ItemType>* copy);
		void clearList();
		void insertNode(const ItemType& newValue);
		void deleteNode(const ItemType& newValue);
		void removeFrom(int nodePosition);
		void displayList() const;
		void insertAt(int nodePosition, const ItemType& newValue);
		void insertHead(const ItemType& newValue);
		void removeHead();
		int size();
	
		void update(int valuePosition, const ItemType& newValue);
		void redo(int valuePosition, const int undo_to);

	private:
		node<ItemType> *headptr;
};

#include "linkedlist.template"
#endif
