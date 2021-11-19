#include <iostream>
#include <iomanip>

#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define BOLDYELLOW  "\033[1m\033[33m"

using namespace std;

void Menu()
{
	cout << setw(30) << " Wellcome!" << endl;
	cout << " _________________________________________________" << endl << endl;
	cout << " 1) Simulations" << endl;
	cout << " 2) Calculators" << endl;
	cout << " 3) Tests" << endl;
	cout << " 4) Exit" << endl;
	cout << " _________________________________________________" << endl;
	cout << endl;
	cout << " Select your choice >> ";
}

void simulationMenu()
{
	system("cls");
	cout << setw(33) << " These are our simulations" << endl;
	cout << " ___________________________________________" << endl << endl;
	cout << " 1) Simulation with lamp" << endl;
	cout << " 2) Simulation with lamp and ammeter" << endl;
	cout << " 3) Simulation with lamp and voltmeter" << endl;
	cout << " 4) Simulation with lamp, ammeter and voltmeter" << endl;
	cout << " 5) Back" << endl;
	cout << " ___________________________________________" << endl;
	cout << endl << " Select >> ";
}

void ammeterSimulation()
{
	int nextChoise;

	goto switchOff;

	while (true)
	{
	switchOff:
		{
			system("cls");

			cout << endl;
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
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << RED << " / " << RESET << setw(37) << "( x )" << endl;
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(200);
			for (int i = 0; i < 15; i++)
			{
				cout << char(205);
			}
			cout << "( A )";
			for (int i = 0; i < 15; i++)
			{
				cout << char(205);
			}
			cout << char(188) << endl << endl;

			cout << " What do you want to do now?" << endl;
			cout << " ________________________________________" << endl << endl;
			cout << " 1) Turn the lamp on" << endl;
			cout << " 2) Information about this simulation" << endl;
			cout << " 3) Go back to simulation menu" << endl;
			cout << " Select >> ";
			cin >> nextChoise;

			if (nextChoise == 1)
			{
				goto switchOn;
			}
			else if (nextChoise == 2)
			{
				system("cls");
				cout << "Some information" << endl;
				cout << "When you are ready press 1 " << endl;
				cin >> nextChoise;

				if (nextChoise == 1)
				{
					goto switchOff;
				}
			}
			else if (nextChoise == 3)
			{
				break;

			}
		}

	switchOn:
		{
			system("cls");

			cout << endl;
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
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(186) << setw(44) << BOLDYELLOW << char(186) << RESET << endl;
			cout << " | " << setw(37) << YELLOW << "( x )" << RESET << endl;
			cout << " " << char(186) << setw(44) << BOLDYELLOW << char(186) << RESET << endl;
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(200);
			for (int i = 0; i < 15; i++)
			{
				cout << char(205);
			}
			cout << "( A )";
			for (int i = 0; i < 15; i++)
			{
				cout << char(205);
			}
			cout << char(188) << endl << endl;

			cout << " What do you want to do now?" << endl;
			cout << " ________________________________________" << endl << endl;
			cout << " 1) Turn the lamp off" << endl;
			cout << " 2) Information about this simulation" << endl;
			cout << " 3) Go back to simulation menu" << endl;
			cout << " Select >> ";
			cin >> nextChoise;

			if (nextChoise == 1)
			{
				goto switchOff;
			}
			else if (nextChoise == 2)
			{
				system("cls");
				cout << "Some information" << endl;
				cout << "When you are ready press 1 " << endl;
				cin >> nextChoise;

				if (nextChoise == 1)
				{
					goto switchOn;
				}
			}
			else if (nextChoise == 3)
			{
				break;

			}
		}

	}
}

