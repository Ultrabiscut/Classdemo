#ifndef _CLICKER_
#define _CLICKER_


using namespace std;

class clicker
{
private:
	int count; //stores the count

public:
	void Reset();  //MUTATOR - will change a member value
	void Click();  //MUTATOR - will change a member value
	void SetCount(int startCount);  //MUTATOR - will change a member value
	int GetCount();  //ACCESSOR - doesn't change anything

	//clicker(); //default constructor (they have the same name as the class)
	//clicker(int startingCount); //parameter constructor
	clicker(int startingCount = 0); //constructor with default paramater
	~clicker(); //destructor

	//constructors execute their code when
	//the objex is declared

	//default constructors never have parameters

	//destructors execute their code when
	//the object is destroyed (goes of of scope)

};

#endif