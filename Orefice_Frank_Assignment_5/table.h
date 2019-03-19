#ifndef TABLE_H
#define TABLE_H
#include "node.h"
template <class Type>
class table{
	public:
		static const int TABLE_SIZE = 1000;
		table();
		~table();
		
		void insert(const int& key_val, const Type& entry);
		void remove(int key);
		void find(int key, bool& found, Type& result) const;
		void find_index(int key, bool& found, int& i) const;
		int size() const { return total_records;}
		void display();
		
	private:
		node<Type>* data[TABLE_SIZE];	
		void findPtr(int key, bool& found, node<Type>*& ptr) const;
		int total_records;
		int hashFunct(int key) const;
		int used;
};

#include "table.template"
#endif
