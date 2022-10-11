//Update from 2022... I have no idea what I was suppose to be achieving with this code.
//It's some kind of average generator using arrays...
//I have kept it for posterity.  I'll try rewriting it in the future when I work with c++ again.
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct flights
{
	int departure;
	int arrival;
	int max;
	int min;
};

flights getInfo(string);
void maxArrivals(int[], string[]);
void minArrivals(int[], string[]);

int main()
{
	cout << "Student name: Kimberly Lancaster" << endl;

	double aveArrival;
	double aveDeparture;
	int maxArr[12];
	int minArr[12];
	string montharr[12];
	string monthArr2[12];
	int totalArrivals;
	int totalDeparts;

	flights jan, feb, mar, apr, may, jun;
	flights jul, aug, sep, oct, nov, dec;
	
//___________________January___________________________________________________	
	jan = getInfo("January");
	maxArr[0] = jan.max;
	minArr[0] = jan.min;
	montharr[0] = "January";
	monthArr2[0] = montharr[0];

//_______________________Febuary_________________________________________________
	feb = getInfo("Febuary");
	maxArr[1] = feb.max;
	minArr[1] = feb.min;
	montharr[1] = "Febuary";
	monthArr2[1] = montharr[1];

//_________________________March____________________________________
	mar = getInfo("March");
	maxArr[2] = mar.max;
	minArr[2] = mar.min;
	montharr[2] = "March";
	monthArr2[2] = montharr[2];

//________________________April____________________________________________________
	apr = getInfo("April");
	maxArr[3] = apr.max;
	minArr[3] = apr.min;
	montharr[3] = "April";
	monthArr2[3] = montharr[3];

//______________________________May______________________________________________
	may = getInfo("May");
	maxArr[4] = may.max;
	minArr[4] = may.min;
	montharr[4] = "May";
	monthArr2[4] = montharr[4];

//_______________________June____________________________________________
	jun = getInfo("June");
	maxArr[5] = jun.max;
	minArr[5] = jun.min;
	montharr[5] = "June";
	monthArr2[5] = montharr[5];

//_______________________July_______________________________________
	jul = getInfo("July");
	maxArr[6] = jul.max;
	minArr[6] = jul.min;
	montharr[6] = "July";
	monthArr2[6] = montharr[6];

//___________________August___________________________________________
	aug = getInfo("August");
	maxArr[7] = aug.max;
	minArr[7] = aug.min;
	montharr[7] = "August";
	monthArr2[7] = montharr[7];

//___________________September___________________________________
	sep = getInfo("September");
	maxArr[8] = mar.max;
	minArr[8] = mar.min;
	montharr[8] = "March";
	monthArr2[8] = montharr[8];

//_____________October____________________________________________
	oct = getInfo("October");
	maxArr[9] = mar.max;
	minArr[9] = mar.min;
	montharr[9] = "October";
	monthArr2[9] = montharr[9];

//___________________November_________________________________
	nov = getInfo("November");
	maxArr[10] = mar.max;
	minArr[10] = mar.min;
	montharr[10] = "November";
	monthArr2[10] = montharr[10];

//______________________December__________________________
	dec = getInfo("December");
	maxArr[11] = mar.max;
	minArr[11] = mar.min;
	montharr[11] = "December";
	monthArr2[11] = montharr[11];


//_________Getting the total and averages and printing them________________________________
	totalArrivals = (jan.arrival + feb.arrival + mar.arrival + apr.arrival + may.arrival + jun.arrival + jul.arrival + aug.arrival + sep.arrival + oct.arrival + nov.arrival + dec.arrival);
	totalDeparts = (jan.departure + feb.departure + mar.departure + apr.departure + may.departure + jun.departure + jul.departure + aug.departure + sep.departure + oct.departure + nov.departure + dec.departure);
	aveArrival = totalArrivals / 12.00;
	aveDeparture = totalDeparts / 12.00;

	cout << "The average monthly landing for the year is: ";
	cout << setprecision(4) << aveArrival << endl;
	cout << "The average monthly departures for the year is: ";
	cout << setprecision(4) << aveDeparture << endl;
	
	cout << "Total Landings for the year is " << totalArrivals << endl;
	cout << "Total departures for the year is " << totalDeparts << endl;

//__________calling min an max function to get cout______________________
	maxArrivals(maxArr, montharr);
	minArrivals(minArr, monthArr2);

	cin.ignore();
	cin.get();

	return 0;
}


flights getInfo(string month)
{
	flights tempFlight;
	cout << "Please enter the number of planes that landed in " << month << ": ";
	cin >> tempFlight.arrival;
	cout << "Please enter the number of planes that departed in " << month << ": ";
	cin >> tempFlight.departure;
	cout << "Please enter the greatest number of planes that landed on a single day in " << month << ": ";
	cin >> tempFlight.max;
	cout << "Please inter the least number of planes that landed on a single day in " << month << ": ";
	cin >> tempFlight.min;
	return tempFlight;
}

void maxArrivals(int maxArr[], string monthArr[])
{
	int size = 12;
	string tempMonth;
	int tempMax;
	for (int i = 0; i < (size -1); i++)
	{
		for (int j = (i + 1); j < size; j++)
		{
			if (maxArr[j] > maxArr[i])
			{
				tempMonth = monthArr[i];
				tempMax = maxArr[i];
				monthArr[i] = monthArr[j];
				maxArr[i] = maxArr[j];
				monthArr[j] = tempMonth;
				maxArr[j] = tempMax;
			}
		}
	}
	cout << "The greatest number of planes that landed in a single day is "; 
	cout << maxArr[0]; 
	cout << " which occured in the month of "; 
	cout << monthArr[0] << endl;
}

void minArrivals(int minArr[], string monthArr2[])
{
	int size = 12;
	string tempMonth;
	int tempMin;
	for (int i = 0; i < (size - 1); i++)
	{
		for (int j = (i + 1); j < size; j++)
		{
			if (minArr[j] < minArr[i])
			{
				tempMonth = monthArr2[i];
				tempMin = minArr[i];
				monthArr2[i] = monthArr2[j];
				minArr[i] = minArr[j];
				monthArr2[j] = tempMonth;
				minArr[j] = tempMin;
			}
		}
	}
	cout << "The least number of planes that landed in a single day is "; 
	cout << minArr[0];
	cout << " which occured in the month of "; 
	cout << monthArr2[0] << endl;
}