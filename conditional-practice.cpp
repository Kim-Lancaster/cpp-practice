#include <iostream>
using namespace std;

int toDigit(char&);
int readDials(char&, char&, char&, char&, char&, char&, char&, char&);
void AcknowledgeCall(char&, char&, char&, char&, char&, char&, char&, char&);

int main()
{

	char digit1, digit2, digit3, digit4;
	char digit5, digit6, digit7, digit8;
	int value;
	cout << "Student name: Kimberly Lancaster" << endl;
	cout << "Enter a phone number (Q to quit): ";
	cin >> digit1;
	if (digit1 == 'Q')
	{
		cin.ignore();
		cin.get();
		return 0;
	}
	else
	{
		cin >> digit2;
		cin >> digit3;
		cin >> digit4;
		cin >> digit5;
		cin >> digit6;
		cin >> digit7;
		cin >> digit8;
	}

	value = readDials(digit1, digit2, digit3, digit4, digit5, digit6, digit7, digit8);
	switch (value)
	{
	case -1:
		cout << "ERROR - An invalid character was entered.";
		break;
	case -2:
		cout << "ERROR - Phone number cannot begin with 0.";
		break;
	case -3:
		cout << "ERROR - Phone number cannot begin with 555.";
		break;
	case -4:
		cout << "ERROR - Hyphen is not in the correct position.";
		break;
	default:
		cout << "Phone Number Dialed: ";
		AcknowledgeCall(digit1, digit2, digit3, digit4, digit5, digit6, digit7, digit8);
	}

	cin.ignore();
	cin.get();
	return 0;
}

int readDials(char& input1, char& input2, char& input3, char& input4, char& input5, char& input6, char& input7, char& input8)
{
	int value;
	value = toDigit(input1);
	if ((value == 0))
	{
		value = toDigit(input2);
		if ((value == 0))
		{
			value = toDigit(input3);
			if ((value == 0))
			{
				value = toDigit(input4);
				if (value == 0)
				{
					value = toDigit(input5);
					if ((value == 0))
					{
						value = toDigit(input6);
						if ((value == 0))
						{
							value = toDigit(input7);
							if ((value == 0))
							{
								value = toDigit(input8);
								if ((value == 0))
								{
									value = 0;
								}
								else
								{
									value = -1;
								}
							}
							else
							{
								value = -1;
							}
						}
						else
						{
							value = -1;
						}
					}
					else
					{
						value == -1;
					}
				}
				else
				{
					value = -1;
				}
			}
			else
			{
				value = -1;
			}
		}
		else
		{
			value = -1;
		}
	}
	else
	{
		value = -1;
	}
	if (value == -1)
	{
		value = -1;
	}
	else if (input1 == '0')
	{
		value = -2;
	}
	else if ((input1 == '5') && (input2 == '5') && (input3 == '5'))
	{
		value = -3;
	}
	else if (input4 != '-')
	{
		value = -4;
	}
	else
	{
		value = 0;
	}
	return value;
}

int toDigit(char& input)
{
	int value;
	input = toupper(input);
	if ((input == '0') || (input == '1') || (input == '2') || (input == '3') || (input == '4') || (input == '5') || (input == '6') || (input == '7') || (input == '8') || (input == '9'))
	{
		value = 0;
	}
	else if ((input == 'A') || (input == 'B') || (input == 'C'))
	{
		input = '2';
		value = 0;
	}
	else if ((input == 'D') || (input == 'E') || (input == 'F'))
	{
		input = '3';
		value = 0;
	}
	else if ((input == 'G') || (input == 'H') || (input == 'I'))
	{
		input = '4';
		value = 0;
	}
	else if ((input == 'J') || (input == 'K') || (input == 'L'))
	{
		input = '5';
		value = 0;
	}
	else if ((input == 'M') || (input == 'N') || (input == 'O'))
	{
		input = '6';
		value = 0;
	}
	else if ((input == 'P') || (input == 'Q') || (input == 'R') || (input == 'S'))
	{
		input = '7';
		value = 0;
	}
	else if ((input == 'T') || (input == 'U') || (input == 'V'))
	{
		input = '8';
		value = 0;
	}
	else if ((input == 'W') || (input == 'X') || (input == 'Y') || (input == 'Z'))
	{
		input = '9';
		value = 0;
	}
	else if (input == '-')
	{
		input = '-';
		value = 0;
	}
	else
	{
		value = -1;
	}
	return value;
}

void AcknowledgeCall(char& input1, char& input2, char& input3, char& input4, char& input5, char& input6, char& input7, char& input8)
{

	cout << input1 << input2 << input3 << input4 << input5 << input6 << input7 << input8;
}
