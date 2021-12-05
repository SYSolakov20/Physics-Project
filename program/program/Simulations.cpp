#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "Simulations.h"

using namespace std;

void startSimulations()
{
	string simulationChoise;

	system("cls");

	cout << "    ___  ____  __  __  __  __  __      __   ____  ____  _____  _  _  ___ " << endl;
	cout << "   / __)(_  _)(  \\/  )(  )(  )(  )    /__\\ (_  _)(_  _)(  _  )( \\( )/ __)" << endl;
	cout << "   \\__ \\ _)(_  )    (  )(__)(  )(__  /(__)\\  )(   _)(_  )(_)(  )  ( \\__ \\" << endl;
	cout << "   (___/(____)(_/\\/\\_)(______)(____)(__)(__)(__) (____)(_____)(_)\\_)(___/" << endl;

	cout << endl << setw(49) << BOLDBLUE << " e " << char(26) << " e " << char(26) << RESET << endl;
	cout << "        " << char(201);
	for (int i = 0; i < 24; i++)
	{
		cout << char(205);
	}
	cout << " +| |- ";
	for (int i = 0; i < 24; i++)
	{
		cout << char(205);
	}
	cout << char(187) << endl;
	cout << "        " << char(186) << setw(56) << char(186) << endl;
	cout << "        " << char(186) << setw(56) << char(186) << endl;
	cout << "        " << char(186) << setw(56) << char(186) << endl;
	cout << "        " << char(186) << "   1) Simple simulation" << setw(33) << char(186) << endl;
	cout << "        " << char(186) << "   2) Simulation with ammeter" << setw(27) << char(186) << endl;
	cout << "        " << char(186) << "   3) Simulation with voltmeter" << setw(27) << "( x )" << endl;
	cout << "        " << char(186) << "   4) Simulation with ammeter and voltmeter" << setw(13) << char(186) << endl;
	cout << "        " << char(186) << "   5) Back" << setw(46) << char(186) << endl;
	cout << "        " << char(186) << setw(56) << char(186) << endl;
	cout << "        " << char(186) << setw(56) << char(186) << endl;
	cout << "        " << char(186) << setw(56) << char(186) << endl;
	cout << "        " << char(200);
	for (int i = 0; i < 55; i++)
	{
		cout << char(205);
	}
	cout << char(188) << endl << endl;


	cout << "            Select >> ";


	cin >> simulationChoise;

	if (simulationChoise == "1")
	{
		displaySimpleSimulation();
		startSimulations();
	}
	else if (simulationChoise == "2")
	{
		displayAmmeterSimulation();
		startSimulations();
	}
	else if (simulationChoise == "3")
	{
		displayVoltmeterSimulation();
		startSimulations();
	}
	else if (simulationChoise == "4")
	{
		displayAmmmeterAndVoltmeterSimulation();
		startSimulations();
	}
	else if (simulationChoise == "5")
	{
		system("cls");
	}
	else
	{
		startSimulations();
	}
}

void doNextSimulationOn()
{
	cout << " What do you want to do now?" << endl;
	cout << " ________________________________________" << endl << endl;
	cout << " 1) Turn the lamp on" << endl;
	cout << " 2) Information about this simulation" << endl;
	cout << " 3) Go back to simulation menu" << endl;
	cout << " Select >> ";
}

void doNextSimulationOff()
{
	cout << " What do you want to do now?" << endl;
	cout << " ________________________________________" << endl << endl;
	cout << " 1) Turn the lamp off" << endl;
	cout << " 2) Information about this simulation" << endl;
	cout << " 3) Go back to simulation menu" << endl;
	cout << " Select >> ";
}

