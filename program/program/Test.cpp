#include <iostream>
#include <iomanip>
#include "Test.h"

using namespace std;

char answers[10];

int counter = 0;

void questionOne()
{
	cout << "What do you measure with ammeter?" << endl;
	cout << "a) electric current" << endl;
	cout << "b) resistance" << endl;
	cout << "c) voltage" << endl;

	cin >> answers[0];
	if (answers[0] == 'a')
	{
		counter++;
	}
}

void questionTwo()
{
	cout << "What do you measure with voltmeter?" << endl;
	cout << "a) electric current" << endl;
	cout << "b) resistance" << endl;
	cout << "c) voltage" << endl;
	
	cin >> answers[1];
	if (answers[1] == 'c')
	{
		counter++;
		
	}
}

void questionThree()
{
	cout << "What do you measure with resistor?" << endl;
	cout << "a) electric current" << endl;
	cout << "b) resistance" << endl;
	cout << "c) voltage" << endl;
	
	cin >> answers[2];
	if (answers[2] == 'b')
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

	cin >> answers[3];
	if (answers[3] == 'c')
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
	cout << "b) False" << endl;
	
	cin >> answers[4];
	if (answers[4] == 'a')
	{
		counter++;
	}
}

void questionSix()
{
	cout << "q = I * R" << endl;

	cout << "a) True" << endl;
	cout << "b) False" << endl;
	
	cin >> answers[5];
	if (answers[5] == 'b')
	{
		counter++;
	}
}

void questionSeven()
{
	cout << "U = R * I" << endl << endl;

	cout << "a) True" << endl;
	cout << "b) False" << endl;
	
	cin >> answers[6];
	if (answers[6] == 'a')
	{
		counter++;
		
	}
}

void questionEight()
{
	cout << "In what unit of measurement is the electric current measured?" << endl;

	cout << "a) A - ampere" << endl;
	cout << "b) V - volt" << endl;
	cout << "c) C - coulomb" << endl;
	cin >> answers[7];
	if (answers[7] == 'a')
	{
		counter++;
		
	}
}

void questionNine()
{
	cout << "In what unit of measurement is the voltage measured?" << endl;

	cout << "a) A - ampere" << endl;
	cout << "b) V - volt" << endl;
	cout << "c) C - coulomb" << endl;
	
	cin >> answers[8];
	if (answers[8] == 'b')
	{
		counter++;
		
	}
}

