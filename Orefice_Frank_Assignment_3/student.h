#ifndef STUDENT_H
#define STUDENT_H
#include <string>
class student{
	public:
		student(std::string user_fname = "N/A", std::string user_lname = "N/A", std::string user_year = "N/A");	 
		void set_student(std::string user_fname = "N/A", std::string user_lname = "N/A", std::string user_year = "N/A");
		int get_id() const;
		std::string get_fname() const;
		std::string get_lname() const;
		std::string get_year() const;
		void set_fname(std::string user_fname);
		void set_lname(std::string user_lname);
		void set_year(std::string user_year);
		void set_id(int user_id);
	
	private:
		int id;
		std::string fname;
		std::string lname;
		std::string year;		
};
#endif
