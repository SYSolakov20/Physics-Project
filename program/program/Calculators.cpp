#include <iostream>
#include <iomanip>
#include "Calculators.h"

using namespace std;

void outputHorizontalLine(int counter, int number)
{
	for (int i = counter; i < number; i++)
	{
		cout << char(196);
	}
}

void doNextCalculator()
{
	cout << " What do you want to do now?" << endl;
	cout << " _____________________________" << endl;
	cout << " 1) Go back" << endl;
	cout << " 2) Use our calculator again" << endl;
	cout << " Select >> ";
}

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
	cin >> voltage;
	cout << " Write your electric current >> ";
	cin >> current;


	double resistance = voltage / current;

	int sizeVoltage = findNumLength(voltage);
	int sizeCurrent = findNumLength(current);
	int sizeResistance = findNumLength(resistance);


	int longerSize;

	if (sizeVoltage > sizeCurrent)
	{
		longerSize = sizeVoltage;
	}
	else
	{
		longerSize = sizeCurrent;
	}
	displayCalculator("Resistance", 'U', voltage, 'I', current, 'R', resistance, '?', longerSize, sizeVoltage, sizeCurrent, sizeResistance);

			//quotientName, dividendSymbol, dividend, divisorSymbol, divisor, quotientSymbol, quotient, quotientUnit, size, dividendSize, divisorSize, quotientSize

}

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

	double current = chargePassed / time;

	int sizeChargePassed = findNumLength(chargePassed);
	int sizeTime = findNumLength(time);
	int sizeCurrent = findNumLength(current);

	int longerSize;

	if (sizeChargePassed > sizeTime)
	{
		longerSize = sizeChargePassed;
	}
	else
	{
		longerSize = sizeTime;
	}

	displayCalculator("Electric current", 'q', chargePassed, 't', time, 'I', current, 'A', longerSize, sizeChargePassed, sizeTime, sizeCurrent);
}

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
	int integer = int(chargePassed);

	int sizeCurrent = findNumLength(current);
	int sizeTime = findNumLength(time);
	int sizeChargePassed = findNumLength(integer);

	int longerSize;

	if (sizeCurrent > sizeTime)
	{
		longerSize = sizeCurrent;
	}
	else
	{
		longerSize = sizeTime;
	}

	displayCalculator("Charge passed", 'I', current, 't', time, 'q', chargePassed, 'C', longerSize, sizeCurrent, sizeTime, sizeChargePassed);
}

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
	int integer = int(voltage);

	int sizeResistance = findNumLength(resistance);
	int sizeCurrent = findNumLength(current);
	int sizeVoltage = findNumLength(integer);

	int longerSize;

	if (sizeResistance > sizeCurrent)
	{
		longerSize = sizeResistance;
	}
	else
	{
		longerSize = sizeCurrent;
	}

	displayCalculator("Voltage", 'R', resistance, 'I', current, 'U', voltage, 'V', longerSize, sizeResistance, sizeCurrent, sizeVoltage);
}

void displayCalculator(string resultName, char firstInputSymbol, double firstInput, char secondInputSymbol, double secondInput, char resultSymbol, double result, char resultUnit, int size, int firstInputSize, int secondInputSize, int resultSize)
{
	string next;
	system("cls");

	cout << char(218);
	outputHorizontalLine(0, 57);
	cout << char(191) << endl;
	cout << char(179) << " " << char(218);
	outputHorizontalLine(0, 53);
	cout << char(191) << " " << char(179) << endl;
	cout << char(179) << " " << char(179) << setw(54) << char(179) << " " << char(179) << endl;
	cout << char(179) << " " << char(179) << "  " << resultName << " calculator" << setw(43 - resultName.length() - 2) << char(179) << " " << char(179) << endl;
	cout << char(179) << " " << char(179) << " " << char(218);
	outputHorizontalLine(0, 49);
	cout << char(191) << " " << char(179) << " " << char(179) << endl;
	cout << char(179) << " " << char(179) << " " << char(179) << setw(50) << char(179) << " " << char(179) << " " << char(179) << endl;

	if (resultSymbol == 'R' or resultSymbol == 'I')
	{
		cout << char(179) << " " << char(179) << " " << char(179) << setw(5) << firstInputSymbol << setw(45) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << resultSymbol << " = " << char(196) << setw(45) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(5) << secondInputSymbol << setw(45) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(50) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(7 + firstInputSize) << setiosflags(ios::fixed) << setprecision(2) << firstInput << setw(43 - firstInputSize) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << resultSymbol << " = ";
		outputHorizontalLine(-3, size);
		cout << setw(43 - size) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(7 + secondInputSize) << setiosflags(ios::fixed) << setprecision(2) << secondInput << setw(43 - secondInputSize) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(50) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << resultSymbol << " = " << setiosflags(ios::fixed) << setprecision(2) << result << " " << resultUnit << setw(41 - resultSize) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(192);
	}

	else
	{
		cout << char(179) << " " << char(179) << " " << char(179) << resultSymbol << " = " << firstInputSymbol << " * " << secondInputSymbol << setw(41) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(50) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << resultSymbol << " = " << setiosflags(ios::fixed) << setprecision(2) << firstInput << " * " << setiosflags(ios::fixed) << setprecision(2) << secondInput << setw(37 - (firstInputSize + secondInputSize)) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(50) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << resultSymbol << " = " << setiosflags(ios::fixed) << setprecision(2) << result << " " << resultUnit << setw(41 - resultSize) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(50) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(192);
	}
	outputHorizontalLine(0, 49);
	cout << char(217) << " " << char(179) << " " << char(179) << endl;
	cout << char(179) << " " << char(192);
	outputHorizontalLine(0, 53);
	cout << char(217) << " " << char(179) << endl;
	cout << char(179) << setw(45) << " ____ ____ ____ ____ ____ ____ ____ " << setw(13) << char(179) << endl;
	cout << char(179) << setw(45) << "||1 |||2 |||3 |||4 |||5 |||+ |||- ||" << setw(13) << char(179) << endl;
	cout << char(179) << setw(45) << "||__|||__|||__|||__|||__|||__|||__||" << setw(13) << char(179) << endl;
	cout << char(179) << setw(45) << "|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|" << setw(13) << char(179) << endl;
	cout << char(179) << setw(45) << " ____ ____ ____ ____ ____ ____ ____ " << setw(13) << char(179) << endl;
	cout << char(179) << setw(45) << "||6 |||7 |||8 |||9 |||0 |||* |||% ||" << setw(13) << char(179) << endl;
	cout << char(179) << setw(45) << "||__|||__|||__|||__|||__|||__|||__||" << setw(13) << char(179) << endl;
	cout << char(179) << setw(45) << "|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|" << setw(13) << char(179) << endl;
	cout << char(179) << setw(45) << " ____ __________ __________________ " << setw(13) << char(179) << endl;
	cout << char(179) << setw(45) << "||. |||Enter   |||   Backspace    ||" << setw(13) << char(179) << endl;
	cout << char(179) << setw(46) << "||__|||________|||________________|| " << setw(12) << char(179) << endl;
	cout << char(179) << setw(45) << "|/__\\|/________\\|/________________\\|" << setw(13) << char(179) << endl;
	cout << char(179) << setw(58) << char(179) << endl;
	cout << char(192);
	outputHorizontalLine(0, 57);
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
		displayCalculator(resultName, firstInputSymbol, firstInput, secondInputSymbol, secondInputSymbol, resultSymbol, result, resultUnit, size, firstInputSize, secondInputSize, resultSize);
	}
}

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