#include <iostream>
#include <algorithm>
#include "bag.h"

bag::bag(int init_cap){
	// Precondition: init_cap is an integer.
	// Postcondition: capacity is assigned thevalue of init_cap, memory is allocated for data
	// and used is set to 0.
	
	capacity = init_cap;
	data = new student[capacity];
	used = 0;
}

bag::bag(const bag& source){
	// Precondition: source is of type bag.
	// Postcondition: A copy of source will be made.
	
	int index;
	
	data = new student [source.capacity];
	
	for(index = 0; index < source.used; index++)
		data[index] = source.data[index];
		
	used = source.used;
	capacity = source.capacity;	
}

bag::~bag(){
	delete [] data;
}

void bag::operator=(bag assign){
	// Precondition: assign is of type bag. 
	// Postcondition: The bag that activated this function has the same
	// items and capacity as assign.
	
	student* new_data;
	
	if(this == &assign)
		return;
	
	if(capacity != assign.capacity)
	{
		new_data = new student[assign.capacity];
		delete [] data;
		data = new_data;
		capacity = assign.capacity;
	}
	
	used = assign.used;
	std::copy(assign.data, assign.data + used, data);
}

void bag::insert(int user_key, student user_value)
{
	// Precondition: user_key is an integer and user_value is of type student.
	// Postcondition: A new student object is inserted into the bag and is assigned a key.
	
	if (used == 0){
		data[0] = user_value;
		data[0].set_id(user_key);
		used++;
	}
	
	else{
		for(int i = 0; i < used; i++)
		{
			if(data[i].get_id() == user_key)
			{
				data[i] = user_value;
				data[i].set_id(user_key);
				return;
			}
		}
		data[used] = user_value;
		data[used].set_id(user_key);
		used++;
		
		int swap;
		student temp;
		
		for(int i = 0; i < (used-1);i++)
		{
			swap = 0;
			for(int j = 0; j < (used-1); j++)
			{
				if(data[j].get_id() > data[j+1].get_id())
				{
					temp = data[j+1];
					data[j+1] = data[j];
					data[j] = temp;
					swap = 1;
				}
			}
			if(swap == 0)
				break;
		}
	}
}

void bag::retrieve(int user_key) {
	// Precondition: user_key is an integer.
	// Postcondition: The student object's id, fname, lname and year are printed.
	
	int index;
	index = binary_search(user_key, 0, used-1);
	
	if(index == -1)
		return;
	
	std::cout << "Students ID\tStudent First name\tStudent Last name\tStudent Year" << std::endl;
	std::cout << "\n" << data[index].get_id() << "\t\t" << data[index].get_fname() << "\t\t\t" << data[index].get_lname() << "\t\t\t" << data[index].get_year() << std::endl;
}

int bag::remove(int user_key){
	// Precondition: user_key is an integer.
	// Postcondition: The student object with the id that equals the user_key will be removed.
	
	int index;

	index = binary_search(user_key, 0, used-1);
	
	if(index == -1)
		return -1;
	
	for(int j = index + 1; j < used; j++){
		data[j-1] = data[j];
	}
	used--;

	return 0;
}

int bag::binary_search(int user_key, int left, int right){
	// Precondition: user_key, left and right are integers.
	// Postcondition: The index of user_key is found and is 
	// returned, else -1 is returned if it is not found.
	
	if(right >= left)
	{
		int mid = left + (right-1)/2;
		
		if(data[mid].get_id() == user_key)
		{
			return mid;
		}
		
		else if(data[mid].get_id() > user_key)
		{
			return binary_search(user_key, left, mid-1);
		}
		
		return binary_search(user_key, mid+1, right);
	}
	return -1;	
}
