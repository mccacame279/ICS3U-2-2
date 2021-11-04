#pragma once // prevents multiple definitions

#include <iostream> // print library
#include <string>
using namespace std;

// ===============
// implementations

int exerciseOne(string word) //takes in one word
{
	if (word == "agent") 
	{
	  return 10;
	}
	else
	{ 
          return 0;
	}
}

string exerciseTwo(int mark) //takes in one mark
{
	if (mark >= 50)
	{
	        return "passed";
	}
	else
	{
		return "failed";
	}
}

string exerciseThree(int number) //takes in one number
{
	string phrase = "";
	if (number % 3 == 0 && number % 5 == 0)
	{
		phrase += "fizzbuzz";
	}
	else if (number % 3 == 0)
	{
		phrase += "fizz";
	}
	else if (number % 5 == 0)
	{
		phrase += "buzz";
	}
	else
	{
		phrase = to_string(number);
	}
	return phrase;
}
