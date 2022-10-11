#include <iostream>
#include <string>

using namespace std;

class PayRoll
{
private:
	string EmName;
	double hourRate;
	int hoursWorked;
	double totalPay;
public:

	void getRateAndHours();
	void printGross();
};

void PayRoll::getRateAndHours()
{
	cout << "Please enter your name, pay rate and hours.";
	cin >>EmName >> hourRate >> hoursWorked;
	totalPay = hourRate * hoursWorked;	
}


void PayRoll::printGross()
{
	cout << "The gross pay for " << EmName << " is " << totalPay << endl;
}


int main()
{
	PayRoll employees[7];
	for (int i = 0; i < 7; i++)
	{
		employees[i].getRateAndHours();
	}

	for (int i = 0; i < 7; i++)
	{
		employees[i].printGross();
	}
	return 0;
}