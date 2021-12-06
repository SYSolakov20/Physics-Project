#include <iostream>
#include <iomanip>
#include <string>
#include "Calculators.h"

using namespace std;



// check if a number is an integer
bool checkInput(double number)
{
	if (!number)
	{
		system("cls");
		cout << "Invalid input! Please, try again." << endl << endl;
		system("PAUSE");
	}
	else
	{
		return 1;
	}
}

// checks for division by zero
bool divideByZero(double divisor)
{
	if (divisor == 0)
	{
		system("cls");
		cout << "Division by 0" << endl << endl;
		system("PAUSE");
	}
	else
	{
		return 1;
	}
}

// prints horizontal line
void outputHorizontalLine(int counter, int length)
{
	for (int i = counter; i < length; i++)
	{
		cout << char(196);
	}
}

// prints calculator menu
void doNextCalculator()
{
	cout << "   What do you want to do now?" << endl;
	cout << "   _____________________________" << endl;
	cout << "   1) Go back" << endl;
	cout << "   2) Use our calculator again" << endl;
	cout << "   Select >> ";
}

// counts number of digits 
int findNumLength(double number)
{
	int counter = 0;

	if (number < 1)
	{
		counter = 1;
	}

	while (int(number) != 0)
	{
		number /= 10;
		counter++;
	}

	return counter;
}

// starts resistance calculator
void calculateResistance()
{
	double voltage;
	double current;

	system("cls");

	cout << " Resistance calculator" << endl;
	cout << " ________________________________________" << endl << endl;
	cout << " Electric current - I (in ampere - A)" << endl;
	cout << " Resistance - R (in ohm - ?)" << endl;
	cout << " Voltage - U (in volt - V)" << endl << endl;

	cout << " Write your voltage >> ";

	while (true)
	{
		cin >> voltage;
		if (checkInput(voltage) != 1)
		{
			cin.clear();
			calculateResistance();
		}
		else
		{
			break;
		}
	}

	cout << " Write your electric current >> ";
	cin >> current;
	if (checkInput(current) != 1 or divideByZero(current) != 1)
	{
		calculateResistance();
	}

	double resistance = voltage / current;

	displayCalculator("Resistance", 'U', voltage, 'I', current, 'R', resistance, "ohm(s)");
}

// starts electric current calculator 
void calculateElectricCurrent()
{
	double chargePassed;
	double time;

	system("cls");

	cout << " Electric current calculator" << endl;
	cout << " _________________________________________" << endl << endl;
	cout << " Electric current - I (in ampere - A)" << endl;
	cout << " Charge passed - q (in coulomb - C)" << endl;
	cout << " Time - t (in seconds - s)" << endl << endl;

	cout << " Write your charge passed >> ";
	cin >> chargePassed;
	cout << " Write your time >> ";
	cin >> time;

	if (divideByZero(time) != 1)
	{
		calculateElectricCurrent();
	}

	double current = chargePassed / time;

	displayCalculator("Electric current", 'q', chargePassed, 't', time, 'I', current, "A");
}

// starts charge passed calculator 
void calculateChargePassed()
{
	double current;
	double time;

	system("cls");

	cout << " Charge passed calculator" << endl;
	cout << " ______________________________________" << endl << endl;
	cout << " Electric current - I (in ampere - A)" << endl;
	cout << " Charge passed - q (in coulomb - C)" << endl;
	cout << " Time - t (in seconds - s)" << endl << endl;

	cout << " Write your electric current >> ";
	cin >> current;
	cout << " Write your time >> ";
	cin >> time;


	double chargePassed = current * time;

	displayCalculator("Charge passed", 'I', current, 't', time, 'q', chargePassed, "C");
}

// starts voltage calculator 
void calculateVoltage()
{
	double resistance;
	double current;

	system("cls");

	cout << " Voltage calculator" << endl;
	cout << " ______________________________________" << endl << endl;
	cout << " Electric current - I (in ampere - A)" << endl;
	cout << " Resistance - R (in ohm - ?)" << endl;
	cout << " Voltage - U (in volt - V)" << endl << endl;

	cout << " Write your resistance >> ";
	cin >> resistance;
	cout << " Write your current >> ";
	cin >> current;

	double voltage = resistance * current;

	displayCalculator("Voltage", 'R', resistance, 'I', current, 'U', voltage, "V");
}

