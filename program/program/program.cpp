#include <iostream>
#include <iomanip>
#include "Simulations.h"
#include "Calculators.h"
#include "Test.h"
#include "CreateSimulation.h"

using namespace std;

void printMenu()
{
	cout << setw(30) << " Wellcome!" << endl;
	cout << " _________________________________________________" << endl << endl;
	cout << " 1) Simulations" << endl;
	cout << " 2) Calculators" << endl;
	cout << " 3) Test" << endl;
	cout << " 4) Create your own simulation" << endl;
	cout << " 5) Exit" << endl;
	cout << " _________________________________________________" << endl << endl;
	cout << " Select your choice >> ";
}

void startProgram()
{
	int activity;

	system("cls");
	printMenu();
	cin >> activity;

	if (activity == 1)
	{
		startSimulations();
		startProgram();
	}
	else if (activity == 2)
	{
		startCalculators();
		startProgram();
	}
	else if (activity == 3)
	{
		startTest();
		startProgram();
	}
	else if (activity == 4)
	{
		startCreatingSimulation();
		startProgram();
	}
	else if (activity == 5)
	{
		system("cls");
		cout << "Bye!";
	}
	else
	{
		startProgram();
	}
}

int main()
{
	startProgram();
}