void voltmeterSimulation()
{
	int nextChoise;

	goto switchOff;

	while (true)
	{
	switchOff:
		{
			system("cls");

			cout << endl;
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
			cout << " " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187)<< endl;
			cout << " " << char(186) << setw(36) << char(186) << setw(7) << char(186)<< endl;
			cout << RED << " / " << RESET << setw(44) << "( x )  ( V )" << endl;
			cout << " " << char(186) << setw(36) << char(186) << setw(7) << char(186)<< endl;
			cout << " " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188)<< endl;
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(200);
			for (int i = 0; i < 35; i++)
			{
				cout << char(205);
			}
			cout << char(188) << endl << endl;

			cout << " What do you want to do now?" << endl;
			cout << " ________________________________________" << endl << endl;
			cout << " 1) Turn the lamp on" << endl;
			cout << " 2) Information about this simulation" << endl;
			cout << " 3) Go back to simulation menu" << endl;
			cout << " Select >> ";
			cin >> nextChoise;

			if (nextChoise == 1)
			{
				goto switchOn;
			}
			else if (nextChoise == 2)
			{
				system("cls");
				cout << "Some information" << endl;
				cout << "When you are ready press 1 " << endl;
				cin >> nextChoise;

				if (nextChoise == 1)
				{
					goto switchOff;
				}
			}
			else if (nextChoise == 3)
			{
				break;

			}
		}

	switchOn:
		{
			system("cls");

			cout << endl;
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
			cout << " | " << setw(37) << YELLOW << "( x )" << RESET << "  ( V )"<< endl;
			cout << " " << char(186) << setw(44) << BOLDYELLOW << char(186) << RESET << setw(7) << char(186) << endl;
			cout << " " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(200);
			for (int i = 0; i < 35; i++)
			{
				cout << char(205);
			}
			cout << char(188) << endl << endl;

			cout << " What do you want to do now?" << endl;
			cout << " ________________________________________" << endl << endl;
			cout << " 1) Turn the lamp off" << endl;
			cout << " 2) Information about this simulation" << endl;
			cout << " 3) Go back to simulation menu" << endl;
			cout << " Select >> ";
			cin >> nextChoise;

			if (nextChoise == 1)
			{
				goto switchOff;
			}
			else if (nextChoise == 2)
			{
				system("cls");
				cout << "Some information" << endl;
				cout << "When you are ready press 1 " << endl;
				cin >> nextChoise;

				if (nextChoise == 1)
				{
					goto switchOn;
				}
			}
			else if (nextChoise == 3)
			{
				break;

			}
		}

	}
}


void simpleSimulation()
{
	int nextChoise;

	goto switchOff;

	while (true)
	{
	switchOff:
		{
			system("cls");

			cout << endl;
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

			cout << " What do you want to do now?" << endl;
			cout << " ________________________________________" << endl << endl;
			cout << " 1) Turn the lamp on" << endl;
			cout << " 2) Information about this simulation" << endl;
			cout << " 3) Go back to simulation menu" << endl;
			cout << " Select >> ";
			cin >> nextChoise;

			if (nextChoise == 1)
			{
				goto switchOn;
			}
			else if (nextChoise == 2)
			{
				system("cls");
				cout << "Some information" << endl;
				cout << "When you are ready press 1 " << endl;
				cin >> nextChoise;

				if (nextChoise == 1)
				{
					goto switchOff;
				}
			}
			else if (nextChoise == 3)
			{
				break;

			}
		}

	switchOn:
		{
			system("cls");

			cout << endl;
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
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(186) << setw(44) << BOLDYELLOW << char(186) << RESET <<endl;
			cout << " | " << setw(37) << YELLOW << "( x )" << RESET<< endl;
			cout << " " << char(186) << setw(44) << BOLDYELLOW << char(186) << RESET << endl;
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(200);
			for (int i = 0; i < 35; i++)
			{
				cout << char(205);
			}
			cout << char(188) << endl << endl;

			cout << " What do you want to do now?" << endl;
			cout << " ________________________________________" << endl << endl;
			cout << " 1) Turn the lamp off" << endl;
			cout << " 2) Information about this simulation" << endl;
			cout << " 3) Go back to simulation menu" << endl;
			cout << " Select >> ";
			cin >> nextChoise;

			if (nextChoise == 1)
			{
				goto switchOff;
			}
			else if (nextChoise == 2)
			{
				system("cls");
				cout << "Some information" << endl;
				cout << "When you are ready press 1 " << endl;
				cin >> nextChoise;

				if (nextChoise == 1)
				{
					goto switchOn;
				}
			}
			else if (nextChoise == 3)
			{
				break;

			}
		}

	}
}