// prints calculator 
void displayCalculator(string resultName, char firstInputSymbol, double firstInput, char secondInputSymbol, double secondInput, char resultSymbol, double result, string resultUnit)
{

	int size;
	int integer = int(result);

	int firstInputSize = findNumLength(firstInput);
	int secondInputSize = findNumLength(secondInput);
	int resultSize = findNumLength(integer);

	if (firstInputSize > secondInputSize)
	{
		size = firstInputSize;
	}
	else
	{
		size = secondInputSize;
	}

	string next;
	system("cls");
	cout << endl;
	cout << "   " << char(218); outputHorizontalLine(0, 44);
	cout << char(191) << endl;
	cout << "   " << char(179) << " " << char(218);
	outputHorizontalLine(0, 40);
	cout << char(191) << " " << char(179) << endl;
	cout << "   " << char(179) << " " << char(179) << setw(41) << char(179) << " " << char(179) << endl;
	cout << "   " << char(179) << " " << char(179) << "  " << resultName << " calculator" << setw(30 - resultName.length() - 2) << char(179) << " " << char(179) << endl;
	cout << "   " << char(179) << " " << char(179) << " " << char(218);
	outputHorizontalLine(0, 36);
	cout << char(191) << " " << char(179) << " " << char(179) << endl;
	cout << "   " << char(179) << " " << char(179) << " " << char(179) << setw(37) << char(179) << " " << char(179) << " " << char(179) << endl;

	if (resultSymbol == 'R' or resultSymbol == 'I')
	{
		cout << "   " << char(179) << " " << char(179) << " " << char(179) << setw(5) << firstInputSymbol << setw(32) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << "   " << char(179) << " " << char(179) << " " << char(179) << resultSymbol << " = " << char(196) << setw(32) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << "   " << char(179) << " " << char(179) << " " << char(179) << setw(5) << secondInputSymbol << setw(32) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << "   " << char(179) << " " << char(179) << " " << char(179) << setw(37) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << "   " << char(179) << " " << char(179) << " " << char(179) << setw(7 + firstInputSize) << setiosflags(ios::fixed) << setprecision(2) << firstInput << setw(30 - firstInputSize) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << "   " << char(179) << " " << char(179) << " " << char(179) << resultSymbol << " = ";
		outputHorizontalLine(-3, size);
		cout << setw(30 - size) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << "   " << char(179) << " " << char(179) << " " << char(179) << setw(7 + secondInputSize) << setiosflags(ios::fixed) << setprecision(2) << secondInput << setw(30 - secondInputSize) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << "   " << char(179) << " " << char(179) << " " << char(179) << setw(37) << char(179) << " " << char(179) << " " << char(179) << endl;
		if (resultSymbol == 'R')
		{
			cout << "   " << char(179) << " " << char(179) << " " << char(179) << resultSymbol << " = " << setiosflags(ios::fixed) << setprecision(2) << result << " " << resultUnit << setw(23 - resultSize) << char(179) << " " << char(179) << " " << char(179) << endl;
		}
		else
		{
			cout << "   " << char(179) << " " << char(179) << " " << char(179) << resultSymbol << " = " << setiosflags(ios::fixed) << setprecision(2) << result << " " << resultUnit << setw(28 - resultSize) << char(179) << " " << char(179) << " " << char(179) << endl;
		}

	}

	else
	{
		cout << "   " << char(179) << " " << char(179) << " " << char(179) << resultSymbol << " = " << firstInputSymbol << " * " << secondInputSymbol << setw(28) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << "   " << char(179) << " " << char(179) << " " << char(179) << setw(37) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << "   " << char(179) << " " << char(179) << " " << char(179) << resultSymbol << " = " << setiosflags(ios::fixed) << setprecision(2) << firstInput << " * " << setiosflags(ios::fixed) << setprecision(2) << secondInput << setw(24 - (firstInputSize + secondInputSize)) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << "   " << char(179) << " " << char(179) << " " << char(179) << setw(37) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << "   " << char(179) << " " << char(179) << " " << char(179) << resultSymbol << " = " << setiosflags(ios::fixed) << setprecision(2) << result << " " << resultUnit << setw(28 - resultSize) << char(179) << " " << char(179) << " " << char(179) << endl;
	}

	cout << "   " << char(179) << " " << char(179) << " " << char(179) << setw(37) << char(179) << " " << char(179) << " " << char(179) << endl;
	cout << "   " << char(179) << " " << char(179) << " " << char(192);
	outputHorizontalLine(0, 36);
	cout << char(217) << " " << char(179) << " " << char(179) << endl;
	cout << "   " << char(179) << " " << char(192);
	outputHorizontalLine(0, 40);
	cout << char(217) << " " << char(179) << endl;
	cout << "   " << char(179) << setw(40) << " ____ ____ ____ ____ ____ ____ ____ " << setw(5) << char(179) << endl;
	cout << "   " << char(179) << setw(40) << "||1 |||2 |||3 |||4 |||5 |||+ |||- ||" << setw(5) << char(179) << endl;
	cout << "   " << char(179) << setw(40) << "||__|||__|||__|||__|||__|||__|||__||" << setw(5) << char(179) << endl;
	cout << "   " << char(179) << setw(40) << "|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|" << setw(5) << char(179) << endl;
	cout << "   " << char(179) << setw(40) << " ____ ____ ____ ____ ____ ____ ____ " << setw(5) << char(179) << endl;
	cout << "   " << char(179) << setw(40) << "||6 |||7 |||8 |||9 |||0 |||* |||% ||" << setw(5) << char(179) << endl;
	cout << "   " << char(179) << setw(40) << "||__|||__|||__|||__|||__|||__|||__||" << setw(5) << char(179) << endl;
	cout << "   " << char(179) << setw(40) << "|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|" << setw(5) << char(179) << endl;
	cout << "   " << char(179) << setw(40) << " ____ __________ __________________ " << setw(5) << char(179) << endl;
	cout << "   " << char(179) << setw(40) << "||. |||Enter   |||   Backspace    ||" << setw(5) << char(179) << endl;
	cout << "   " << char(179) << setw(41) << "||__|||________|||________________|| " << setw(4) << char(179) << endl;
	cout << "   " << char(179) << setw(40) << "|/__\\|/________\\|/________________\\|" << setw(5) << char(179) << endl;
	cout << "   " << char(179) << setw(45) << char(179) << endl;
	cout << "   " << char(192);
	outputHorizontalLine(0, 44);
	cout << char(217) << endl << endl;

	doNextCalculator();
	cin >> next;

	if (next == "1")
	{
		system("cls");
	}
	else if (next == "2")
	{
		if (resultSymbol == 'R')
			calculateResistance();

		else if (resultSymbol == 'U')
			calculateVoltage();

		else if (resultSymbol == 'I')
			calculateElectricCurrent();

		else if (resultSymbol == 'q')
			calculateChargePassed();
	}
	else
	{
		displayCalculator(resultName, firstInputSymbol, firstInput, secondInputSymbol, secondInputSymbol, resultSymbol, result, resultUnit);
	}
}

