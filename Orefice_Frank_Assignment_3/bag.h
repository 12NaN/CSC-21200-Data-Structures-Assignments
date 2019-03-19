#ifndef BAG_H
#define BAG_H
#include <string>
#include "student.h"

class bag{
	public:
		static const int CAP = 10;
		bag(int init_cap = CAP);
		bag(const bag& source);
		~bag();
		void operator=(bag assign);
		void insert(int user_key, student user_student_value);
		void retrieve(int user_key);
		int remove(int user_key);
		int binary_search(int user_key, int left, int right);
	
	private:
		student *data;
		int used;
		int capacity;
};
#endif
