#ifndef TABLE2_H
#define TABLE2_H
#include "bin_tree_node.h"
template <class Type>
class table_two{
	public:
		static const int TABLE_SIZE = 1000;
		table_two();
		~table_two();
		
		void insert(const int& key_val, const Type& entry);
		void remove(int key);
		void find(int key, bool& found, Type& result) const;
		void find_index(int key, bool& found, int& i) const;
		int size() const { return total_records;}
		void display();
	private:
		bin_tree_node<Type>* data[TABLE_SIZE];	
		void findPtr(int key, bool& found, bin_tree_node<Type>*& ptr) const;
		int total_records;
		int hashFunct(int key) const;
		int used;
	
};

#include "table2.template"
#endif
