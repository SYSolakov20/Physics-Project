#include <iostream>
#include <iomanip>
#include "CreateSimulation.h"

using namespace std;

int ammeterPosition = 0;
int voltmeterPosition = 0;
int batteryPosition = 0;
int sparePosition = 0;

bool positions[3] = { 0, 0, 0 };

bool removeInstrument = 0;

void fillPosition(int filledPosition)
{
	if (filledPosition == 1)
	{
		positions[0] = 1;
	}
	else if (filledPosition == 2)
	{
		positions[1] = 1;
	}
	else if (filledPosition == 3)
	{
		positions[2] = 1;
	}
}

void emptyPosition(int emptyPosition)
{
	if (emptyPosition == 1)
	{
		positions[0] = 0;
	}
	else if (emptyPosition == 2)
	{
		positions[1] = 0;
	}
	else if (emptyPosition == 3)
	{
		positions[2] = 0;
	}
}

void checkPosition(int occcupiedPosition)
{
	int leaveOrReplace;

	for (int i = 1; i <= 3; i++)
	{

		if (occcupiedPosition == i && positions[i-1] == 1)
		{
			system("cls");
			displayPositions();
			cout << " This position is already occupied. Now you have two options:" << endl;
			cout << " _____________________________________________________________" << endl;
			cout << " 1) Leave it that way" << endl;
			cout << " 2) Replace the instrument" << endl;
			cout << " Select >> ";
			cin >> leaveOrReplace;

			if (leaveOrReplace == 1)
			{
				removeInstrument = 1;
			}
			else if (leaveOrReplace == 2)
			{
				if (ammeterPosition == i)
				{
					ammeterPosition = 0;
				}
				else if (voltmeterPosition == i)
				{
					voltmeterPosition = 0;
				}
				else if (batteryPosition == i)
				{
					batteryPosition = 0;
				}
			}
			else
			{
				displayPositions();
				i -= 1;
			}
		}

	}
}

void displayPositions()
{
	system("cls");

	cout << endl;
	cout << " " << char(201);
	for (int i = 0; i < 14; i++)
	{
		cout << char(205);
	}
	if (ammeterPosition !=1 && voltmeterPosition != 1 && batteryPosition != 1)
	{
		cout << char(205) << "( 1 )" << char(205);
	}
	else if (ammeterPosition == 1)
	{
		cout << char(205) << "( A )" << char(205);
	}
	else if (voltmeterPosition == 1)
	{
		cout << char(205) << "( V )" << char(205);
	}
	else if (batteryPosition == 1)
	{
		cout << " +| |- ";
	}
	for (int i = 0; i < 14; i++)
	{
		cout << char(205);
	}
	cout << char(187) << endl;
	cout << " " << char(186) << setw(36) << char(186) << endl;
	cout << " " << char(186) << setw(36) << char(186) << endl;
	cout << " " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
	cout << " " << char(186) << setw(36) << char(186) << setw(7) << char(186) << endl;
	cout << RED << " / " << RESET << setw(38) << "( x ) ";
	if (ammeterPosition != 2 && voltmeterPosition != 2 && batteryPosition != 2)
	{
		cout << " ( 2 )" << endl;
	}
	else if (ammeterPosition == 2)
	{
		cout << " ( A )" << endl;
	}
	else if (voltmeterPosition == 2)
	{
		cout << " ( V )" << endl;
	}
	else if (batteryPosition == 2)
	{
		cout << " +| |-" << endl;
	}
	cout << " " << char(186) << setw(36) << char(186) << setw(7) << char(186) << endl;
	cout << " " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
	cout << " " << char(186) << setw(36) << char(186) << endl;
	cout << " " << char(186) << setw(36) << char(186) << endl;
	cout << " " << char(200);
	for (int i = 0; i < 15; i++)
	{
		cout << char(205);
	}
	if (ammeterPosition != 3 && voltmeterPosition != 3 && batteryPosition != 3)
	{
		cout << "( 3 )";
	}
	else if (ammeterPosition == 3)
	{
		cout << "( A )";
	}
	else if (voltmeterPosition == 3)
	{
		cout << "( V )" ;
	}
	else if (batteryPosition == 3)
	{
		cout << "+| |-";
	}
	for (int i = 0; i < 15; i++)
	{
		cout << char(205);
	}
	cout << char(188) << endl << endl;

}

