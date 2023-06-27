# include "func.h"
#include <iostream>
//add function code here
using std::cout;

int get_vector_max_value(std::vector<int> num)
{
    int count = 0;
    for (auto i = 0; i < num.size(); i++)
    if(num[i]> count)
    count = num[i];

    return count;
}

std::vector<int> get_square_of_each_element (std::vector<int> sqr)
{
    for (auto i = 0; i< sqr.size(); i++)
    sqr[i] = sqr[i] * sqr[i];
    for(auto i = 0; i < sqr.size(); i++)
    cout<<sqr[i]<<" ";
    cout<<"\n";

    return std::vector(sqr);
}