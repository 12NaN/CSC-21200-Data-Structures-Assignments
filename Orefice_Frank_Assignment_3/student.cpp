#include <iostream>
#include "student.h"

student::student(std::string user_fname, std::string user_lname, std::string user_year)
{
	// Precondition: user_fname, user_lname and user_year are strings.
	// Postcondition: fname, lname and year equal user_fname, user_lname and user_year, respectively.
	
	fname = user_fname;
	lname = user_lname;
	year = user_year;	
}

void student::set_student(std::string user_fname, std::string user_lname, std::string user_year)
{
	// Precondition: user_fname, user_lname and user_year are strings.
	// Postcondition: fname, lname and year equal user_fname, user_lname and user_year, respectively.
	
	fname = user_fname;
	lname = user_lname;
	year = user_year;
}

int student::get_id() const{
	// Precondition: The student object has a value in id.
	// Postcondition: The student object's id is returned.
	
	return id;	
}

std::string student::get_fname() const{
	// Precondition: The student object has a value in fname.
	// Postcondition: The student object's fname is returned.
	
	return fname;
}

std::string student::get_lname() const{
	// Precondition: The student object has a value in lname.
	// Postcondition: The student object's lname is returned.
	
	return lname;
}

std::string student::get_year() const{
	// Precondition: The student object has a value in year.
	// Postcondition: The student object's year is returned.
	
	return year;	
}

void student::set_fname(std::string user_fname){
	// Precondition: user_fname is a string.
	// Postcondition: The student object's fname is assigned the value of user_fname.
	
	fname = user_fname;
}

void student::set_lname(std::string user_lname){
	// Precondition: user_lname is a string.
	// Postcondition: The student object's lname is assigned the value of user_lname.
	
	lname = user_lname;
}

void student::set_year(std::string user_year){
	// Precondition: user_year is a string.
	// Postcondition: The student object's year is assigned the value of user_year.
	
	year = user_year;
}

void student::set_id(int user_id){
	// Precondition: user_id is an integer.
	// Postcondition: The student object's id is assigned the value of user_id.
	
	id = user_id;
}
