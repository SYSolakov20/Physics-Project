#include <iostream>
#include <iomanip>
#include "CreateSimulation.h"

using namespace std;

int ammeterPosition = 0;
int voltmeterPosition = 0;
int batteryPosition = 0;
int sparePosition = 0;

bool firstPosition = 0;
bool secondPosition = 0;
bool thirdPosition = 0;

void fillPosition(int position)
{
	if (position == 1)
	{
		firstPosition = 1;
	}
	else if (position == 2)
	{
		secondPosition = 1;
	}
	else if (position == 3)
	{
			thirdPosition = 1;
	}
}
void emptyPosition(int position)
{
	if (position == 1)
	{
		firstPosition = 0;
	}
	else if (position == 2)
	{
		secondPosition = 0;
	}
	else if (position == 3)
	{
		thirdPosition = 0;
	}
}

void occupiedPosition(int position)
{
	int leaveOrReplace;
		
		if (position == 1 && firstPosition == 1)
		{
			cout << " This position is already occupied. Now you have two options:" << endl;
			cout << "_____________________________________________________________" << endl;
			cout << " 1) Leave it that way" << endl;
			cout << " 2) Replace the instrument" << endl;
			cout << " Select >> ";
			cin >> leaveOrReplace;
			if (leaveOrReplace == 1)
			{
				position = 0;
			}
			else if (leaveOrReplace == 2)
			{
				if (ammeterPosition == 1)
				{
					ammeterPosition = 0;
				}
				else if (voltmeterPosition == 1)
				{
					voltmeterPosition = 0;
				}
				else if (batteryPosition == 1)
				{
					batteryPosition = 0;
				}
			}
		}
		else if (position == 2 && secondPosition == 1)
		{
			cout << " This position is already occupied. Now you have two options:" << endl;
			cout << "_____________________________________________________________" << endl;
			cout << " 1) Leave it that way" << endl;
			cout << " 2) Replace the instrument" << endl;
			cout << " Select >> ";
			cin >> leaveOrReplace;
			
			if (leaveOrReplace == 1)
			{
				position = 0;
			}
			else if (leaveOrReplace == 2)
			{
				if (ammeterPosition == 2)
				{
					ammeterPosition = 0;
				}
				else if (voltmeterPosition == 2)
				{
					voltmeterPosition = 0;
				}
				else if (batteryPosition == 2)
				{
					batteryPosition = 0;
				}
			}
		}
		else if (position == 3 && thirdPosition == 1)
		{
			cout << " This position is already occupied. Now you have two options:" << endl;
			cout << "_____________________________________________________________" << endl;
			cout << " 1) Leave it that way" << endl;
			cout << " 2) Replace the instrument" << endl;
			cout << " Select >> ";
			cin >> leaveOrReplace;
			
			if (leaveOrReplace == 1)
			{
				position = 0;
			}
			else if (leaveOrReplace == 2)
			{
				if (ammeterPosition == 3)
				{
					ammeterPosition = 0;
				}
				else if (voltmeterPosition == 3)
				{
					voltmeterPosition = 0;
				}
				else if (batteryPosition == 3)
				{
					batteryPosition = 0;
				}
			}
		}
	
}