void printSimulation()
{
	system("cls");

	cout << endl;
	cout << " " << char(201);
	for (int i = 0; i < 14; i++)
	{
		cout << char(205);
	}
	if (ammeterPosition != 1 && voltmeterPosition != 1 && batteryPosition != 1)
	{
		cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205);
	}
	else if (ammeterPosition == 1)
	{
		cout << char(205) << "( A )" << char(205);
	}
	else if (voltmeterPosition == 1)
	{
		cout << char(205) << "( V )" << char(205);
	}
	else if (batteryPosition == 1)
	{
		cout << " +| |- ";
	}
	for (int i = 0; i < 14; i++)
	{
		cout << char(205);
	}
	cout << char(187) << endl;
	cout << " " << char(186) << setw(36) << char(186) << endl;
	cout << " " << char(186) << setw(36) << char(186) << endl;
	if (positions[1] == 1)
	{
		cout << " " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
		cout << " " << char(186) << setw(36) << char(186) << setw(7) << char(186) << endl;
		cout << RED << " / " << RESET << setw(39) << "( x )  ";
		if (ammeterPosition == 2)
		{
			cout << "( A )" << endl;
		}
		else if (voltmeterPosition == 2)
		{
			cout << "( V )" << endl;
		}
		else if (batteryPosition == 2)
		{
			cout << "+| |- " << endl;
		}
		cout << " " << char(186) << setw(36) << char(186) << setw(7) << char(186) << endl;
		cout << " " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
	}
	else if (positions[1] != 1)
	{
		cout << " " << char(186) << setw(36) << char(186) << endl;
		cout << " " << char(186) << setw(36) << char(186) << endl;
		cout << RED << " / " << RESET << setw(37) << "( x )" << endl;
		cout << " " << char(186) << setw(36) << char(186) << endl;
		cout << " " << char(186) << setw(36) << char(186) << endl;
	}
	cout << " " << char(186) << setw(36) << char(186) << endl;
	cout << " " << char(186) << setw(36) << char(186) << endl;
	cout << " " << char(200);
	for (int i = 0; i < 14; i++)
	{
		cout << char(205);
	}
	if (ammeterPosition != 3 && voltmeterPosition != 3 && batteryPosition != 3)
	{
		cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205);
	}
	else if (ammeterPosition == 3)
	{
		cout << char(205) << "( A )" << char(205);
	}
	else if (voltmeterPosition == 3)
	{
		cout << char(205) << "( V )" << char(205);
	}
	else if (batteryPosition == 3)
	{
		cout << " +| |- ";
	}
	for (int i = 0; i < 14; i++)
	{
		cout << char(205);
	}
	cout << char(188) << endl << endl;
}

