#include <iostream>
#include <iomanip>

using namespace std;

void doNextCalculator()
{
	cout << " What do you want to do now?" << endl;
	cout << " _____________________________" << endl;
	cout << " 1) Go back" << endl;
	cout << " 2) Use our calculator again" << endl;
	cout << " Select >> ";
}

void electricCurrent()
{
	system("cls");

	float chargePassed, time;
	int next;

	while (true)
	{
		system("cls");

		cout << "Electric current calculator" << endl << endl;

		cout << "Electric current - I (in ampere - A)" << endl;
		cout << "Charge passed - q (in coulomb - C)" << endl;
		cout << "Time - t (in seconds - s)" << endl << endl;

		cout << "Write your charge passed >> ";
		cin >> chargePassed;
		cout << "Write your time >> ";
		cin >> time;

		cout << setw(5) << "q" << endl;
		cout << "I = " << char(196) << endl;
		cout << setw(5) << "t" << endl << endl;

		cout << "Your electric current is " << chargePassed / time << "A" << endl << endl;

		doNextCalculator();

		cin >> next;

		if (next == 1)
		{
			break;
		}
		else if (next == 2)
		{
			continue;
		}
	}
}

void startCalculators()
{
	while (true)
	{
		int calculatorChoise;
		
		system("cls");

		cout << setw(34) << "What do you want to calculate?" << endl;
		cout << " ______________________________________" << endl << endl;
		cout << " 1) Electric current" << endl;
		cout << " 2) Charge passed" << endl;
		cout << " 3) Resistance" << endl;
		cout << " 4) Voltage" << endl;
		cout << " 5) Back" << endl;
		cout << " _______________________________________" << endl << endl;
		cout << " Select >> ";
		cin >> calculatorChoise;

		if (calculatorChoise == 1)
		{
			electricCurrent();
		}
		else if (calculatorChoise == 2)
		{
			
		}
		else if (calculatorChoise == 3)
		{
			
		}
		else if (calculatorChoise == 4)
		{
			
		}
		else if (calculatorChoise == 5)
		{
			break;
		}
	}
	
}