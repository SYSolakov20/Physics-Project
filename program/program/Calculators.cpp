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

int findNumLength(double number)
{
	int counter = 0;

	while (number != int(number))
	{
		number = number * 10;
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
	float voltage, current, resistance;
	int next;
	int sizeVoltage, sizeCurrent, sizeResistance;
	int longerSize;

	system("cls");

	cout << "Resistance calculator" << endl << endl;
	cout << "Electric current - I (in ampere - A)" << endl;
	cout << "Resistance - R (in ohm - ?)" << endl;
	cout << "Voltage - U (in volt - V)" << endl << endl;

	cout << "Write your voltage >> ";
	cin >> voltage;
	cout << "Write your current >> ";
	cin >> current;

	resistance = voltage / current;

	sizeVoltage = findNumLength(voltage);
	sizeCurrent = findNumLength(current);
	sizeResistance = findNumLength(resistance);

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
		cout << char(179) << " " << char(179) << " " << char(179) << setw(4 + sizeVoltage) << voltage << setw(46 - sizeVoltage) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << "R = ";
		for (int i = 0; i < longerSize; i++)
		{
			cout << char(196);
		}
		cout << setw(46 - longerSize) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(4 + sizeCurrent) << current << setw(46 - sizeCurrent) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << setw(50) << char(179) << " " << char(179) << " " << char(179) << endl;
		cout << char(179) << " " << char(179) << " " << char(179) << "R = " << resistance << setw(46 - sizeResistance) << char(179) << " " << char(179) << " " << char(179) << endl;
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
	float chargePassed, time;
	int next;

	system("cls");

	cout << "Electric current calculator" << endl << endl;
	cout << "Electric current - I (in ampere - A)" << endl;
	cout << "Charge passed - q (in coulomb - C)" << endl;
	cout << "Time - t (in seconds - s)" << endl << endl;

	cout << "Write your charge passed >> ";
	cin >> chargePassed;
	cout << "Write your time >> ";
	cin >> time;

	wrongInput:
	{
		system("cls");

		cout << "Electric current calculator" << endl << endl;
		cout << "Electric current - I (in ampere - A)" << endl;
		cout << "Charge passed - q (in coulomb - C)" << endl;
		cout << "Time - t (in seconds - s)" << endl << endl;

		cout << "Write your charge passed >> " << chargePassed << endl;
		cout << "Write your time >> " << time << endl << endl;

		cout << setw(5) << "q" << endl;
		cout << "I = " << char(196) << endl;
		cout << setw(5) << "t" << endl << endl;

		cout << "Your electric current is " << chargePassed / time << "A" << endl << endl;

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
	float electricCurrent, time;
	int next;

	system("cls");

	cout << "Charge passed calculator" << endl << endl;
	cout << "Electric current - I (in ampere - A)" << endl;
	cout << "Charge passed - q (in coulomb - C)" << endl;
	cout << "Time - t (in seconds - s)" << endl << endl;

	cout << "Write your electric current >> ";
	cin >> electricCurrent;
	cout << "Write your time >> ";
	cin >> time;

	wrongInput:
	{
		system("cls");

		cout << "Charge passed calculator" << endl << endl;
		cout << "Electric current - I (in ampere - A)" << endl;
		cout << "Charge passed - q (in coulomb - C)" << endl;
		cout << "Time - t (in seconds - s)" << endl << endl;

		cout << "Write your electric current >> " << electricCurrent << endl;
		cout << "Write your time >> " << time << endl;

		cout << endl << "q = I * t" << endl << endl;
		cout << "Your charge passed is " << electricCurrent * time << "C" << endl << endl;

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
	float resistance, current;
	int next;

	system("cls");

	cout << "Voltage calculator" << endl << endl;
	cout << "Electric current - I (in ampere - A)" << endl;
	cout << "Resistance - R (in ohm - ?)" << endl;
	cout << "Voltage - U (in volt - V)" << endl << endl;

	cout << "Write your resistance >> ";
	cin >> resistance;
	cout << "Write your current >> ";
	cin >> current;

	wrongInput:
	{
		system("cls");

		cout << "Voltage calculator" << endl << endl;
		cout << "Electric current - I (in ampere - A)" << endl;
		cout << "Resistance - R (in ohm - ?)" << endl;
		cout << "Voltage - U (in volt - V)" << endl << endl;

		cout << "Write your resistance >> " << resistance;
		cout << "Write your current >> " << current;

		cout << endl << "U = R * I" << endl << endl;
		cout << "Your voltage is " << resistance * current << "V" << endl << endl;

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