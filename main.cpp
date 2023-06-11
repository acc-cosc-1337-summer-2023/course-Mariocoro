//write include statements
#include <iostream>
#include "data_types.h"

//write namespace using statement for cout
using std::cout;
using std::cin;

int main()
{
	int num;
	cout<<" enter a number for num:";
	cin>>num;
	int result = multiply_numbers(num);
	cout<<"the result is "<<result<<"n";
	int num1=4;
	result = multiply_numbers(num1);
	cout<<"the result is:"<<result<<"\n";

	return 0;
}
