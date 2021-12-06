#include <iostream>
#include <iomanip>
#include "Simulations.h"
#include "Calculators.h"
#include "Test.h"
#include "CreateSimulation.h"

using namespace std;

// displays main menu
void printMenu()
{
	cout << "   _    _  ____  __    ___  _____  __  __  ____ " << endl;
	cout << "  ( \\/\\/ )( ___)(  )  / __)(  _  )(  \\/  )( ___)" << endl;
	cout << "   )    (  )__)  )(__( (__  )(_)(  )    (  )__)" << endl;
	cout << "  (__/\\__)(____)(____)\\___)(_____)(_/\\/\\_)(____)" << endl;
	cout << " _________________________________________________" << endl << endl;
	cout << "  1) Simulations" << endl;
	cout << "  2) Calculators" << endl;
	cout << "  3) Test" << endl;
	cout << "  4) Create your own simulation" << endl;
	cout << "  5) Exit" << endl;
	cout << " _________________________________________________" << endl << endl;
	cout << "  Select your choice >> ";

}

// begins the program
void startProgram()
{
	string activity;

	system("cls");
	printMenu();
	cin >> activity;

	if (activity == "1")
	{
		startSimulations();
		startProgram();
	}
	else if (activity == "2")
	{
		startCalculators();
		startProgram();
	}
	else if (activity == "3")
	{
		startTest();
		startProgram();
	}
	else if (activity == "4")
	{
		startCreatingSimulation();
		startProgram();
	}
	else if (activity == "5")
	{
		system("cls");
		cout << " ____  _  _  ____ " << endl;
		cout << "(  _ \\( \\/ )( ___)" << endl;
		cout << " ) _ < \\  /  )__) " << endl;
		cout << "(____/ (__) (____)" << endl;
	}
	else
	{
		startProgram();
	}
}

// main function
int main()
{
	startProgram();
}