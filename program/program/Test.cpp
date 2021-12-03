#include <iostream>
#include <iomanip>
#include "Test.h"

using namespace std;

string answers[10];
int countRightAnswers = 0;
int countQuestions = 1;
bool trueFalseQuestion = 0;
int questions[10];

bool returnError(string response)
{
	if (trueFalseQuestion)
	{
		if (response != "a" && response != "b")
		{
			return 1;
		}
		return 0;
	}
	else
	{
		if (response != "a" && response != "b" && response != "c")
		{
			return 1;
		}
		return 0;
	}
}

void displayMenuAfterTheTest()
{
	system("cls");
	cout << " Your score is " << countRightAnswers * 10 << "%" << endl << endl;
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
		displayMenuAfterTheTest();
	}
	else if (nextChoice == 2)
	{
		countQuestions = 1;
		startTest();
	}
	else if (nextChoice == 3)
	{
		system("cls");
	}
	else
	{
		displayMenuAfterTheTest();
	}

}

void answerQuestionOne()
{
	trueFalseQuestion = 0;
	cout << "Question "<< countQuestions << endl;
	cout << "_____________________________" << endl << endl;

	cout << "What do you measure with ammeter?" << endl << endl;
	cout << "a) electric current" << endl;
	cout << "b) resistance" << endl;
	cout << "c) voltage" << endl << endl;

	cout << "Enter your answer >> ";

	cin >> answers[0];
	if (returnError(answers[0]))
	{
		system("cls");
		answerQuestionOne();
	}
	else if (answers[0] == "a")
	{
		countRightAnswers++;
	}
}

void answerQuestionTwo()
{
	trueFalseQuestion = 0;
	cout << "Question " << countQuestions << endl;
	cout << "_____________________________" << endl << endl;

	cout << "What do you measure with voltmeter?" << endl << endl;
	cout << "a) electric current" << endl;
	cout << "b) resistance" << endl;
	cout << "c) voltage" << endl << endl;

	cout << "Enter your answer >> ";

	cin >> answers[1];
	if (returnError(answers[1]))
	{
		system("cls");
		answerQuestionTwo();
	}
	else if (answers[1] == "c")
	{
		countRightAnswers++;
	}
}

void answerQuestionThree()
{
	trueFalseQuestion = 0;
	cout << "Question " << countQuestions << endl;
	cout << "_____________________________" << endl << endl;

	cout << "What do you measure with resistor?" << endl << endl;
	cout << "a) electric current" << endl;
	cout << "b) resistance" << endl;
	cout << "c) voltage" << endl << endl;

	cout << "Enter your answer >> ";

	cin >> answers[2];
	if (returnError(answers[2]))
	{
		system("cls");
		answerQuestionThree();
	}
	else if (answers[2] == "b")
	{
		countRightAnswers++;
	}
}

void answerQuestionFour()
{
	trueFalseQuestion = 0;
	cout << "Question " << countQuestions << endl;
	cout << "_____________________________" << endl << endl;

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
	if (returnError(answers[3]))
	{
		system("cls");
		answerQuestionFour();
	}
	else if (answers[3] == "c")
	{
		countRightAnswers++;
	}
}

void answerQuestionFive()
{
	trueFalseQuestion = 1;
	cout << "Question " << countQuestions << endl;
	cout << "_____________________________" << endl << endl;

	cout << setw(5) << "q" << endl;
	cout << "I = " << char(196) << " is a formula for finding electric current" << endl;
	cout << setw(5) << "t" << endl << endl;

	cout << "a) True" << endl;
	cout << "b) False" << endl << endl;

	cout << "Enter your answer >> ";

	cin >> answers[4];
	if (returnError(answers[4]))
	{
		system("cls");
		answerQuestionFive();
	}
	else if (answers[4] == "a")
	{
		countRightAnswers++;
	}
}

void answerQuestionSix()
{
	trueFalseQuestion = 1;
	cout << "Question " << countQuestions << endl;
	cout << "_____________________________" << endl << endl;

	cout << "q = I * R" << endl << endl;

	cout << "a) True" << endl;
	cout << "b) False" << endl << endl;

	cout << "Enter your answer >> ";

	cin >> answers[5];
	if (returnError(answers[5]))
	{
		system("cls");
		answerQuestionSix();
	}
	else if (answers[5] == "b")
	{
		countRightAnswers++;
	}
}

void answerQuestionSeven()
{
	trueFalseQuestion = 1;
	cout << "Question " << countQuestions << endl;
	cout << "_____________________________" << endl << endl;

	cout << "U = R * I" << endl << endl;

	cout << "a) True" << endl;
	cout << "b) False" << endl << endl;

	cout << "Enter your answer >> ";

	cin >> answers[6];
	if (returnError(answers[6]))
	{
		system("cls");
		answerQuestionSeven();
	}
	else if (answers[6] == "a")
	{
		countRightAnswers++;
	}
}