void questionTen()
{
	cout << "In what unit of measurement is the charge passed measured?" << endl;

	cout << "a) A - ampere" << endl;
	cout << "b) V - volt" << endl;
	cout << "c) C - coulomb" << endl;
	cin >> answers[9];
	if (answers[9] == 'c')
	{
		counter++;
		
	}
}
void shuffleQuestions(int arr[10])
{
	int shuffledQuestions[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	srand(time(NULL));
	for (int i = 9; i > 0; --i)
	{
		int j = rand() % i;
		int temp = shuffledQuestions[i];
		shuffledQuestions[i] = shuffledQuestions[j];
		shuffledQuestions[j] = temp;
	}

	for (int i = 0; i < 10; ++i)
	{
		arr[i] = shuffledQuestions[i];
	}
}

void reviewTest()
{
	system("cls");

	cout << "Question 1 " << endl;
	cout << "_____________________________" << endl;
	if (answers[0] == 'a')
	{
		cout << "What do you measure with ammeter?" << endl;
		cout << "a) electric current " << GREEN << char(251) << RESET << endl;
		cout << "b) resistance " << endl;
		cout << "c) voltage " << endl;
	}
	else if (answers[0] == 'b')
	{
		cout << "What do you measure with ammeter?" << endl;
		cout << "a) electric current " << YELLOW << char(251) << RESET << endl;
		cout << "b) resistance " << RED << "X"<< RESET << endl;
		cout << "c) voltage " << endl;
	}
	else if (answers[0] == 'c')
	{
		cout << "What do you measure with ammeter?" << endl;
		cout << "a) electric current " << YELLOW << char(251) << RESET << endl;
		cout << "b) resistance" << endl;
		cout << "c) voltage " << RED << "X" << RESET << endl;
	}

	cout << endl;
	cout << "Question 2 " << endl;
	cout << "_____________________________" << endl;
	if (answers[1] == 'a')
	{
		cout << "What do you measure with voltmeter?" << endl;
		cout << "a) electric current " << RED << "X" << RESET << endl;
		cout << "b) resistance" << endl;
		cout << "c) voltage " << YELLOW << char(251) << RESET << endl;
	}
	else if (answers[1] == 'b')
	{
		cout << "What do you measure with voltmeter?" << endl;
		cout << "a) electric current " << endl;
		cout << "b) resistance" << RED << "X" << RESET << endl;
		cout << "c) voltage " << YELLOW << char(251) << RESET << endl;
	}
	else if (answers[1] == 'c')
	{
		cout << "What do you measure with voltmeter?" << endl;
		cout << "a) electric current " << endl;
		cout << "b) resistance " << endl;
		cout << "c) voltage " << GREEN << char(251) << RESET << endl;
	}

	cout << endl;
	cout << "Question 3 " << endl;
	cout << "_____________________________" << endl;
	if (answers[2] == 'a')
	{
		cout << "What do you measure with resistor?" << endl;
		cout << "a) electric current " << RED << "X" << RESET << endl;
		cout << "b) resistance " << YELLOW << char(251) << RESET << endl;
		cout << "c) voltage " << endl;
	}
	else if (answers[2] == 'b') 
	{
		cout << "What do you measure with resistor?" << endl;
		cout << "a) electric current " << endl;
		cout << "b) resistance " << GREEN << char(251) << RESET << endl;
		cout << "c) voltage " << endl;
	}
	else if (answers[2] == 'c')
	{
		cout << "What do you measure with resistor?" << endl;
		cout << "a) electric current"  << endl;
		cout << "b) resistance " << YELLOW << char(251) << RESET << endl;
		cout << "c) voltage " << RED << "X" << RESET << endl;
	}

	cout << endl;
	cout << "Question 4 " << endl;
	cout << "_____________________________" << endl;
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

	if (answers[3] == 'a')
	{
		cout << "a) 1-ammeter, 2-voltmeter, 3-lamp "  << RED << "X" << RESET << endl;
		cout << "b) 1-voltmeter, 2-ammeter, 3-lamp " << endl;
		cout << "c) 1-lamp, 2-voltmeter, 3-ammeter " << YELLOW << char(251) << RESET << endl;
	}
	else if (answers[3] == 'b')
	{
		cout << "a) 1-ammeter, 2-voltmeter, 3-lamp " <<  endl;
		cout << "b) 1-voltmeter, 2-ammeter, 3-lamp " << RED << "X" << RESET << endl;
		cout << "c) 1-lamp, 2-voltmeter, 3-ammeter " << YELLOW << char(251) << RESET << endl;
	}
	else if (answers[3] == 'c')
	{
		cout << "a) 1-ammeter, 2-voltmeter, 3-lamp " << endl;
		cout << "b) 1-voltmeter, 2-ammeter, 3-lamp " << endl;
		cout << "c) 1-lamp, 2-voltmeter, 3-ammeter " << GREEN << char(251) << RESET << endl;
	}

	cout << endl;
	cout << "Question 5 " << endl;
	cout << "_____________________________" << endl;

	if (answers[4] == 'a')
	{
		cout << setw(5) << "q" << endl;
		cout << "I = " << char(196) << " is a formula for finding electric current" << endl;
		cout << setw(5) << "t" << endl << endl;

		cout << "a) True " << GREEN << char(251) << RESET << endl;
		cout << "b) False" << endl;
	}
	else if (answers[4] == 'b')
	{
		cout << setw(5) << "q" << endl;
		cout << "I = " << char(196) << " is a formula for finding electric current" << endl;
		cout << setw(5) << "t" << endl << endl;

		cout << "a) True " << YELLOW << char(251) << RESET << endl;
		cout << "b) False " << RED << "X" << RESET << endl;
	} 

	cout << endl;
	cout << "Question 6 " << endl;
	cout << "_____________________________" << endl;

	if (answers[5] == 'a')
	{
		cout << "q = I * R" << endl;

		cout << "a) True" << RED << "X" << RESET << endl;
		cout << "b) False " <<YELLOW << char(251) << RESET << endl;
	}
	else if (answers[5] == 'b')
	{
		cout << "q = I * R" << endl;

		cout << "a) True" << endl;
		cout << "b) False " << GREEN << char(251) << RESET << endl;
	}

	cout << endl;
	cout << "Question 7 " << endl;
	cout << "_____________________________" << endl;

	if (answers[6] == 'a')
	{
		cout << "U = R * I" << endl << endl;

		cout << "a) True " << GREEN << char(251) << RESET << endl;
		cout << "b) False" << endl;
	}
	else if (answers[7] == 'b')
	{
		cout << "U = R * I" << endl << endl;

		cout << "a) True " << YELLOW << char(251) << RESET << endl;
		cout << "b) False " << RED << "X" << RESET << endl;
	}

	cout << endl;
	cout << "Question 8 " << endl;
	cout << "_____________________________" << endl;

	if (answers[7] == 'a')
	{
		cout << "In what unit of measurement is the electric current measured?" << endl;

		cout << "a) A - ampere " << GREEN << char(251) << RESET << endl;
		cout << "b) V - volt " << endl;
		cout << "c) C - coulomb " << endl;
	}
	else if (answers[7] == 'b')
	{
		cout << "In what unit of measurement is the electric current measured?" << endl;
		cout << "a) A - ampere " << YELLOW << char(251) << RESET << endl;
		cout << "b) V - volt " << RED << "X" << RESET << endl;
		cout << "c) C - coulomb" << endl;
	}
	else if (answers[7] == 'c')
	{
		cout << "In what unit of measurement is the electric current measured?" << endl;
		cout << "a) A - ampere " << YELLOW << char(251) << RESET << endl;
		cout << "b) V - volt " <<  endl;
		cout << "c) C - coulomb " << RED << "X" << RESET << endl;
	}

	cout << endl;
	cout << "Question 9 " << endl;
	cout << "_____________________________" << endl;

	if (answers[8] == 'a')
	{
		cout << "In what unit of measurement is the voltage measured?" << endl;

		cout << "a) A - ampere " << RED << "X" << RESET << endl;
		cout << "b) V - volt " << YELLOW << char(251) << RESET << endl;
		cout << "c) C - coulomb" << endl;
	}
	else if (answers[8] == 'b')
	{
		cout << "In what unit of measurement is the voltage measured?" << endl;
		cout << "a) A - ampere " << endl;
		cout << "b) V - volt " << GREEN << char(251) << RESET << endl;
		cout << "c) C - coulomb" << endl;
	}
	else if (answers[8] == 'c')
	{
		cout << "In what unit of measurement is the voltage measured?" << endl;
		cout << "a) A - ampere " << endl;
		cout << "b) V - volt " << YELLOW << char(251) << RESET << endl;
		cout << "c) C - coulomb" RED << "X"  << RESET << endl;
	}

	cout << endl;
	cout << "Question 10 " << endl;
	cout << "_____________________________" << endl;

	if (answers[9] == 'a')
	{
		cout << "In what unit of measurement is the charge passed measured?" << endl;

		cout << "a) A - ampere " << RED << "X" << RESET << endl;
		cout << "b) V - volt" << endl;
		cout << "c) C - coulomb "  << YELLOW << char(251) << RESET << endl;
	}
	else if (answers[9] == 'b')
	{
		cout << "In what unit of measurement is the charge passed measured?" << endl;

		cout << "a) A - ampere" << endl;
		cout << "b) V - volt" << RED << "X" << RESET << endl;
		cout << "c) C - coulomb " << YELLOW << char(251) << RESET << endl;
	}
	else if (answers[9] == 'c')
	{
		cout << "In what unit of measurement is the charge passed measured?" << endl;

		cout << "a) A - ampere" << endl;
		cout << "b) V - volt" << endl;
		cout << "c) C - coulomb " << GREEN << char(251) << RESET << endl;
	}

	int goBack;
	cout << endl <<"Write 1 to go back >> ";
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
		cout << "Your score is " << counter * 10 << "%" << endl << endl;
		int nextChoice;

		cout << "What do you want to do now?" << endl;
		cout << "__________________________________________" << endl;
		cout << " 1) review" << endl;
		cout << " 2) retake the test" << endl;
		cout << " 3) go back" << endl;
		cout << "Select >> ";

		cin >> nextChoice;
		if (nextChoice == 1)
		{
			reviewTest();
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