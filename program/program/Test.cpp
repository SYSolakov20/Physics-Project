#include <iostream>
#include <iomanip>
#include "Test.h"

using namespace std;

string answers[10];

int counter = 0;

void questionOne()
{
	cout << "What do you measure with ammeter?" << endl << endl;
	cout << "a) electric current" << endl;
	cout << "b) resistance" << endl;
	cout << "c) voltage" << endl << endl;

	cout << "Enter your answer >> ";

	cin >> answers[0];
	if (answers[0] == "a")
	{
		counter++;
	}
}

void questionTwo()
{
	cout << "What do you measure with voltmeter?" << endl << endl;
	cout << "a) electric current" << endl;
	cout << "b) resistance" << endl;
	cout << "c) voltage" << endl << endl;

	cout << "Enter your answer >> ";

	cin >> answers[1];
	if (answers[1] == "c")
	{
		counter++;

	}
}

void questionThree()
{
	cout << "What do you measure with resistor?" << endl << endl;
	cout << "a) electric current" << endl;
	cout << "b) resistance" << endl;
	cout << "c) voltage" << endl << endl;

	cout << "Enter your answer >> ";

	cin >> answers[2];
	if (answers[2] == "b")
	{
		counter++;

	}
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
	cout << " " << char(186) << setw(36) << char(186) << setw(7) << char(186) << endl;
	cout << RED << " / " << RESET << setw(44) << "( 1 )  ( 2 )" << endl;
	cout << " " << char(186) << setw(36) << char(186) << setw(7) << char(186) << endl;
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
	cout << "c) 1-lamp, 2-voltmeter, 3-ammeter" << endl << endl;

	cout << "Enter your answer >> ";

	cin >> answers[3];
	if (answers[3] == "c")
	{
		counter++;
	}
}

void questionFive()
{
	cout << setw(5) << "q" << endl;
	cout << "I = " << char(196) << " is a formula for finding electric current" << endl;
	cout << setw(5) << "t" << endl << endl;

	cout << "a) True" << endl;
	cout << "b) False" << endl << endl;

	cout << "Enter your answer >> ";

	cin >> answers[4];
	if (answers[4] == "a")
	{
		counter++;
	}
}

void questionSix()
{
	cout << "q = I * R" << endl << endl;

	cout << "a) True" << endl;
	cout << "b) False" << endl << endl;

	cout << "Enter your answer >> ";

	cin >> answers[5];
	if (answers[5] == "b")
	{
		counter++;
	}
}

void questionSeven()
{
	cout << "U = R * I" << endl << endl;

	cout << "a) True" << endl;
	cout << "b) False" << endl << endl;

	cout << "Enter your answer >> ";

	cin >> answers[6];
	if (answers[6] == "a")
	{
		counter++;

	}
}

void questionEight()
{
	cout << "In what unit of measurement is the electric current measured?" << endl << endl;

	cout << "a) A - ampere" << endl;
	cout << "b) V - volt" << endl;
	cout << "c) C - coulomb" << endl << endl;

	cout << "Enter your answer >> ";

	cin >> answers[7];
	if (answers[7] == "a")
	{
		counter++;

	}
}

void questionNine()
{
	cout << "In what unit of measurement is the voltage measured?" << endl << endl;

	cout << "a) A - ampere" << endl;
	cout << "b) V - volt" << endl;
	cout << "c) C - coulomb" << endl << endl;

	cout << "Enter your answer >> ";

	cin >> answers[8];
	if (answers[8] == "b")
	{
		counter++;

	}
}

void questionTen()
{
	cout << "In what unit of measurement is the charge passed measured?" << endl << endl;;

	cout << "a) A - ampere" << endl;
	cout << "b) V - volt" << endl;
	cout << "c) C - coulomb" << endl << endl;

	cout << "Enter your answer >> ";

	cin >> answers[9];
	if (answers[9] == "c")
	{
		counter++;
	}
}

