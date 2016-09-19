#include <iostream>
#include "Windows.h"
#include "clicker.h" //include the file where clicker is defined
using namespace std;



int main()
{
	//declare an object of type clicker
	clicker Clicker1; //default and parameterized constructor executes

	//declare variables
	char cSelection;
	bool bContinue = true;

	//display a menu options
		//click
		//set
		//reset
		//display count
	do
	{
		cout << "Count: " << Clicker1.GetCount() << endl;
		cout << "Select menu options: " << endl;
		cout << "	(C)lick" << endl;
		cout << "	(S)et" << endl;
		cout << "	(R)eset" << endl;
		cout << "	(Q)uit" << endl;
		cout << "Enter Selection: ";
		cin >> cSelection;
		cSelection = toupper(cSelection);

		//switch to handle the user's choice
		switch (cSelection)
		{
		case 'C':
			Clicker1.Click();
			break;
		case 'S':
			int newCount;
			cout << "Enter new count value: ";
			cin >> newCount;
			Clicker1.SetCount(newCount);
			break;
		case 'R':
			Clicker1.Reset();
			break;
		case 'Q':
			bContinue = false;
			break;
		default:
			cout << "INVALID LETTER ENTERED" << endl;
			Sleep(2000);
		}

		//clear the system
		system("cls");

	} while (bContinue);


	//create another clicker
	//store the first clicker's count in the second clicker
	clicker Clicker2 = Clicker1;

	return 0;
}