void displaySimpleSimulation()
{
	string nextChoise;

	while (true)
	{
	switchOff:
		{
			system("cls");
			system("color 0f");

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
			cout << char(187) << "           _____  " << endl;
			cout << " " << char(186) << setw(36) << char(186)  << "         .'     '." << endl;
			cout << " " << char(186) << setw(36) << char(186) << "        /         \\ " << endl;
			cout << " " << char(186) << setw(36) << char(186) << "       |           |" << endl;
			cout << " " << char(186) << setw(36) << char(186) << "       '.  +^^^+  .'" << endl;
			cout << RED << " / " << RESET << setw(37) << "( x )" << "       `. \\./ .'" << endl;
			cout << " " << char(186) << setw(36) << char(186)  << "           |_|_|" << endl;
			cout << " " << char(186) << setw(36) << char(186) << "           (___) " << endl;
			cout << " " << char(186) << setw(36) << char(186) << "           (___)" << endl;
			cout << " " << char(186) << setw(36) << char(186) << "           '---'" << endl;
			cout << " " << char(200);
			for (int i = 0; i < 35; i++)
			{
				cout << char(205);
			}
			cout << char(188) << endl << endl;

			doNextSimulationOn();
			cin >> nextChoise;

			if (nextChoise == "1")
			{
				goto switchOn;
			}
			else if (nextChoise == "2")
			{
				system("cls");

				string Information;
				ifstream readFile("Information/simpleInformation.txt");

				while (getline(readFile, Information))
				{
					system("color f0");
					cout << Information;
				}

				readFile.close();

				cout << endl << endl;
				system("PAUSE");
				goto switchOff;
			}
			else if (nextChoise == "3")
			{
				break;
			}
			else
			{
				goto switchOff;
			}
		}

	switchOn:
		{
			system("cls");
			system("color 0f");

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
			cout << char(187) << BOLDYELLOW<< "           _____  " << RESET<< endl;
			cout << " " << char(186) << setw(36) << char(186) << BOLDYELLOW<< "         .'     '." << RESET << endl;
			cout << " " << char(186) << setw(36) << char(186) << BOLDYELLOW <<"        /         \\ " << RESET << endl;
			cout << " " << char(186) << setw(36) << char(186) << BOLDYELLOW << "       |           |" << RESET <<endl;
			cout << " " << char(186) << setw(44) << BOLDYELLOW << char(186) << "       '.  " << RESET << YELLOW <<"+^^^+ "<< RESET << BOLDYELLOW << " .'" <<RESET << endl;
			cout << " | " << setw(37) << YELLOW << "( x )" << RESET <<BOLDYELLOW <<"       '. " << RESET << YELLOW << "\\./ " << RESET << BOLDYELLOW << ".'" << RESET << endl;;
			cout << " " << char(186) << setw(44) << BOLDYELLOW << char(186) << RESET << "           |_|_|" << endl;
			cout << " " << char(186) << setw(36) << char(186) << "           (___) " << endl;
			cout << " " << char(186) << setw(36) << char(186) << "           (___)" << endl;
			cout << " " << char(186) << setw(36) << char(186) << "           '---'" << endl;
			cout << " " << char(200);
			for (int i = 0; i < 35; i++)
			{
				cout << char(205);
			}
			cout << char(188) << endl << endl;

			doNextSimulationOff();
			cin >> nextChoise;

			if (nextChoise == "1")
			{
				goto switchOff;
			}
			else if (nextChoise == "2")
			{
				system("cls");

				string Information;
				ifstream readFile("Information/simpleInformation.txt");

				while (getline(readFile, Information))
				{
					system("color f0");
					cout << Information;
				}

				readFile.close();

				cout << endl << endl;
				system("PAUSE");
				goto switchOn;
			}
			else if (nextChoise == "3")
			{
				break;
			}
			else
			{
				goto switchOn;
			}
		}
	}
}

