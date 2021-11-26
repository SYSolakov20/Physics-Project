#include <iostream>
#include <iomanip>
#include "Simulations.h"
#include "Calculators.h"



using namespace std;

void Menu()
{
	cout << setw(30) << " Wellcome!" << endl;
	cout << " _________________________________________________" << endl << endl;
	cout << " 1) Simulations" << endl;
	cout << " 2) Calculators" << endl;
	cout << " 3) Tests" << endl;
	cout << " 4) Exit" << endl;
	cout << " _________________________________________________" << endl;
	cout << endl;
	cout << " Select your choice >> ";
}



void startProgram()
{
	int activity;

start:
	{
		system("cls");
		Menu();
		cin >> activity;
	}

	if (activity == 1)
	{
		startSimulations();
		goto start;
	}
	else if (activity == 2)
	{
		startCalculators();
		goto start;
	}
	else if (activity == 4)
	{
		system("cls");
		cout << "Bye!";
	}
}

int main()
{
	startProgram();
}