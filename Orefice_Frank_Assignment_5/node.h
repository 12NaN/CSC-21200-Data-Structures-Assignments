#ifndef NODE_H
#define NODE_H

template <class Type>
class node{
	public:
		node(const Type& init_data=Type(), node* init_next = nullptr)
		{			
			value = init_data;
			next = init_next;
		}
		
		Type& get_data(){
			// Precondition: value contains a value of type Type
			// Postcondition: The value of value is returned
			
			return value;
		}
		
		node* get_next()
		{
			// Precondition: next points to the next node or to nullptr
			// Postcondition: The node pointer assigned to next is returned.
						
			return next;
		}
		
		int& get_key(){
			// Precondition: key contains a value
			// Postcondition: The value assigned to key is returned
			
			return key;
		}
		
		void set_data(const Type& new_value){
			// Precondition: new_value is of type const Type&
			// Postcondition: value is assigned the value of new_value
			
			value = new_value;
		}
		
		void set_next(node* new_next){
			// Precondition: new_next is of type node pointer
			// Postcondition: next is assigned the value of new_next
			
			next = new_next;
		}
		
		void set_key(int new_key){
			// Precondition: new_key is of type int
			// Postcondition: key is assigned the value of new_key
			
			key = new_key;
		}
	
		const Type& get_data() const {
			// Precondition: value contains a value of type const Type&
			// Postcondition: value is returned
			
			return value;
		}
		
		const node* get_next() const {
			// Precondition: next contains a value of type const node*
			// Postcondition: next is returned
			
			return next;
		}
		
		const int& get_key() const {
			// Precondition: key contains a value of type int
			// Postcondition: key is returned
						
			return key;
		}
		
	
	private:
		node<Type>* next;
		int key;
		Type value;
};

#endif
