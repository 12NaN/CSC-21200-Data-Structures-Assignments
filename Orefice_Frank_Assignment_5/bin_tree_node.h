#ifndef BIN_TREE_NODE_H
#define BIN_TREE_NODE_H
template<class Type>
class bin_tree_node{
	
	public:
		bin_tree_node(const Type& init_data = Type(), bin_tree_node* init_left = nullptr, bin_tree_node* init_right = nullptr, int init_key = -1, bin_tree_node* init_next = nullptr)
		{
			data_field = init_data;
			left_field = init_left;
			right_field = init_right;
			key = init_key;
			next = init_next;
		}
		
		Type& get_data() { return data_field; }
		bin_tree_node*& get_left(){ return left_field;}
		bin_tree_node*& get_right(){ return right_field;}
		void set_data(const Type& new_data){ data_field = new_data;}
		void set_left(bin_tree_node* left){ left_field = left;}
		void set_right(bin_tree_node* right){ right_field = right;}
		
		const Type& get_data() const { return data_field;}
		const bin_tree_node*& get_left() const{ return left_field;}		
		const bin_tree_node*& get_right() const{ return right_field;}
		
		bool is_leaf() const{ return (left_field == nullptr) && (right_field == nullptr);}	
	
		int& get_key(){
			return key;
		}
		
		void set_key(int new_key){
			key = new_key;
		}
		
		const int& get_key() const { return key;}
		
	private:

		int key;
		bin_tree_node* next;
		Type data_field;
		bin_tree_node* root_node;
		bin_tree_node* left_field;
		bin_tree_node* right_field;	
};

template <class Type>
bin_tree_node<Type>* bst_insert(bin_tree_node<Type>*& root, const Type& entry, const int& key_val);

template <class Type>
bin_tree_node<Type>*& bst_remove(bin_tree_node<Type>*& root, int key_val);

template <class Type>
bin_tree_node<Type>* bst_min(bin_tree_node<Type>*& root);

template <class Type>
void pre_order(bin_tree_node<Type>*& node_ptr);

template <class Type>
void inorder(bin_tree_node<Type>*& node_ptr);

template <class Type>
void tree_clear(bin_tree_node<Type>*& node_ptr);

#include "bin_tree_node.template"
#endif