// begins calculators
void startCalculators()
{
	string calculatorChoice;

	system("cls");

	cout << "     ___    __    __    ___  __  __  __      __   ____  _____  ____  ___ " << endl;
	cout << "    / __)  /__\\  (  )  / __)(  )(  )(  )    /__\\ (_  _)(  _  )(  _ \\/ __)" << endl;
	cout << "   ( (__  /(__)\\  )(__( (__  )(__)(  )(__  /(__)\\  )(   )(_)(  )   /\\__ \\" << endl;
	cout << "    \\___)(__)(__)(____)\\___)(______)(____)(__)(__)(__) (_____)(_)\\_)(___/" << endl;
	cout << " __________________________________________________________________________" << endl << endl;
	cout << "  1) Electric current" << endl;
	cout << "  2) Charge passed" << endl;
	cout << "  3) Resistance" << endl;
	cout << "  4) Voltage" << endl;
	cout << "  5) Back" << endl;
	cout << " ___________________________________________________________________________" << endl << endl;
	cout << "  Select >> ";
	cin >> calculatorChoice;

	if (calculatorChoice == "1")
	{
		calculateElectricCurrent();
		startCalculators();
	}
	else if (calculatorChoice == "2")
	{
		calculateChargePassed();
		startCalculators();
	}
	else if (calculatorChoice == "3")
	{
		calculateResistance();
		startCalculators();
	}
	else if (calculatorChoice == "4")
	{
		calculateVoltage();
		startCalculators();
	}
	else if (calculatorChoice == "5")
	{
		system("cls");
	}
	else
	{
		startCalculators();
	}
}