void shuffleQuestions(int shuffledQuestions[10])
{
	int questionsInOrder[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int temp;
	srand(time(NULL));
	for (int i = 9; i > 0; --i)
	{
		int j = rand() % i;
		temp = questionsInOrder[i];
		questionsInOrder[i] = questionsInOrder[j];
		questionsInOrder[j] = temp;
	}

	for (int i = 0; i < 10; ++i)
	{
		shuffledQuestions[i] = questionsInOrder[i];
	}
}

void reviewTest(int reviewTestQuestions[10])
{
	system("cls");

	for (int i = 0; i < 10; i++)
	{
		cout << "Question " << i + 1 << endl;
		cout << "_____________________________" << endl;
		switch (reviewTestQuestions[i])
		{
		case 1:
		{
			cout << "What do you measure with ammeter?" << endl;
			if (answers[0] == "a" or (answers[0] != "a" and answers[0] != "b" and answers[0] != "c"))
			{

				cout << "a) electric current " << GREEN << char(251) << RESET << endl;
				cout << "b) resistance " << endl;
				cout << "c) voltage " << endl;
				if (answers[0] == "a")
				{
					cout << GREEN << "Your answer is correct!" << RESET;
				}
			}
			else if (answers[0] == "b")
			{
				cout << "a) electric current " << YELLOW << char(251) << RESET << endl;
				cout << "b) resistance " << RED << "X" << RESET << endl;
				cout << "c) voltage " << endl;
			}
			else if (answers[0] == "c")
			{
				cout << "a) electric current " << YELLOW << char(251) << RESET << endl;
				cout << "b) resistance" << endl;
				cout << "c) voltage " << RED << "X" << RESET << endl;
			}
			break;
		}

		case 2:
		{
			cout << "What do you measure with voltmeter?" << endl;
			if (answers[1] == "a")
			{
				cout << "a) electric current " << RED << "X" << RESET << endl;
				cout << "b) resistance" << endl;
				cout << "c) voltage " << YELLOW << char(251) << RESET << endl;
			}
			else if (answers[1] == "b")
			{
				cout << "a) electric current " << endl;
				cout << "b) resistance" << RED << "X" << RESET << endl;
				cout << "c) voltage " << YELLOW << char(251) << RESET << endl;
			}
			else if (answers[1] == "c" or (answers[1] != "a" and answers[1] != "b" and answers[1] != "c"))
			{
				cout << "a) electric current " << endl;
				cout << "b) resistance " << endl;
				cout << "c) voltage " << GREEN << char(251) << RESET << endl;
				if (answers[1] == "c")
				{
					cout << GREEN << "Your answer is correct!" << RESET;
				}
			}
			break;
		}

		case 3:
		{
			cout << "What do you measure with resistor?" << endl;
			if (answers[2] == "a")
			{
				cout << "a) electric current " << RED << "X" << RESET << endl;
				cout << "b) resistance " << YELLOW << char(251) << RESET << endl;
				cout << "c) voltage " << endl;
			}
			else if (answers[2] == "b" or (answers[2] != "a" and answers[2] != "b" and answers[2] != "c"))
			{
				cout << "a) electric current " << endl;
				cout << "b) resistance " << GREEN << char(251) << RESET << endl;
				cout << "c) voltage " << endl;
				if (answers[2] == "b")
				{
					cout << GREEN << "Your answer is correct!" << RESET;
				}
			}
			else if (answers[2] == "c")
			{
				cout << "a) electric current" << endl;
				cout << "b) resistance " << YELLOW << char(251) << RESET << endl;
				cout << "c) voltage " << RED << "X" << RESET << endl;
			}
			break;
		}

		case 4:
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
			cout << " " << char(186) << setw(36) << char(186) << setw(7) << char(186) << endl;
			cout << RED << " / " << RESET << setw(44) << "( 1 )  ( 2 )" << endl;
			cout << " " << char(186) << setw(36) << char(186) << setw(7) << char(186) << endl;
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

			if (answers[3] == "a")
			{
				cout << "a) 1-ammeter, 2-voltmeter, 3-lamp " << RED << "X" << RESET << endl;
				cout << "b) 1-voltmeter, 2-ammeter, 3-lamp " << endl;
				cout << "c) 1-lamp, 2-voltmeter, 3-ammeter " << YELLOW << char(251) << RESET << endl;
			}
			else if (answers[3] == "b")
			{
				cout << "a) 1-ammeter, 2-voltmeter, 3-lamp " << endl;
				cout << "b) 1-voltmeter, 2-ammeter, 3-lamp " << RED << "X" << RESET << endl;
				cout << "c) 1-lamp, 2-voltmeter, 3-ammeter " << YELLOW << char(251) << RESET << endl;
			}
			else if (answers[3] == "c" or (answers[3] != "a" and answers[3] != "b" and answers[3] != "c"))
			{
				cout << "a) 1-ammeter, 2-voltmeter, 3-lamp " << endl;
				cout << "b) 1-voltmeter, 2-ammeter, 3-lamp " << endl;
				cout << "c) 1-lamp, 2-voltmeter, 3-ammeter " << GREEN << char(251) << RESET << endl;
				if (answers[1] == "c")
				{
					cout << GREEN << "Your answer is correct!" << RESET;
				}
			}
			break;
		}

		case 5:
		{
			cout << setw(5) << "q" << endl;
			cout << "I = " << char(196) << " is a formula for finding electric current" << endl;
			cout << setw(5) << "t" << endl << endl;

			if (answers[4] == "a" or (answers[4] != "a" and answers[4] != "b"))
			{
				cout << "a) True " << GREEN << char(251) << RESET << endl;
				cout << "b) False" << endl;
				if (answers[4] == "a")
				{
					cout << GREEN << "Your answer is correct!" << RESET;
				}
			}
			else if (answers[4] == "b")
			{
				cout << "a) True " << YELLOW << char(251) << RESET << endl;
				cout << "b) False " << RED << "X" << RESET << endl;
			}
			break;
		}

		case 6:
		{
			cout << "q = I * R" << endl;
			if (answers[5] == "a")
			{
				cout << "a) True" << RED << "X" << RESET << endl;
				cout << "b) False " << YELLOW << char(251) << RESET << endl;
			}
			else if (answers[5] == "b" or (answers[5] != "a" and answers[5] != "b"))
			{
				cout << "a) True" << endl;
				cout << "b) False " << GREEN << char(251) << RESET << endl;
				if (answers[5] == "b")
				{
					cout << GREEN << "Your answer is correct!" << RESET;
				}
			}
			break;
		}

		case 7:
		{
			cout << "U = R * I" << endl << endl;
			if (answers[6] == "a" or (answers[6] != "a" and answers[6] != "b"))
			{
				cout << "a) True " << GREEN << char(251) << RESET << endl;
				cout << "b) False" << endl;
				if (answers[6] == "a")
				{
					cout << GREEN << "Your answer is correct!" << RESET;
				}
			}
			else if (answers[6] == "b")
			{
				cout << "a) True " << YELLOW << char(251) << RESET << endl;
				cout << "b) False " << RED << "X" << RESET << endl;
			}
			break;
		}

		case 8:
		{
			cout << "In what unit of measurement is the electric current measured?" << endl;
			if (answers[7] == "a" or (answers[7] != "a" and answers[7] != "b" and answers[7] != "c"))
			{
				cout << "a) A - ampere " << GREEN << char(251) << RESET << endl;
				cout << "b) V - volt " << endl;
				cout << "c) C - coulomb " << endl;
				if (answers[7] == "a")
				{
					cout << GREEN << "Your answer is correct!" << RESET;
				}
			}
			else if (answers[7] == "b")
			{
				cout << "a) A - ampere " << YELLOW << char(251) << RESET << endl;
				cout << "b) V - volt " << RED << "X" << RESET << endl;
				cout << "c) C - coulomb" << endl;
			}
			else if (answers[7] == "c")
			{
				cout << "a) A - ampere " << YELLOW << char(251) << RESET << endl;
				cout << "b) V - volt " << endl;
				cout << "c) C - coulomb " << RED << "X" << RESET << endl;
			}
			break;
		}

		case 9:
		{
			cout << "In what unit of measurement is the voltage measured?" << endl;
			if (answers[8] == "a")
			{
				cout << "a) A - ampere " << RED << "X" << RESET << endl;
				cout << "b) V - volt " << YELLOW << char(251) << RESET << endl;
				cout << "c) C - coulomb" << endl;
			}
			else if (answers[8] == "b" or (answers[8] != "a" and answers[8] != "b" and answers[8] != "c"))
			{
				cout << "a) A - ampere " << endl;
				cout << "b) V - volt " << GREEN << char(251) << RESET << endl;
				cout << "c) C - coulomb" << endl;
				if (answers[8] == "b")
				{
					cout << GREEN << "Your answer is correct!" << RESET;
				}
			}
			else if (answers[8] == "c")
			{
				cout << "a) A - ampere " << endl;
				cout << "b) V - volt " << YELLOW << char(251) << RESET << endl;
				cout << "c) C - coulomb" RED << "X" << RESET << endl;
			}
			break;
		}

		case 10:
		{
			cout << "In what unit of measurement is the charge passed measured?" << endl;

			if (answers[9] == "a")
			{
				cout << "a) A - ampere " << RED << "X" << RESET << endl;
				cout << "b) V - volt" << endl;
				cout << "c) C - coulomb " << YELLOW << char(251) << RESET << endl;
			}
			else if (answers[9] == "b")
			{
				cout << "a) A - ampere" << endl;
				cout << "b) V - volt" << RED << "X" << RESET << endl;
				cout << "c) C - coulomb " << YELLOW << char(251) << RESET << endl;
			}
			else if (answers[9] == "c" or (answers[9] != "a" and answers[9] != "b" and answers[9] != "c"))
			{
				cout << "a) A - ampere" << endl;
				cout << "b) V - volt" << endl;
				cout << "c) C - coulomb " << GREEN << char(251) << RESET << endl;
				if (answers[9] == "c")
				{
					cout << GREEN << "Your answer is correct!" << RESET;
				}
			}
			break;
		}
		}
		cout << endl << endl << endl;
	}

	int goBack;
	cout << endl << "Enter 1 to go back >> ";
	cin >> goBack;
	if (goBack == 1)
	{
		system("cls");
	}
}