void displayAmmeterSimulation()
{
	string nextChoise;

	while (true)
	{
	switchOff:
		{
			system("cls");
			system("color 0f");

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
			cout << char(187) << "           _____  " << endl;
			cout << " " << char(186) << setw(36) << char(186) << "         .'     '." << endl;
			cout << " " << char(186) << setw(36) << char(186) << "        /         \\ " << endl;
			cout << " " << char(186) << setw(36) << char(186) << "       |           |" << endl;
			cout << " " << char(186) << setw(36) << char(186) << "       '.  +^^^+  .'" << endl;
			cout << RED << " / " << RESET << setw(37) << "( x )" << "       `. \\./ .'" << endl;
			cout << " " << char(186) << setw(36) << char(186) << "           |_|_|" << endl;
			cout << " " << char(186) << setw(36) << char(186) << "           (___) " << endl;
			cout << " " << char(186) << setw(36) << char(186) << "           (___)" << endl;
			cout << " " << char(186) << setw(36) << char(186) << "           '---'" << endl;
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

			doNextSimulationOn();
			cin >> nextChoise;

			if (nextChoise == "1")
			{
				goto switchOn;
			}
			else if (nextChoise == "2")
			{
				system("cls");

				string Information;
				ifstream readFile("Information/ammeterInformation.txt");

				while (getline(readFile, Information))
				{
					system("color f0");
					cout << Information << endl;
				}

				readFile.close();

				cout << endl << endl;
				system("PAUSE");
				goto switchOff;

			}
			else if (nextChoise == "3")
			{
				break;
			}
			else
			{
				goto switchOff;
			}
		}

	switchOn:
		{
			system("cls");
			system("color 0f");

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
			cout << char(187) << BOLDYELLOW << "           _____  " << RESET << endl;
			cout << " " << char(186) << setw(36) << char(186) << BOLDYELLOW << "         .'     '." << RESET << endl;
			cout << " " << char(186) << setw(36) << char(186) << BOLDYELLOW << "        /         \\ " << RESET << endl;
			cout << " " << char(186) << setw(36) << char(186) << BOLDYELLOW << "       |           |" << RESET << endl;
			cout << " " << char(186) << setw(44) << BOLDYELLOW << char(186) << "       '.  " << RESET << YELLOW << "+^^^+ " << RESET << BOLDYELLOW << " .'" << RESET << endl;
			cout << " | " << setw(37) << YELLOW << "( x )" << RESET << BOLDYELLOW << "       '. " << RESET << YELLOW << "\\./ " << RESET << BOLDYELLOW << ".'" << RESET << endl;;
			cout << " " << char(186) << setw(44) << BOLDYELLOW << char(186) << RESET << "           |_|_|" << endl;
			cout << " " << char(186) << setw(36) << char(186) << "           (___) " << endl;
			cout << " " << char(186) << setw(36) << char(186) << "           (___)" << endl;
			cout << " " << char(186) << setw(36) << char(186) << "           '---'" << endl;
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

			doNextSimulationOff();
			cin >> nextChoise;

			if (nextChoise == "1")
			{
				goto switchOff;
			}
			else if (nextChoise == "2")
			{
				system("cls");
				
				string Information;
				ifstream readFile("Information/ammeterInformation.txt");

				while (getline(readFile, Information))
				{
					system("color f0");
					cout << Information << endl;
				}

				readFile.close();

				cout << endl << endl;
				system("PAUSE");
				goto switchOn;

			}
			else if (nextChoise == "3")
			{
				break;
			}
			else
			{
				goto switchOn;
			}
		}

	}
}

void displayVoltmeterSimulation()
{
	string nextChoise;

	while (true)
	{
	switchOff:
		{
			system("cls");
			system("color 0f");

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
			cout << char(187) << "              _____  " << endl;
			cout << " " << char(186) << setw(36) << char(186) << "            .'     '." << endl;
			cout << " " << char(186) << setw(36) << char(186) << "           /         \\ " << endl;
			cout << " " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << "   |           |" << endl;
			cout << " " << char(186) << setw(36) << char(186) << setw(7) << char(186) << "   '.  +^^^+  .'" << endl;
			cout << RED << " / " << RESET << setw(44) << "( x )  ( V )" << "   `. \\./ .'" << endl;
			cout << " " << char(186) << setw(36) << char(186) << setw(7) << char(186) << "       |_|_|" << endl;
			cout << " " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << "       (___) " << endl;
			cout << " " << char(186) << setw(36) << char(186) << "              (___)" << endl;
			cout << " " << char(186) << setw(36) << char(186) << "              '---'" << endl;
			cout << " " << char(200);
			for (int i = 0; i < 35; i++)
			{
				cout << char(205);
			}
			cout << char(188) << endl << endl;

			doNextSimulationOn();
			cin >> nextChoise;

			if (nextChoise == "1")
			{
				goto switchOn;
			}
			else if (nextChoise == "2")
			{
				system("cls");

				string Information;
				ifstream readFile("Information/voltmeterInformation.txt");

				while (getline(readFile, Information))
				{
					system("color f0");
					cout << Information << endl;
				}

				readFile.close();

				cout << endl << endl;
				system("PAUSE");
				goto switchOff;
			}
			else if (nextChoise == "3")
			{
				break;
			}
			else
			{
				goto switchOff;
			}
		}

	switchOn:
		{
			system("cls");
			system("color 0f");

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
			cout << char(187) << BOLDYELLOW << "              _____  " << RESET << endl;
			cout << " " << char(186) << setw(36) << char(186) << BOLDYELLOW << "            .'     '." << RESET << endl;
			cout << " " << char(186) << setw(36) << char(186) << BOLDYELLOW << "           /         \\ "  <<RESET << endl;
			cout << " " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) <<BOLDYELLOW <<"   |           |" << RESET<< endl;
			cout << " " << char(186) << setw(44) << BOLDYELLOW << char(186) << RESET << setw(7) << char(186) << "   '.  " << RESET << YELLOW << "+^^^+ " << RESET << BOLDYELLOW << " .'" << RESET << endl;
			cout << " | " << setw(37) << YELLOW << "( x )" << RESET << "  ( V )" << "   '. " << RESET << YELLOW << "\\./ " << RESET << BOLDYELLOW << ".'" << RESET << endl;
			cout << " " << char(186) << setw(44) << BOLDYELLOW << char(186) << RESET << setw(7) << char(186) << "       |_|_|" << endl;
			cout << " " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << "       (___) " << endl;
			cout << " " << char(186) << setw(36) << char(186) << "              (___)" << endl;
			cout << " " << char(186) << setw(36) << char(186) << "              '---'" << endl;
			cout << " " << char(200);
			for (int i = 0; i < 35; i++)
			{
				cout << char(205);
			}
			cout << char(188) << endl << endl;

			doNextSimulationOff();
			cin >> nextChoise;

			if (nextChoise == "1")
			{
				goto switchOff;
			}
			else if (nextChoise == "2")
			{
				system("cls");

				string Information;
				ifstream readFile("Information/voltmeterInformation.txt");

				while (getline(readFile, Information))
				{
					system("color f0");
					cout << Information << endl;
				}

				readFile.close();

				cout << endl << endl;
				system("PAUSE");
				goto switchOn;
			}
			else if (nextChoise == "3")
			{
				break;
			}
			else
			{
				goto switchOn;
			}
		}

	}
}

