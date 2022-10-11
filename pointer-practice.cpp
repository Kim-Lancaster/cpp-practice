#include <iostream>

using namespace std;

int main()
{
	cout << "Student name:	Kimberly Lancaster" << endl;
	cout << endl;


	int userArray[10];
	int* dynamicArray, * tempptr;
	dynamicArray = new int[10];
	tempptr = dynamicArray;


	for (int i = 0; i < 10; i++)
	{
		cout << "Please enter a number: ";
		cin >> userArray[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << userArray[i] << " ";
	}

	cout << endl;

	for (int j = 9; j >= 0; j--)
	{
		*tempptr = userArray[j];
		cout << *tempptr << " ";
		tempptr++;
	}
	delete[] dynamicArray;

	cin.ignore();
	cin.get();

	return 0;
}