void startTest()
{

start:
	{
		counter = 0;
		int questions[10];

		shuffleQuestions(questions);

		for (int i = 0; i < 10; ++i)
		{
			system("cls");

			cout << "Question " << i + 1 << endl;
			cout << "____________________________________________________" << endl;

			switch (questions[i])
			{
			case 1: questionOne();
				break;
			case 2: questionTwo();
				break;
			case 3: questionThree();
				break;
			case 4: questionFour();
				break;
			case 5: questionFive();
				break;
			case 6: questionSix();
				break;
			case 7: questionSeven();
				break;
			case 8: questionEight();
				break;
			case 9: questionNine();
				break;
			case 10: questionTen();
				break;
			}

		}

		system("cls");
		cout << " Your score is " << counter * 10 << "%" << endl << endl;
		int nextChoice;

		cout << " What do you want to do now?" << endl;
		cout << " __________________________________________" << endl;
		cout << " 1) review" << endl;
		cout << " 2) retake the test" << endl;
		cout << " 3) go back" << endl << endl;
		cout << " Select >> ";

		cin >> nextChoice;
		if (nextChoice == 1)
		{
			reviewTest(questions);
		}
		else if (nextChoice == 2)
		{
			goto start;
		}
		else if (nextChoice == 3)
		{
			system("cls");
		}
	}
}