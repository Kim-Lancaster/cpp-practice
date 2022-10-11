#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int InputData(string[], int[]);
void DisplayPlayerData(string[], int[], int);
float CaculateAverageScore(int[], int);
void DisplayAboveAverage(string[], int[], float, int);

int main()
{
	string PlayerName[10];
	int Scores[10];
	int amount;
	float average;
	cout << "Student Name	Kimberly Lancaster" << endl;
	cout << endl;

	amount = InputData(PlayerName, Scores);

	cout << setw(6) << "Name" << setw(9) << "Score" << endl;
	DisplayPlayerData(PlayerName, Scores, amount);
	average = CaculateAverageScore(Scores, amount);
	cout << endl;

	cout << "Average Score: " << average << endl;
	cout << endl;

	cout << "Player who scored about average" << endl;
	cout << setw(6) << "Name" << setw(9) << "Score" << endl;
	DisplayAboveAverage(PlayerName, Scores, average, amount);

	cin.ignore();
	cin.get();

	return 0;
}

int InputData(string names[], int scores[])
{
	int amount = 0;

	for (int i = 0; i < 9; i++)
	{
		cout << "Enter Player Name (Q to quit): ";
		cin >> names[i];

		if ((names[i] == "Q" )|| (names[i] == "q"))
		{
			cout << endl;
			break;
		}
		else
		{
			cout << "Enter score for " << names[i] << ": ";
			cin >> scores[i];
		}
		
		amount++;
	}
	return amount;

}

void DisplayPlayerData(string names[], int scores[], int amount)
{
	for (int i = 0; i < amount; i++)
	{
		cout << names[i] << "	    " << scores[i] << endl;

	}
}

float CaculateAverageScore(int scores[], int amount)
{
	float average = 0.00;
	for (int i = 0; i < amount; i++)
	{
		average += scores[i];
	}
	average = average / amount;
	return average;
}

void DisplayAboveAverage(string names[], int scores[], float average, int amount)
{
	for (int i = 0; i < amount; i++)
	{
		if (scores[i] <= average)
		{
			continue;
		}
		else
		{
			cout << names[i] << "	    " << scores[i] << endl;
		}
	}

}