#include <iostream>
#include <iomanip>
#include "Calculators.h"

using namespace std;

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
	int next;
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

wrongInput:
	{
		system("cls");

		cout << char(218);
		for (int i = 0; i < 57; i++)
		{
			cout << char(196);
		}
		cout << char(191) << endl;
		cout << char(179) << " " << char(218);
		for (int i = 0; i < 53; i++)
		{
			cout << char(196);
		}
		cout << char(191) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << setw(54) << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << "  Resistance calculator" << setw(31) << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(218);
		for (int i = 0; i < 49; i++)
		{
			cout << char(196);
		}
		cout << char(191) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(50) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(5) << "U" << setw(45) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << "R = " << char(196) << setw(45) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(5) << "I" << setw(45) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(50) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(7 + sizeVoltage) << setiosflags(ios::fixed) << setprecision(2) << voltage << setw(43 - sizeVoltage) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << "R = ";
		for (int i = -2; i < longerSize; i++)
		{
			cout << char(196);
		}
		cout << setw(44 - longerSize) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(7 + sizeCurrent) << setiosflags(ios::fixed) << setprecision(2) << current << setw(43 - sizeCurrent) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(50) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << "R = " << setiosflags(ios::fixed) << setprecision(2) << resistance << "A" << setw(42 - sizeResistance) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(192);
		for (int i = 0; i < 49; i++)
		{
			cout << char(196);
		}
		cout << char(217) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(192);
		for (int i = 0; i < 53; i++)
		{
			cout << char(196);
		}
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
		for (int i = 0; i < 57; i++)
		{
			cout << char(196);
		}
		cout << char(217) << endl << endl;

		doNextCalculator();
		cin >> next;

		if (next == 1)
		{
			system("cls");
		}
		else if (next == 2)
		{
			calculateResistance();
		}
		else
		{
			goto wrongInput;
		}
	}
}

void calculateElectricCurrent()
{
	int next;
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

wrongInput:
	{
		system("cls");

		cout << char(218);
		for (int i = 0; i < 57; i++)
		{
			cout << char(196);
		}
		cout << char(191) << endl;
		cout << char(179) << " " << char(218);
		for (int i = 0; i < 53; i++)
		{
			cout << char(196);
		}
		cout << char(191) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << setw(54) << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << "  Electric current calculator" << setw(25) << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(218);
		for (int i = 0; i < 49; i++)
		{
			cout << char(196);
		}
		cout << char(191) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(50) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(5) << "q" << setw(45) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << "I = " << char(196) << setw(45) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(5) << "t" << setw(45) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(50) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(7 + sizeChargePassed) << setiosflags(ios::fixed) << setprecision(2) << chargePassed << setw(43 - sizeChargePassed) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << "I = ";
		for (int i = -2; i < longerSize; i++)
		{
			cout << char(196);
		}
		cout << setw(44 - longerSize) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(7 + sizeTime) << setiosflags(ios::fixed) << setprecision(2) << time << setw(43 - sizeTime) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(50) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << "I = " << setiosflags(ios::fixed) << setprecision(2) << current << "A" << setw(42 - sizeCurrent) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(192);
		for (int i = 0; i < 49; i++)
		{
			cout << char(196);
		}
		cout << char(217) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(192);
		for (int i = 0; i < 53; i++)
		{
			cout << char(196);
		}
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
		for (int i = 0; i < 57; i++)
		{
			cout << char(196);
		}
		cout << char(217) << endl << endl;

		doNextCalculator();
		cin >> next;

		if (next == 1)
		{
			system("cls");
		}
		else if (next == 2)
		{
			calculateElectricCurrent();
		}
		else
		{
			goto wrongInput;
		}
	}
		
}

void calculateChargePassed()
{
	int next;
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

wrongInput:
	{
		system("cls");

		cout << char(218);
		for (int i = 0; i < 57; i++)
		{
			cout << char(196);
		}
		cout << char(191) << endl;
		cout << char(179) << " " << char(218);
		for (int i = 0; i < 53; i++)
		{
			cout << char(196);
		}
		cout << char(191) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << setw(54) << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << "  Charge passed calculator" << setw(28) << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(218);
		for (int i = 0; i < 49; i++)
		{
			cout << char(196);
		}
		cout << char(191) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(50) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << "q = I * t " << setw(40) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(50) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << "q = " << setiosflags(ios::fixed) << setprecision(2) << current << " * " << setiosflags(ios::fixed) << setprecision(2) << time << setw(37 - (sizeCurrent + sizeTime)) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(50) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << "q = " << setiosflags(ios::fixed) << setprecision(2) << chargePassed << "C" << setw(42 - sizeChargePassed) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(50) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(192);
		for (int i = 0; i < 49; i++)
		{
			cout << char(196);
		}
		cout << char(217) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(192);
		for (int i = 0; i < 53; i++)
		{
			cout << char(196);
		}
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
		for (int i = 0; i < 57; i++)
		{
			cout << char(196);
		}
		cout << char(217) << endl;

		doNextCalculator();
		cin >> next;

		if (next == 1)
		{
			system("cls");
		}
		else if (next == 2)
		{
			calculateChargePassed();
		}
		else
		{
			goto wrongInput;
		}
	}
}

void calculateVoltage()
{
	int next;
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

wrongInput:
	{
		system("cls");

		cout << char(218);
		for (int i = 0; i < 57; i++)
		{
			cout << char(196);
		}
		cout << char(191) << endl;
		cout << char(179) << " " << char(218);
		for (int i = 0; i < 53; i++)
		{
			cout << char(196);
		}
		cout << char(191) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << setw(54) << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << "  Voltage calculator" << setw(34) << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(218);
		for (int i = 0; i < 49; i++)
		{
			cout << char(196);
		}
		cout << char(191) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(50) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << "U = I * R " << setw(40) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(50) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << "U = " << setiosflags(ios::fixed) << setprecision(2) << resistance << " * " << setiosflags(ios::fixed) << setprecision(2) << current << setw(37 - (sizeResistance + sizeCurrent)) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(50) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << "U = " << setiosflags(ios::fixed) << setprecision(2) << voltage << "V" << setw(42 - sizeVoltage) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(50) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(192);
		for (int i = 0; i < 49; i++)
		{
			cout << char(196);
		}
		cout << char(217) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(192);
		for (int i = 0; i < 53; i++)
		{
			cout << char(196);
		}
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
		for (int i = 0; i < 57; i++)
		{
			cout << char(196);
		}
		cout << char(217) << endl << endl;


		doNextCalculator();
		cin >> next;

		if (next == 1)
		{
			system("cls");
		}
		else if (next == 2)
		{
			calculateVoltage();
		}
		else
		{
			goto wrongInput;
		}
	}
}

void startCalculators()
{
	int calculatorChoise;

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
	cin >> calculatorChoise;

	if (calculatorChoise == 1)
	{
		calculateElectricCurrent();
		startCalculators();
	}
	else if (calculatorChoise == 2)
	{
		calculateChargePassed();
		startCalculators();
	}
	else if (calculatorChoise == 3)
	{
		calculateResistance();
		startCalculators();
	}
	else if (calculatorChoise == 4)
	{
		calculateVoltage();
		startCalculators();
	}
	else if (calculatorChoise == 5)
	{
		system("cls");
	}
	else
	{
		startCalculators();
	}
	
}