void startCreatingSimulation()
{
	int device;
	int changeOrRemove;

	while (true)
	{

		printSimulation();

		cout << " Choose what you want to do" << endl;
		cout << "______________________________" << endl;
		if (ammeterPosition == 0)
		{
			cout << " 1) Add ammeter" << endl;
		}
		else if (ammeterPosition == 1 || ammeterPosition == 2 || ammeterPosition == 3)
		{
			cout << " 1) Remove ammeter or change its position" << endl;
		}
		if (voltmeterPosition == 0)
		{
			cout << " 2) Add voltmeter" << endl;
		}
		else if (voltmeterPosition == 1 || voltmeterPosition == 2 || voltmeterPosition == 3)
		{
			cout << " 2) Remove voltmeter or change its position" << endl;
		}
		if (batteryPosition == 0)
		{
			cout << " 3) Add battery" << endl;
		}
		else if (batteryPosition == 1 || batteryPosition == 2 || batteryPosition == 3)
		{
			cout << " 3) Remove battery or change its position" << endl;
		}
		cout << " 4) Turn on - check if it works" << endl;
		cout << " 5) Clear the circuit " << endl;
		cout << " 6) Go back" << endl << endl;
		cout << " Select >> ";
		cin >> device;

		if (device == 1 && ammeterPosition == 0)
		{
			addAmmeter:
			{
				displayPositions();

				cout << " Where do you want to add ammeter >> ";
				cin >> sparePosition;
			}

			if (sparePosition < 0 || sparePosition > 3)
			{
				goto addAmmeter;
			}
			
			checkPosition(sparePosition);
			ammeterPosition = sparePosition;
			fillPosition(ammeterPosition);

			if (removeInstrument == 1)
			{
				ammeterPosition = 0;
				removeInstrument = 0;
			}
		}
		else if (device == 1 && (ammeterPosition == 1 || ammeterPosition == 2 || ammeterPosition == 3))
		{
			removeOrChangeAmmeterPosition:
			{
				displayPositions();

				cout << endl << " 1) remove ammeter" << endl;
				cout << " 2) change its position" << endl;
				cout << " Select >> ";
				cin >> changeOrRemove;
			}

			emptyPosition(ammeterPosition);

			if (changeOrRemove == 1)
			{
				ammeterPosition = 0;
			}
			else if (changeOrRemove == 2)
			{
				changeAmmeterPosition:
				{
					displayPositions();
					cout << endl << " Where do you want to add ammeter >> ";
					cin >> sparePosition;
				}

				if (sparePosition < 0 || sparePosition > 3)
				{
					goto changeAmmeterPosition;
				}

				checkPosition(sparePosition);
				ammeterPosition = sparePosition;
				fillPosition(ammeterPosition);

				if (removeInstrument == 1)
				{
					ammeterPosition = 0;
					removeInstrument = 0;
				}
			}
			else
			{
				goto removeOrChangeAmmeterPosition;
			}
		}
		else if (device == 2 && voltmeterPosition == 0)
		{
			addVoltmeter:
			{
				displayPositions();

				cout << " Where do you want to add voltmeter >> ";
				cin >> sparePosition;
			}

			if (sparePosition < 0 || sparePosition > 3)
			{
				goto addVoltmeter;
			}

			checkPosition(sparePosition);
			voltmeterPosition = sparePosition;
			fillPosition(voltmeterPosition);

			if (removeInstrument == 1)
			{
				voltmeterPosition = 0;
				removeInstrument = 0;
			}
		}
		else if (device == 2 && (voltmeterPosition == 1 || voltmeterPosition == 2 || voltmeterPosition == 3))
		{
			removeOrChangeVoltmeterPosition:
			{
				displayPositions();

				cout << endl << " 1) remove voltmeter" << endl;
				cout << " 2) change its position" << endl;
				cout << " Select >> ";
				cin >> changeOrRemove;
			}

			emptyPosition(voltmeterPosition);

			if (changeOrRemove == 1)
			{
				voltmeterPosition = 0;
			}
			else if (changeOrRemove == 2)
			{
				changeVoltmeterPosition:
				{
					displayPositions();
					cout << endl << " Where do you want to add voltmeter >> ";
					cin >> sparePosition;
				}
				
				if (sparePosition < 0 || sparePosition > 3)
				{
					goto changeVoltmeterPosition;
				}

				checkPosition(sparePosition);
				voltmeterPosition = sparePosition;
				fillPosition(voltmeterPosition);

				if (removeInstrument == 1)
				{
					voltmeterPosition = 0;
					removeInstrument = 0;
				}
			}
			else
			{
				goto removeOrChangeVoltmeterPosition;
			}
		}
		else if (device == 3 && batteryPosition == 0)
		{
			addBattery:
			{
				displayPositions();

				cout << " Where do you want to add battery >> ";
				cin >> sparePosition;
			}
			
			if (sparePosition < 0 || sparePosition > 3)
			{
				goto addBattery;
			}

			checkPosition(sparePosition);
			batteryPosition = sparePosition;
			fillPosition(batteryPosition);

			if (removeInstrument == 1)
			{
				batteryPosition = 0;
				removeInstrument = 0;
			}
		}
		else if (device == 3 && (batteryPosition == 1 || batteryPosition == 2 || batteryPosition == 3))
		{
			removeOrChangeBatteryPosition:
			{
				displayPositions();

				cout << endl << " 1) remove" << endl;
				cout << " 2) change its position" << endl;
				cout << " Select >> ";
				cin >> changeOrRemove;
			}
			
			emptyPosition(batteryPosition);

			if (changeOrRemove == 1)
			{
				batteryPosition = 0;
			}
			else if (changeOrRemove == 2)
			{
				changeBatteryPosition:
				{
					displayPositions();
					cout << endl << " Where do you want to add battery >> ";
					cin >> sparePosition;
				}
				
				if (sparePosition < 0 || sparePosition > 3)
				{
					goto changeBatteryPosition;
				}

				checkPosition(sparePosition);
				batteryPosition = sparePosition;
				fillPosition(batteryPosition);

				if (removeInstrument == 1)
				{
					batteryPosition = 0;
					removeInstrument = 0;
				}
			}
			else
			{
				goto removeOrChangeBatteryPosition;
			}
		}
		else if (device == 4)
		{
			turnOn();
		}
		else if (device == 5)
		{
			ammeterPosition = 0;
			voltmeterPosition = 0;
			batteryPosition = 0;
			positions[0] = 0;
			positions[1] = 0;
			positions[2] = 0;
			sparePosition = 0;
		}
		else if (device == 6)
		{
			break;
		}
		else
		{
			continue;
		}
	}
}

