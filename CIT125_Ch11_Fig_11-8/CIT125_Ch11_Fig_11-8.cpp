// CIT125 Intro To C++ Luigi Robles
// 07-24-2020 Summer Term
// Ch.11 Pg.377 Figure 11-8 Calories Program

#include <iostream>
using namespace std;

int main()
{
	int calories[5] = { 0 }; //declare and initalize int array

	//store data in the array
	for (int sub = 0; sub < 5; sub += 1) //for loop to keep track of array subscripts
	{
		cout << "Calories for day " << sub + 1 << ": ";
		cin >> calories[sub]; //input part of IPO
	}	//end for

	//display the contents of the array
	cout << endl << "Array contents: " << endl;
	for (int sub = 0; sub < 5; sub += 1)  
		cout << "Calories for day " << sub + 1
		<< ": " << calories[sub] << endl; //Output part of IPO
	//end for

	return 0;
}	//end of main function