void ammmeterAndVoltmeterSimulation()
{
	int nextChoise;

	goto switchOff;

	while (true)
	{
	switchOff:
		{
			system("cls");

			cout << endl;
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
			cout << " " << char(186) << setw(36) << char(186) << setw(7) << char(186) << endl;
			cout << RED << " / " << RESET << setw(44) << "( x )  ( V )" << endl;
			cout << " " << char(186) << setw(36) << char(186) << setw(7) << char(186) << endl;
			cout << " " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(200);
			for (int i = 0; i < 15; i++)
			{
				cout << char(205);
			}
			cout << "( A )";
			for (int i = 0; i < 15; i++)
			{
				cout << char(205);
			}
			cout << char(188) << endl << endl;

			cout << " What do you want to do now?" << endl;
			cout << " ________________________________________" << endl << endl;
			cout << " 1) Turn the lamp on" << endl;
			cout << " 2) Information about this simulation" << endl;
			cout << " 3) Go back to simulation menu" << endl;
			cout << " Select >> ";
			cin >> nextChoise;

			if (nextChoise == 1)
			{
				goto switchOn;
			}
			else if (nextChoise == 2)
			{
				system("cls");
				cout << "Some information" << endl;
				cout << "When you are ready press 1 " << endl;
				cin >> nextChoise;

				if (nextChoise == 1)
				{
					goto switchOff;
				}
			}
			else if (nextChoise == 3)
			{
				break;

			}
		}

	switchOn:
		{
			system("cls");

			cout << endl;
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
			cout << " | " << setw(37) << YELLOW << "( x )" << RESET << "  ( V )" << endl;
			cout << " " << char(186) << setw(44) << BOLDYELLOW << char(186) << RESET << setw(7) << char(186) << endl;
			cout << " " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(186) << setw(36) << char(186) << endl;
			cout << " " << char(200);
			for (int i = 0; i < 15; i++)
			{
				cout << char(205);
			}
			cout << "( A )";
			for (int i = 0; i < 15; i++)
			{
				cout << char(205);
			}
			cout << char(188) << endl << endl;

			cout << " What do you want to do now?" << endl;
			cout << " ________________________________________" << endl << endl;
			cout << " 1) Turn the lamp off" << endl;
			cout << " 2) Information about this simulation" << endl;
			cout << " 3) Go back to simulation menu" << endl;
			cout << " Select >> ";
			cin >> nextChoise;

			if (nextChoise == 1)
			{
				goto switchOff;
			}
			else if (nextChoise == 2)
			{
				system("cls");
				cout << "Some information" << endl;
				cout << "When you are ready press 1 " << endl;
				cin >> nextChoise;

				if (nextChoise == 1)
				{
					goto switchOn;
				}
			}
			else if (nextChoise == 3)
			{
				break;

			}
		}

	}
}

int main()
{
	int activity;

	start:
		{
			Menu();
			cin >> activity;
		}
	

	int simulationChoise;

	if (activity == 1)
	{
	simulations:
		{
			system("color 0f");
			system("cls");
			simulationMenu();

			cin >> simulationChoise;

			if (simulationChoise == 1)
			{
				system("cls");
				simpleSimulation();
				goto simulations;
			}
			else if (simulationChoise == 2)
			{
				system("cls");
				ammeterSimulation();
				goto simulations;
			}
			else if (simulationChoise == 3)
			{
				system("cls");
				voltmeterSimulation();
				goto simulations;

			}
			else if (simulationChoise == 4)
			{
				system("cls");
				ammmeterAndVoltmeterSimulation();
				goto simulations;
			}
			else if (simulationChoise == 5)
			{
				system("cls");
				goto start;
			}
		}

	}
	else if (activity == 4)
	{
		system("cls");
		cout << "Bye!";
	}
}