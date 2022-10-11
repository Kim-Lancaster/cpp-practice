#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream dataFile("info.dat", ios::out | ios::binary);
	struct Data
	{
		int month;
		int day;
		int year;
	};
	Data dt = { 4, 2, 98 };
	dataFile.write(reinterpret_cast<char *>(&dt), sizeof(dt));

	return 0;
}