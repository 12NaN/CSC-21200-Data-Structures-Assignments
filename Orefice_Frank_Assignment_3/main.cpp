#include <iostream>
#include "bag.h"
#include "student.h"
using namespace std;

int main()
{
	bag bg;
	int key;
	string first_n, last_n, year;
	
	cout << "Enter a first name, last name and year (ex: freshman): ";
	cin >> first_n >> last_n >> year;
	
	cout << "Enter an ID (key): ";
	cin >> key;
	
	student stdt(first_n, last_n, year);
	bg.insert(key, stdt);
	
	cout << "Enter another student's first name, last name and year: ";
	cin >> first_n >> last_n >> year;
	
	student stdt2(first_n, last_n, year);
	
	cout << "Enter an ID (key): ";
	cin >> key;
	
	bg.insert(key, stdt2);
	
	cout << "Enter the ID (key) of the student whose info you want to view: ";
	cin >> key;
	
	bg.retrieve(key);
	
	cout << "Enter the ID (key) of the student whose info you want to remove: ";
	cin >> key;
	bg.remove(key);
	
	return 0;
}
