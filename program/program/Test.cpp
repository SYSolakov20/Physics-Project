#include <iostream>
#include <iomanip>
#include "Test.h"

using namespace std;

void questionOne()
{
	cout << "What do you measure with ammeter?" << endl;
	cout << "a) electric current" << endl;
	cout << "b) resistance" << endl;
	cout << "c) voltage" << endl;
}

void questionTwo()
{
	cout << "What do you measure with voltmeter?" << endl;
	cout << "a) electric current" << endl;
	cout << "b) resistance" << endl;
	cout << "c) voltage" << endl;
}

void questionThree()
{
	cout << "What do you measure with resistor?" << endl;
	cout << "a) electric current" << endl;
	cout << "b) resistance" << endl;
	cout << "c) voltage" << endl;
}

void questionFour()
{
	cout << " " << char(201);
	for (int i = 0; i < 14; i++)
	{
		cout << char(205);
	}
	cout << " +| |- ";
	for (int i = 0; i < 14; i++)
	{
		cout << char(205);
	}
	cout << char(187) << endl;
	cout << " " << char(186) << setw(36) << char(186) << endl;
	cout << " " << char(186) << setw(36) << char(186) << endl;
	cout << " " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
	cout << " " << char(186) << setw(44) << BOLDYELLOW << char(186) << RESET << setw(7) << char(186) << endl;
	cout << " | " << setw(37) << YELLOW << "( 1 )" << RESET << "  ( 2 )" << endl;
	cout << " " << char(186) << setw(44) << BOLDYELLOW << char(186) << RESET << setw(7) << char(186) << endl;
	cout << " " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
	cout << " " << char(186) << setw(36) << char(186) << endl;
	cout << " " << char(186) << setw(36) << char(186) << endl;
	cout << " " << char(200);
	for (int i = 0; i < 15; i++)
	{
		cout << char(205);
	}
	cout << "( 3 )";
	for (int i = 0; i < 15; i++)
	{
		cout << char(205);
	}
	cout << char(188) << endl << endl;

	cout << "a) 1-ammeter, 2-voltmeter, 3-lamp" << endl;
	cout << "b) 1-voltmeter, 2-ammeter, 3-lamp" << endl;
	cout << "c) 1-lamp, 2-voltmeter, 3-ammeter" << endl;
}

void questionFive()
{
	cout << setw(5) << "q" << endl;
	cout << "I = " << char(196) << " is a formula for finding electric current" << endl;
	cout << setw(5) << "t" << endl << endl;

	cout << "a) True" << endl;
	cout << "b) False" << endl;
}

void questionSix()
{
	cout << "q = I * R" << endl;

	cout << "a) True" << endl;
	cout << "b) False" << endl;
}

void questionSeven()
{
	cout << "U = R * I" << endl << endl;

	cout << "a) True" << endl;
	cout << "b) False" << endl;
}

void questionEight()
{
	cout << "In what unit of measurement is the electric current measured?" << endl;

	cout << "a) A - ampere" << endl;
	cout << "b) V - volt" << endl;
	cout << "c) C - coulomb" << endl;
}

void questionNine()
{
	cout << "In what unit of measurement is the voltage measured?" << endl;

	cout << "a) A - ampere" << endl;
	cout << "b) V - volt" << endl;
	cout << "c) C - coulomb" << endl;
}

void questionTen()
{
	cout << "In what unit of measurement is the charge passed measured?" << endl;

	cout << "a) A - ampere" << endl;
	cout << "b) V - volt" << endl;
	cout << "c) C - coulomb" << endl;
}