void displayAmmmeterAndVoltmeterSimulation()
{
	string nextChoise;

	while (true)
	{
	switchOff:
		{
			system("cls");
			system("color 0f");

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
			cout << char(187) << "              _____  " << endl;
			cout << " " << char(186) << setw(36) << char(186) << "            .'     '." << endl;
			cout << " " << char(186) << setw(36) << char(186) << "           /         \\ " << endl;
			cout << " " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << "   |           |" << endl;
			cout << " " << char(186) << setw(36) << char(186) << setw(7) << char(186) << "   '.  +^^^+  .'" << endl;
			cout << RED << " / " << RESET << setw(44) << "( x )  ( V )" << "   `. \\./ .'" << endl;
			cout << " " << char(186) << setw(36) << char(186) << setw(7) << char(186) << "       |_|_|" << endl;
			cout << " " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << "       (___) " << endl;
			cout << " " << char(186) << setw(36) << char(186) << "              (___)" << endl;
			cout << " " << char(186) << setw(36) << char(186) << "              '---'" << endl;
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

			doNextSimulationOn();
			cin >> nextChoise;

			if (nextChoise == "1")
			{
				goto switchOn;
			}
			else if (nextChoise == "2")
			{
				system("cls");

				string Information;
				ifstream readFile("Information/ammeterAndVoltmeterSimulation.txt");

				while (getline(readFile, Information))
				{
					system("color f0");
					cout << Information << endl;
				}

				readFile.close();

				cout << endl << endl;
				system("PAUSE");
				goto switchOff;
			}
			else if (nextChoise == "3")
			{
				break;
			}
			else
			{
				goto switchOff;
			}
		}

	switchOn:
		{
			system("cls");
			system("color 0f");

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
			cout << char(187) << BOLDYELLOW << "              _____  " << RESET << endl;
			cout << " " << char(186) << setw(36) << char(186) << BOLDYELLOW << "            .'     '." << RESET << endl;
			cout << " " << char(186) << setw(36) << char(186) << BOLDYELLOW << "           /         \\ " << RESET << endl;
			cout << " " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << BOLDYELLOW << "   |           |" << RESET << endl;
			cout << " " << char(186) << setw(44) << BOLDYELLOW << char(186) << RESET << setw(7) << char(186) << "   '.  " << RESET << YELLOW << "+^^^+ " << RESET << BOLDYELLOW << " .'" << RESET << endl;
			cout << " | " << setw(37) << YELLOW << "( x )" << RESET << "  ( V )" << "   '. " << RESET << YELLOW << "\\./ " << RESET << BOLDYELLOW << ".'"  << RESET << endl;
			cout << " " << char(186) << setw(44) << BOLDYELLOW << char(186) << RESET << setw(7) << char(186) << "       |_|_|" << endl;
			cout << " " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << "       (___) " << endl;
			cout << " " << char(186) << setw(36) << char(186) << "              (___)" << endl;
			cout << " " << char(186) << setw(36) << char(186) << "              '---'" << endl;
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

			doNextSimulationOff();
			cin >> nextChoise;

			if (nextChoise == "1")
			{
				goto switchOff;
			}
			else if (nextChoise == "2")
			{
				system("cls");

				string Information;
				ifstream readFile("Information/ammeterAndVoltmeterSimulation.txt");

				while (getline(readFile, Information))
				{
					system("color f0");
					cout << Information << endl;
				}

				readFile.close();

				cout << endl << endl;
				system("PAUSE");
				goto switchOn;
			}
			else if (nextChoise == "3")
			{
				break;
			}
			else
			{
				goto switchOn;
			}
		}

	}
}
