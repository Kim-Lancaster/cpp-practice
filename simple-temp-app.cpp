//A simple program to convert Celsius to Fahrenheit
#include <iostream>

using namespace std;

int main()
{
    double celsius, fahrenheit;

    cout << "Student name: Kimberly Lancaster" <<endl;
    cout << "Welcome to the CtoF temperature conversion program." << endl;
    cout << "This program converts degrees Celsius to degrees Fahrenheit" <<endl << endl; //adding 2 endl for formating
    cout << "Please enter the temperature value in degrees Celsius (decimal number): ";

    cin >> celsius; //saving user input to Celsius
    fahrenheit = ((celsius * 9) / 5) + 32; // converting Celsius to Fahrenheit

    cout << "\nThe equivalent Fahrenheit temperature is: " << fahrenheit <<endl; //\n for formating

    cin.ignore();
    cin.get();

    return 0;
}
