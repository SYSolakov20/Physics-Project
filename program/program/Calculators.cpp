#include <iostream>
#include <iomanip>
#include "Calculators.h"

using namespace std;

void startCalculators()
{
calculatorsMenu:
	{
		int calculatorsChoise;
		system("cls");

		cout << setw(34) << "What do you want to calculate?" << endl;
		cout << " ______________________________________" << endl;
		cout << " 1) Electric current" << endl;
		cout << " 2) Charge passed" << endl;
		cout << " 3) Resistance" << endl;
		cout << " 4) Voltage" << endl;
		cout << " 5) Back" << endl;
		cout << " _______________________________________" << endl << endl;
		cout << " Select >> ";
		cin >> calculatorsChoise;

		if (calculatorsChoise == 1)
		{
			system("cls");
			electricCurrent();
			goto calculatorsMenu;
		}
		else if (calculatorsChoise == 5)
		{
			system("cls");
		}
	}
}

void electricCurrent()
{
	float chargePassed, time;
	int next;

startCalculator:
	{
		system("cls");
		cout << "Electric current - I (in ampere - A)" << endl;
		cout << "Charge passed - q (in coulomb - C)" << endl;
		cout << "Time - t (in seconds - s)" << endl << endl;

		cout << "Write your charge passed >> ";
		cin >> chargePassed;
		cout << "Write your time >> ";
		cin >> time;

		cout << setw(5) << "q" << endl;
		cout << "I = " << char(196) << endl;
		cout << setw(5) << "t" << endl;

		cout << "Your electric current is " << chargePassed / time << "A" << endl << endl;

		cout << " What do you want to do now?" << endl;
		cout << " _____________________________" << endl;
		cout << " 1) Go back" << endl;
		cout << " 2) Use our calculator again" << endl;
		cout << " Select >> ";
		cin >> next;

		if (next == 1)
		{
			system("cls");
			startCalculators();
		}
		else if (next == 2)
		{
			goto startCalculator;
		}
	}
}