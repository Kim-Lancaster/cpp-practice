#include <iostream>
using namespace std;

int main()
{
	cout << "Student name:		Kimberly Lancaster" << endl;

	
	double operand1, operand2;
	char userOperator, userChoice;
	cout << endl;

	do
	{
	cout << "Please enter first number, operator & second number (separated by spaces): ";
	cin >> operand1;
	cin >> userOperator;
	cin >> operand2;
		switch (userOperator)
		{
		case '+':
			cout << "Answer = " << operand1 + operand2 << endl;
			break;
		case '-':
			cout << "Answer = " << operand1 - operand2 << endl;
			break;
		case '*':
			cout << "Answer = " << operand1 * operand2 << endl;
			break;
		case '/':
			cout << "Answer = " << operand1 / operand2 << endl;
			break;
		default:
			cout << "Sorry, illegal operation. Only '+', '-', '*', '/' are allowed" << endl;
		}
		cout << endl;
		cout << "Would you like to perform another calculation? (y /n): ";
		cin >> userChoice;
		cout << endl;

	} while (userChoice == 'Y' || userChoice == 'y');
	cout << "Thank you for using the calculator program." << endl;
	cout << "Goodbye";

	cin.get();
	cin.ignore();
	return 0;

}