#include <iostream>
#include <iomanip>

using namespace std;

void Menu()
{
	cout << setw(30) << " Wellcome!" << endl;


	cout << " _________________________________________________" << endl << endl;
	cout << " 1) Simulation with lamp" << endl;
	cout << " 2) Simulation with lamp and ammeter" << endl;
	cout << " 3) Simulation with lamp and voltmeter" << endl;
	cout << " 4) Simulation with lamp, ammeter and voltmeter" << endl;
	cout << " 5) Tests" << endl;
	cout << " _________________________________________________" << endl;

	cout << endl;

	cout << " Select your choice >> ";
}

int main()
{
	Menu();
}