void choosePosition()
{
	
	system("color 0f");

	cout << endl;
	cout << " " << char(201);
	for (int i = 0; i < 14; i++)
	{
		cout << char(205);
	}
		if (ammeterPosition !=1 && voltmeterPosition != 1 && batteryPosition != 1)
		{
			cout << " ( 1 ) ";
		}
		else if (ammeterPosition == 1)
		{
			cout << " ( A ) ";
		}
		else if (voltmeterPosition == 1)
		{
			cout << " ( V ) ";
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
	cout << RED << " / " << RESET << setw(39) << "( x )  ";
	if (ammeterPosition != 2 && voltmeterPosition != 2 && batteryPosition != 2)
	{
		cout << "( 2 )" << endl;
	}
	else if (ammeterPosition == 2)
	{
		cout << "( A )" << endl;
	}
	else if (voltmeterPosition == 2)
	{
		cout << "( V )" << endl;
	}
	else if (batteryPosition == 2)
	{
		cout << "+| |-" << endl;
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

void chooseDevice()
{
	int device;
	int changeOrRemove;
	while (true)
	{
		
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
		cout << " 4) Turn on" << endl;
		cout << " 5) Go back" << endl << endl;
		cout << " Select >> ";
		cin >> device;
		system("cls");

		if (device == 1 && ammeterPosition == 0)
		{
			system("cls");
			choosePosition();
			cout << " Where do you want to add ammeter >> ";
			cin >> sparePosition;
			occupiedPosition(sparePosition);
			ammeterPosition = sparePosition;
			fillPosition(ammeterPosition);

			system("cls");
			choosePosition();
		}
		else if (device == 1 && (ammeterPosition == 1 || ammeterPosition == 2 || ammeterPosition == 3))
		{
			choosePosition();
			cout << endl <<" 1) remove ammeter" << endl;
			cout << " 2) change its position" << endl;
			cout << " Select >> ";
			cin >> changeOrRemove;
			if (changeOrRemove == 1)
			{
				emptyPosition(ammeterPosition);
				ammeterPosition = 0;
				system("cls");
				choosePosition();
			}
			else if (changeOrRemove == 2)
			{
				cout <<endl << " Where do you want to add ammeter >> ";
				cin >> sparePosition;
				occupiedPosition(sparePosition);
				ammeterPosition = sparePosition;
				fillPosition(ammeterPosition);
				
				system("cls");
				choosePosition();
			}
		}
		else if (device == 2 && voltmeterPosition == 0)
		{
			system("cls");
			choosePosition();
			cout << " Where do you want to add voltmeter >> ";
			cin >> sparePosition;
			occupiedPosition(sparePosition);
			voltmeterPosition = sparePosition;
			fillPosition(voltmeterPosition);

			system("cls");
			choosePosition();
		}
		else if (device == 2 && (voltmeterPosition == 1 || voltmeterPosition == 2 || voltmeterPosition == 3))
		{
			choosePosition();
			cout << endl <<" 1) remove voltmeter" << endl;
			cout << " 2) change its position" << endl;
			cout << " Select >> ";
			cin >> changeOrRemove;
			if (changeOrRemove == 1)
			{
				emptyPosition(voltmeterPosition);
				voltmeterPosition = 0;
				system("cls");
				choosePosition();
			}
			else if (changeOrRemove == 2)
			{
				cout << endl << " Where do you want to add voltmeter >> ";
				cin >> sparePosition;
				occupiedPosition(sparePosition);
				voltmeterPosition = sparePosition;
				fillPosition(voltmeterPosition);

				system("cls");
				choosePosition();
			}
		}
		else if (device == 3 && batteryPosition == 0)
		{
			system("cls");
			choosePosition();
			cout << " Where do you want to add battery >> ";
			cin >> sparePosition;
			occupiedPosition(sparePosition);
			batteryPosition = sparePosition;
			fillPosition(batteryPosition);

			system("cls");
			choosePosition();
		}
		else if (device == 3 && (batteryPosition == 1 || batteryPosition == 2 || batteryPosition == 3))
		{
			choosePosition();
			cout << endl <<" 1) remove" << endl;
			cout << " 2) change its position" << endl;
			cout << " Select >> ";
			cin >> changeOrRemove;
			if (changeOrRemove == 1)
			{
				emptyPosition(batteryPosition);
				batteryPosition = 0;
				system("cls");
				choosePosition();
			}
			else if (changeOrRemove == 2)
			{
				cout << endl << " Where do you want to add battery >> ";
				cin >> sparePosition;
				occupiedPosition(sparePosition);
				batteryPosition = sparePosition;
				fillPosition(batteryPosition);

				system("cls");
				choosePosition();
			}
		}
		else if (device == 5)
		{
			break;
		}
	}
}

void startCreating()
{
	system("cls");
	system("color 0f");
	cout << endl;
	cout << " " << char(201);
	for (int i = 0; i < 35; i++)
	{
		cout << char(205);
	}
	cout << char(187) << endl;
	cout << " " << char(186) << setw(36) << char(186) << endl;
	cout << " " << char(186) << setw(36) << char(186) << endl;
	cout << " " << char(186) << setw(36) << char(186) << endl;
	cout << " " << char(186) << setw(36) << char(186) << endl;
	cout << RED << " / " << RESET << setw(37) << "( x )" << endl;
	cout << " " << char(186) << setw(36) << char(186) << endl;
	cout << " " << char(186) << setw(36) << char(186) << endl;
	cout << " " << char(186) << setw(36) << char(186) << endl;
	cout << " " << char(186) << setw(36) << char(186) << endl;
	cout << " " << char(200);
	for (int i = 0; i < 35; i++)
	{
		cout << char(205);
	}
	cout << char(188) << endl << endl;

	chooseDevice();
}