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
	cout << " 4) Back" << endl;
	cout << " ___________________________________________" << endl;
	cout << endl << " Select >> ";
}

void simpleSimulation()
{
	int now;

	goto switchOff;

	while (true)
	{
	switchOff:
		{
			system("cls");
			cout << " ============= +| |- ===============" << endl;
			cout << "||" << setw(35) << "||" << endl;
			cout << "||" << setw(35) << "||" << endl;
			cout << "||" << setw(35) << "||" << endl;
			cout << "||" << setw(35) << "||" << endl;
			cout << RED << "/ " << RESET << setw(37) << "( x )" << endl;
			cout << "||" << setw(35) << "||" << endl;
			cout << "||" << setw(35) << "||" << endl;
			cout << "||" << setw(35) << "||" << endl;
			cout << "||" << setw(35) << "||" << endl;
			cout << " ===================================" << endl << endl;

			cout << " What do you want to do now?" << endl;
			cout << " ________________________________________" << endl << endl;
			cout << " 1) Turn the lamp on" << endl;
			cout << " 2) Information about this simulation" << endl;
			cout << " 3) Go back to simulation menu" << endl;
			cout << " Select >> ";
			cin >> now;

			if (now == 1)
			{
				goto switchOn;
			}
			else if (now == 2)
			{
				system("cls");
				cout << "Some information" << endl;
				cout << "When you are ready press 1 " << endl;
				cin >> now;

				if (now == 1)
				{
					goto switchOff;
				}
			}
			else if (now == 3)
			{
				break;

			}
		}

	switchOn:
		{
			system("cls");
			cout << " ============= +| |- ===============" << endl;
			cout << "||" << setw(35) << "||" << endl;
			cout << "||" << setw(35) << "||" << endl;
			cout << "||" << setw(35) << "||" << endl;
			cout << "||" << setw(42) << BOLDYELLOW << "||" << RESET <<endl;
			cout << "| " << setw(37) << YELLOW << "( x )" <<RESET<< endl;
			cout << "||" << setw(42) << BOLDYELLOW << "||" << RESET << endl;
			cout << "||" << setw(35) << "||" << endl;
			cout << "||" << setw(35) << "||" << endl;
			cout << "||" << setw(35) << "||" << endl;
			cout << " ===================================" << endl << endl;

			cout << " What do you want to do now?" << endl;
			cout << " ________________________________________" << endl << endl;
			cout << " 1) Turn the lamp off" << endl;
			cout << " 2) Information about this simulation" << endl;
			cout << " 3) Go back to simulation menu" << endl;
			cout << " Select >> ";
			cin >> now;

			if (now == 1)
			{
				goto switchOff;
			}
			else if (now == 2)
			{
				system("cls");
				cout << "Some information" << endl;
				cout << "When you are ready press 1 " << endl;
				cin >> now;

				if (now == 1)
				{
					goto switchOn;
				}
			}
			else if (now == 3)
			{
				break;

			}
		}

	}
}

int main()
{
	int activity;

	Menu();
	cin >> activity;

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
		}

	}
}