#include<iostream>
#include "decisions.h"

using std::cout;
using std::cin;
using std::string;

int main() 
{
	int grade;
	cout<<"Please enter a number for grade: ";
	cin>>grade;
	
	string option = get_letter_grade_using_switch(grade);
	cout<<"The letter grade is: "<<option<<"\n";
	
	return 0;
}