void answerQuestionEight()
{
	trueFalseQuestion = 0;
	cout << "Question " << countQuestions << endl;
	cout << "_____________________________" << endl << endl;

	cout << "In what unit of measurement is the electric current measured?" << endl << endl;

	cout << "a) A - ampere" << endl;
	cout << "b) V - volt" << endl;
	cout << "c) C - coulomb" << endl << endl;

	cout << "Enter your answer >> ";

	cin >> answers[7];
	if (returnError(answers[7]))
	{
		system("cls");
		answerQuestionEight();
	}
	else if (answers[7] == "a")
	{
		countRightAnswers++;
	}
}

void answerQuestionNine()
{
	trueFalseQuestion = 0;
	cout << "Question " << countQuestions << endl;
	cout << "_____________________________" << endl << endl;

	cout << "In what unit of measurement is the voltage measured?" << endl << endl;

	cout << "a) A - ampere" << endl;
	cout << "b) V - volt" << endl;
	cout << "c) C - coulomb" << endl << endl;

	cout << "Enter your answer >> ";

	cin >> answers[8];
	if (returnError(answers[8]))
	{
		system("cls");
		answerQuestionNine();
	}
	else if (answers[8] == "b")
	{
		countRightAnswers++;
	}
}

void answerQuestionTen()
{
	trueFalseQuestion = 0;
	cout << "Question " << countQuestions << endl;
	cout << "_____________________________" << endl << endl;

	cout << "In what unit of measurement is the charge passed measured?" << endl << endl;;

	cout << "a) A - ampere" << endl;
	cout << "b) V - volt" << endl;
	cout << "c) C - coulomb" << endl << endl;

	cout << "Enter your answer >> ";

	cin >> answers[9];
	if (returnError(answers[9]))
	{
		system("cls");
		answerQuestionTen();
	}
	else if (answers[9] == "c")
	{
		countRightAnswers++;
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
			if (answers[0] == "a")
			{
				cout << "a) electric current " << GREEN << char(251) << RESET << endl;
				cout << "b) resistance " << endl;
				cout << "c) voltage " << endl;
				cout << GREEN << "Your answer is correct!" << RESET << endl << endl;
			}
			else if (answers[0] == "b")
			{
				cout << "a) electric current " << YELLOW << char(251) << RESET << endl;
				cout << "b) resistance " << RED << "X" << RESET << endl;
				cout << "c) voltage " << endl;
				cout << RED << "Your answer is wrong!" << RESET << endl << endl;
			}
			else if (answers[0] == "c")
			{
				cout << "a) electric current " << YELLOW << char(251) << RESET << endl;
				cout << "b) resistance" << endl;
				cout << "c) voltage " << RED << "X" << RESET << endl;
				cout << RED << "Your answer is wrong!" << RESET << endl << endl;
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
				cout << RED << "Your answer is wrong!" << RESET << endl << endl;
			}
			else if (answers[1] == "b")
			{
				cout << "a) electric current " << endl;
				cout << "b) resistance" << RED << "X" << RESET << endl;
				cout << "c) voltage " << YELLOW << char(251) << RESET << endl;
				cout << RED << "Your answer is wrong!" << RESET << endl << endl;
			}
			else if (answers[1] == "c")
			{
				cout << "a) electric current " << endl;
				cout << "b) resistance " << endl;
				cout << "c) voltage " << GREEN << char(251) << RESET << endl;
				cout << GREEN << "Your answer is correct!" << RESET << endl << endl;
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
				cout << RED << "Your answer is wrong!" << RESET << endl << endl;
			}
			else if (answers[2] == "b")
			{
				cout << "a) electric current " << endl;
				cout << "b) resistance " << GREEN << char(251) << RESET << endl;
				cout << "c) voltage " << endl;
				cout << GREEN << "Your answer is correct!" << RESET << endl << endl;

			}
			else if (answers[2] == "c")
			{
				cout << "a) electric current" << endl;
				cout << "b) resistance " << YELLOW << char(251) << RESET << endl;
				cout << "c) voltage " << RED << "X" << RESET << endl;
				cout << RED << "Your answer is wrong!" << RESET << endl << endl;
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
				cout << RED << "Your answer is wrong!" << RESET << endl << endl;
			}
			else if (answers[3] == "b")
			{
				cout << "a) 1-ammeter, 2-voltmeter, 3-lamp " << endl;
				cout << "b) 1-voltmeter, 2-ammeter, 3-lamp " << RED << "X" << RESET << endl;
				cout << "c) 1-lamp, 2-voltmeter, 3-ammeter " << YELLOW << char(251) << RESET << endl;
				cout << RED << "Your answer is wrong!" << RESET << endl << endl;
			}
			else if (answers[3] == "c")
			{
				cout << "a) 1-ammeter, 2-voltmeter, 3-lamp " << endl;
				cout << "b) 1-voltmeter, 2-ammeter, 3-lamp " << endl;
				cout << "c) 1-lamp, 2-voltmeter, 3-ammeter " << GREEN << char(251) << RESET << endl;
				cout << GREEN << "Your answer is correct!" << RESET << endl << endl;
			}
			break;
		}

		case 5:
		{
			cout << setw(5) << "q" << endl;
			cout << "I = " << char(196) << " is a formula for finding electric current" << endl;
			cout << setw(5) << "t" << endl << endl;

			if (answers[4] == "a")
			{
				cout << "a) True " << GREEN << char(251) << RESET << endl;
				cout << "b) False" << endl;
				cout << GREEN << "Your answer is correct!" << RESET << endl << endl;

			}
			else if (answers[4] == "b")
			{
				cout << "a) True " << YELLOW << char(251) << RESET << endl;
				cout << "b) False " << RED << "X" << RESET << endl;
				cout << RED << "Your answer is wrong!" << RESET << endl << endl;
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
				cout << RED << "Your answer is wrong!" << RESET << endl << endl;
			}
			else if (answers[5] == "b")
			{
				cout << "a) True" << endl;
				cout << "b) False " << GREEN << char(251) << RESET << endl;
				cout << GREEN << "Your answer is correct!" << RESET << endl << endl;
			}
			break;
		}

		case 7:
		{
			cout << "U = R * I" << endl << endl;
			if (answers[6] == "a")
			{
				cout << "a) True " << GREEN << char(251) << RESET << endl;
				cout << "b) False" << endl;
				cout << GREEN << "Your answer is correct!" << RESET << endl << endl;
			}
			else if (answers[6] == "b")
			{
				cout << "a) True " << YELLOW << char(251) << RESET << endl;
				cout << "b) False " << RED << "X" << RESET << endl;
				cout << RED << "Your answer is wrong!" << RESET << endl << endl;
			}
			break;
		}

		case 8:
		{
			cout << "In what unit of measurement is the electric current measured?" << endl;
			if (answers[7] == "a")
			{
				cout << "a) A - ampere " << GREEN << char(251) << RESET << endl;
				cout << "b) V - volt " << endl;
				cout << "c) C - coulomb " << endl;
				cout << GREEN << "Your answer is correct!" << RESET << endl << endl;
			}
			else if (answers[7] == "b")
			{
				cout << "a) A - ampere " << YELLOW << char(251) << RESET << endl;
				cout << "b) V - volt " << RED << "X" << RESET << endl;
				cout << "c) C - coulomb" << endl;
				cout << RED << "Your answer is wrong!" << RESET << endl << endl;
			}
			else if (answers[7] == "c")
			{
				cout << "a) A - ampere " << YELLOW << char(251) << RESET << endl;
				cout << "b) V - volt " << endl;
				cout << "c) C - coulomb " << RED << "X" << RESET << endl;
				cout << RED << "Your answer is wrong!" << RESET << endl << endl;
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
				cout << RED << "Your answer is wrong!" << RESET << endl << endl;
			}
			else if (answers[8] == "b")
			{
				cout << "a) A - ampere " << endl;
				cout << "b) V - volt " << GREEN << char(251) << RESET << endl;
				cout << "c) C - coulomb" << endl;
				cout << GREEN << "Your answer is correct!" << RESET << endl << endl;
				
			}
			else if (answers[8] == "c")
			{
				cout << "a) A - ampere " << endl;
				cout << "b) V - volt " << YELLOW << char(251) << RESET << endl;
				cout << "c) C - coulomb" RED << "X" << RESET << endl;
				cout << RED << "Your answer is wrong!" << RESET << endl << endl;
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
				cout << RED << "Your answer is wrong!" << RESET << endl << endl;
			}
			else if (answers[9] == "b")
			{
				cout << "a) A - ampere" << endl;
				cout << "b) V - volt" << RED << "X" << RESET << endl;
				cout << "c) C - coulomb " << YELLOW << char(251) << RESET << endl;
				cout << RED << "Your answer is wrong!" << RESET << endl << endl;
			}
			else if (answers[9] == "c")
			{
				cout << "a) A - ampere" << endl;
				cout << "b) V - volt" << endl;
				cout << "c) C - coulomb " << GREEN << char(251) << RESET << endl;
				cout << GREEN << "Your answer is correct!" << RESET << endl << endl;
			}
			break;
		}
		}
	}
	cout << endl << endl;
	system("PAUSE");

}

void startTest()
{
	countRightAnswers = 0;
	countQuestions = 0;
	
	shuffleQuestions(questions);

	for (int i = 0; i < 10; ++i)
	{
		system("cls");

		switch (questions[i])
		{
		case 1: answerQuestionOne();
			break;
		case 2: answerQuestionTwo();
		break;
		case 3: answerQuestionThree();
			break;
		case 4: answerQuestionFour();
			break;
		case 5: answerQuestionFive();
			break;
		case 6: answerQuestionSix();
			break;
		case 7: answerQuestionSeven();
			break;
		case 8: answerQuestionEight();
			break;
		case 9: answerQuestionNine();
			break;
		case 10: answerQuestionTen();
			break;
		}
		countQuestions++;
	}
	displayMenuAfterTheTest();


}