void turnOn()
{
	system("cls");
	if (((batteryPosition == 1 || batteryPosition == 3)))
	{
		if ((voltmeterPosition == 2 || voltmeterPosition == 0) && ammeterPosition != 2)
		{
			cout << endl;
			cout << " " << char(201);
			for (int i = 0; i < 14; i++)
			{
				cout << char(205);
			}
			if (ammeterPosition != 1 && voltmeterPosition != 1 && batteryPosition != 1)
			{
				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205);
			}
			else if (ammeterPosition == 1)
			{
				cout << char(205) << "( A )" << char(205);
			}
			else if (batteryPosition == 1)
			{
				cout << " +| |- ";
			}
			for (int i = 0; i < 14; i++)
			{
				cout << char(205);
			}
			cout << char(187) << endl;
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(186) << setw(36) << char(186) << endl;
			if (positions[1] == 1)
			{
				cout << " " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
				cout << " " << char(186) << setw(44) << BOLDYELLOW << char(186) << RESET << setw(7) << char(186) << endl;
				cout << " | " << setw(37) << YELLOW << "( x )  " << RESET << "( V )" << endl;
				cout << " " << char(186) << setw(44) << BOLDYELLOW << char(186) << RESET << setw(7) << char(186) << endl;
				cout << " " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
			}
			else if (positions[1] != 1)
			{
				cout << " " << char(186) << setw(36) << char(186) << endl;
				cout << " " << char(186) << setw(44) << BOLDYELLOW << char(186) << RESET << endl;
				cout << " | " << setw(37) << YELLOW << "( x )" << RESET << endl;
				cout << " " << char(186) << setw(44) << BOLDYELLOW << char(186) << RESET << endl;
				cout << " " << char(186) << setw(36) << char(186) << endl;
			}
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(200);
			for (int i = 0; i < 14; i++)
			{
				cout << char(205);
			}
			if (ammeterPosition != 3 && voltmeterPosition != 3 && batteryPosition != 3)
			{
				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205);
			}
			else if (ammeterPosition == 3)
			{
				cout << char(205) << "( A )" << char(205);
			}
			else if (batteryPosition == 3)
			{
				cout << " +| |- ";
			}
			for (int i = 0; i < 14; i++)
			{
				cout << char(205);
			}
			cout << char(188) << endl << endl;
		}
		else
		{
			if (ammeterPosition == 2)
			{
				cout << "An ammeter is always connected in series with the circuit component you are measuring." << endl;
			}
			if (voltmeterPosition == 1 || voltmeterPosition == 3)
			{
				cout << "A voltmeter is always connected in parallel with the circuit component you are measuring." << endl;
			}
		}
	}
	else
	{
		if (batteryPosition == 0)
		{
			cout << "You haven't added a battery." << endl;
		}
		else
		{
			cout << "A battery is always connected in series with the circuit." << endl;
		}
		if (ammeterPosition == 2)
		{
			cout << "An ammeter is always connected in series with the circuit component you are measuring." << endl;
		}
		if (voltmeterPosition == 1 || voltmeterPosition == 3)
		{
			cout << "A voltmeter is always connected in parallel with the circuit component you are measuring." << endl;
		}
	}
	system("PAUSE");
}