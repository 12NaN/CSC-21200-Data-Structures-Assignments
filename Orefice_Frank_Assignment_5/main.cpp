#include <iostream>
#include <iomanip>
#include <ctime>
#include <fstream>
#include "table.h"
#include "table2.h"
using namespace std;

int main()
{
	table <int> obj1, obj2, obj3;
	table_two <int> obj4, obj5, obj6;
	double duration1 = 0, duration2 = 0;
	ofstream outputFile;

	outputFile.open("running_time.txt");
	outputFile << "Hash Table using Linked list";
	outputFile << "\nInsertion" << " Seconds" << endl;
	
	for(int i = 1; i <= 10; i++)
	{
		outputFile << i << " ";
		clock_t startTime = clock();
		obj1.insert(rand() % 1000 + 1, rand() % 1000 + 1);
		clock_t endTime = clock();

		duration1 = duration1 + (double)(endTime - startTime)/ CLOCKS_PER_SEC;
		outputFile << "\t  " << fixed << setprecision(3) << (double)(endTime - startTime)/ CLOCKS_PER_SEC << "\n";
	}
	
	outputFile << "\n\nHash Table using Binary Search Tree";
	outputFile << "\nInsertion" << " Seconds" << endl;
		
	for(int j = 1; j <= 10; j++)
	{
		outputFile << j << " ";		
		clock_t startTime = clock();
		obj4.insert(rand() % 1000 + 1, rand() % 1000 + 1);
		clock_t endTime = clock();
		
		duration2 = duration2 + (double)(endTime - startTime)/ CLOCKS_PER_SEC;
		outputFile << "\t  " << fixed << setprecision(3) << (double)(endTime - startTime)/ CLOCKS_PER_SEC << "\n";
	}
	if(duration1 < duration2)
		outputFile << "\nHash Table using Linked List is faster in the range 1 to 10";
	else if(duration2 < duration1)
		outputFile << "\nHash Table using Binary Search Tree is faster in the range 1 to 10";
	else
		outputFile << "\nTie";
	
	duration1 = 0, duration2 = 0;
	outputFile << "\n\nHash Table using Linked list";
	outputFile << "\nInsertion" << " Seconds" << endl;
	
	for(int i = 10; i <= 100; i++)
	{
		clock_t startTime = clock();
		obj1.insert(rand() % 1000 + 1, rand() % 1000 + 1);
		
		if(i % 10 == 0){
			outputFile << i << " ";
			clock_t endTime = clock();
			outputFile << "\t  " << fixed << setprecision(3) << duration1 << "\n";
		}
		clock_t endTime = clock();		
		duration1 = duration1 + (double)(endTime - startTime)/ CLOCKS_PER_SEC;

	}
	
	outputFile << "\n\nHash Table using Binary Search Tree";
	outputFile << "\nInsertion" << " Seconds" << endl;
	
	for(int j = 10; j <= 100; j++)
	{
		clock_t startTime = clock();
		obj4.insert(rand() % 1000 + 1, rand() % 1000 + 1);
		
		if(j % 10 == 0){
			outputFile << j << " ";
			clock_t endTime = clock();
			outputFile << "\t  " << fixed << setprecision(3) << duration2 << "\n";		
		}
		clock_t endTime = clock();
		duration2 = duration2 + (double)(endTime - startTime)/ CLOCKS_PER_SEC;

	}
	if(duration1 < duration2)
		outputFile << "\nHash Table using Linked List is faster in the range 10 to 100";
	else if(duration2 < duration1)
		outputFile << "\nHash Table using Binary Search Tree is faster in the range 10 to 100";
	else
		outputFile << "\nTie";
		
	duration1 = 0, duration2 = 0;
	outputFile << "\n\nHash Table using Linked list";
	outputFile << "\nInsertion" << " Seconds" << endl;
	for(int i = 100; i <= 1000; i++)
	{
		clock_t startTime = clock();
		obj2.insert(rand() % 1000 + 1, rand() % 1000 + 1);
		
		if(i % 100 == 0){
			outputFile << i << " ";
			clock_t endTime = clock();
			outputFile << "\t  " << duration1 << "\n";	
		}
		clock_t endTime = clock();		
		duration1 = duration1 + (double)(endTime - startTime)/ CLOCKS_PER_SEC;

	}
	
	outputFile << "\n\nHash Table using Binary Search Tree";
	outputFile << "\nInsertion" << " Seconds" << endl;
		
	for(int j = 100; j <= 1000; j++)
	{
		clock_t startTime = clock();
		obj5.insert(rand() % 1000 + 1, rand() % 1000 + 1);
		
		if(j % 100 == 0){
			outputFile << j << " ";
			clock_t endTime = clock();
			outputFile << "\t  " << duration2 << "\n";	
		}
		clock_t endTime = clock();
		duration2 = duration2 + (double)(endTime - startTime)/ CLOCKS_PER_SEC;
	}
	
	if(duration1 < duration2)
		outputFile << "\nHash Table using Linked List is faster in the range 100 to 1000";
	else if(duration2 < duration1)
		outputFile << "\nHash Table using Binary Search Tree is faster in the range 100 to 1000";
	else
		outputFile << "\nTie";

	duration1 = 0, duration2 = 0;
	outputFile << "\n\nHash Table using Linked list";
	outputFile << "\nInsertion" << " Seconds" << endl;
	
	for(int i = 1000; i <= 10000; i++)
	{
		clock_t startTime = clock();
		obj2.insert(rand() % 1000 + 1, rand() % 1000 + 1);
		
		if(i % 1000 == 0){
			outputFile << i << " ";
			clock_t endTime = clock();	
			outputFile << "\t  " << duration1 << "\n";
		}
		clock_t endTime = clock();
		duration1 = duration1 + (double)(endTime - startTime)/ CLOCKS_PER_SEC;
	}

	outputFile << "\n\nHash Table using Binary Search Tree";
	outputFile << "\nInsertion" << " Seconds" << endl;
		
	for(int j = 1000; j <= 10000; j++)
	{
		clock_t startTime = clock();
		obj5.insert(rand() % 1000 + 1, rand() % 1000 + 1);
		
		if(j % 1000 == 0){
			outputFile << j << " ";
			clock_t endTime = clock();
			outputFile << "\t  " << duration2 << "\n";
		}
		clock_t endTime = clock();
		duration2 = duration2 + (double)(endTime - startTime)/ CLOCKS_PER_SEC;
	}
	
	if(duration1 < duration2)
		outputFile << "\nHash Table using Linked List is faster in the range 1000 to 10000";
	else if(duration2 < duration1)
		outputFile << "\nHash Table using Binary Search Tree is faster in the range 1000 to 10000";
	else
		outputFile << "\nTie";
	
	duration1 = 0, duration2 = 0;
	outputFile << "\n\nHash Table using Linked list";
	outputFile << "\nInsertion" << " Seconds" << endl;
	
	for(int i = 10000; i <= 100000; i++)
	{

		clock_t startTime = clock();
		obj3.insert(rand() % 1000 + 1, rand() % 1000 + 1);
		if(i % 10000 == 0){
			outputFile << i << " ";
			clock_t endTime = clock();
			outputFile << "\t  " << duration1  << "\n";	
		}
		
		clock_t endTime = clock();
		duration1 = duration1 + (double)(endTime - startTime)/ CLOCKS_PER_SEC;
	}

	outputFile << "\n\nHash Table using Binary Search Tree";
	outputFile << "\nInsertion" << " Seconds" << endl;
	
	for(int j = 10000; j <= 100000; j++)
	{
		clock_t startTime = clock();
		obj6.insert(rand() % 1000 + 1, rand() % 1000 + 1);

		if(j % 10000 == 0){
			outputFile << j << " ";
			clock_t endTime = clock();
			outputFile << "\t  " << duration2  << "\n";
		}
		clock_t endTime = clock();
		duration2 = duration2 + (double)(endTime - startTime)/ CLOCKS_PER_SEC;
	}

	if(duration1 < duration2)
		outputFile << "\nHash Table using Linked List is faster in the range 10000 to 100000";
	else if(duration2 < duration1)
		outputFile << "\nHash Table using Binary Search Tree is faster in the range 10000 to 100000";
	else
		outputFile << "\nTie";
		
	duration1 = 0, duration2 = 0;
	outputFile << "\n\nHash Table using Linked list";
	outputFile << "\nInsertion" << " Seconds" << endl;
		
	for(int i = 100000; i <= 1000000; i++)
	{
		clock_t startTime = clock();
		obj3.insert(rand() % 1000 + 1, rand() % 1000 + 1);
		
		if(i % 100000 == 0){	
			outputFile << i << " ";
			clock_t endTime = clock();
			outputFile << "\t  " << duration1 << "\n";
		}
		clock_t endTime = clock();
		duration1 = duration1 + (double)(endTime - startTime)/ CLOCKS_PER_SEC;

	}

	outputFile << "\n\nHash Table using Binary Search Tree";
	outputFile << "\nInsertion" << " Seconds" << endl;
	
	for(int j = 100000; j <= 1000000; j++){
		clock_t startTime = clock();
		obj6.insert(rand() % 1000 + 1, rand() % 1000 + 1);
		
		if(j % 100000 == 0){
			outputFile << j << " ";
			clock_t endTime = clock();
			outputFile << "\t  " << duration2 << "\n";
		}
		clock_t endTime = clock();
		duration2 = duration2 + (double)(endTime - startTime)/ CLOCKS_PER_SEC;
	}

	if(duration1 < duration2)
		outputFile << "\nHash Table using Linked List is faster in the range 100000 to 1000000";
	else if(duration2 < duration1)
		outputFile << "\nHash Table using Binary Search Tree is faster in the range 100000 to 1000000";
	else
		outputFile << "\nTie";
	
	outputFile.close();	
	
	return 0;
}

