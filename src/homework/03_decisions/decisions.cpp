//write include statement for decisions header
#include "decisions.h"

using std::string;

//Write code for function(s) code here

string get_letter_grade_using_switch(int grade)
{
    string option = "";

    switch (grade)
    {
    case 90 ... 100: 
        option = "A";
        break;

    case 80 ... 89: 
        option = "B";
        break;

    case 70 ... 79: 
        option = "C";
        break;

    case 60 ... 69: 
        option = "D";
        break;

    case 00 ... 59: 
        option = "F";
        break;

    default:
        option = "Invalid Option";
        break;
    }
    return option;
}

//Write code for function(s) code here