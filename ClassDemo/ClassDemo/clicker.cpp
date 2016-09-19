#include "clicker.h"

//This file is where we are going to write the
//code for how each member function works for the
//clicker class.

//define the click() function
//returnType className:: functionName(formal params)
void clicker::Click()
{
	count++; //private members can be directly accessed
			 //inside of the class functions
}

//define the Reset() function
void clicker::Reset()
{
	count = 0; //reset the count to 0
}

//define GetCount()
int clicker::GetCount()
{
	return count; //return the calue stored in count
}

//define SetCount()
void clicker::SetCount(int startCount)
{
	count = startCount; //store whatever is passed in
						//into the count memeber.
}

//define constructor for clicker class
//this code runs when the ovject is declared
//clicker::clicker()  //note: same name
//{
//	count = 0; //intitialize count to a default value
//}

//constructor with parameters
//clicker::clicker(int startingCount)
//{
//	//store the value passed in, in the count member
//	count = startingCount;
//}

//constructor with default parameter
clicker::clicker(int startingCount)
{
	count = startingCount;
}


//define the destructor for the clicker class
clicker::~clicker()
{
	//sometimes we do stuff in here, but there's really
	//nothing to do for a class like this one :(
	//usually, we deallocate memory here
}