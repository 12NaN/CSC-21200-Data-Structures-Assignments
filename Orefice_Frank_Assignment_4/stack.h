#ifndef STACK_H
#define STACK_H

template<class ItemType>
class stack
{
	public:
		static const int CAPACITY = 30;
		stack(){used=0;}
		void push(const ItemType& entry);
		void pop();
		bool empty() const{ 
			// Precondition: used >= 0
			// Postcondition: used = 0
			
			(used==0);
		}
		int size() const{
			// Precondition: used >= 0
			// Postcondition: The value of used is returned
			
			return used;
		}
		ItemType top() const;
	private:
		ItemType data[CAPACITY];
		int used;	
};

#include "stack.template"
#endif
