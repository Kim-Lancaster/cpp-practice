#include <iostream>
#include <string>

using namespace std;

class TOYOTA
{
private: //makes everything in private only avalible to its own class, not it's children, have to use getters and setters in child
	string vin;
protected: // can be seen by the child but is protected from main
	void OnOFF() {}
};

class Rav4 : public TOYOTA
{
public:
	int AWD = 0;

};

int main()
{
	Rav4 R;
	R.AWD;

}