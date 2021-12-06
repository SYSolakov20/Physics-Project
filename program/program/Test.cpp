#include <iostream>
#include <iomanip>
#include "Test.h"

using namespace std;

string answers[10];
int countRightAnswers = 0;
int countQuestions = 1;
int questions[10];

// prints menu after the test 
void displayMenuAfterTheTest()
{
	system("cls");
	cout << endl << endl;
	switch (countRightAnswers)
	{
	case 0:
	{
		cout << "     _  _  _____  __  __  ____      ___   ___  _____  ____  ____   _        ___   _  _  " << endl;
		cout << "    ( \\/ )(  _  )(  )(  )(  _ \\    / __) / __)(  _  )(  _ \\( ___) (_)      / _ \\ (_)/ ) " << endl;
		cout << "     \\  /  )(_)(  )(__)(  )   /    \\__ \\( (__  )(_)(  )   / )__)   _      ( (_) )  / /_ " << endl;
		cout << "     (__) (_____)(______)(_)\\_)    (___/ \\___)(_____)(_)\\_)(____) (_)      \\___/  (_/(_)" << endl;
		break;
	}

	case 1:
	{
		cout << "     _  _  _____  __  __  ____      ___   ___  _____  ____  ____   _       __   ___   _  _  " << endl;
		cout << "    ( \\/ )(  _  )(  )(  )(  _ \\    / __) / __)(  _  )(  _ \\( ___) (_)     /  ) / _ \\ (_)/ ) " << endl;
		cout << "     \\  /  )(_)(  )(__)(  )   /    \\__ \\( (__  )(_)(  )   / )__)   _       )( ( (_) )  / /_ " << endl;
		cout << "     (__) (_____)(______)(_)\\_)    (___/ \\___)(_____)(_)\\_)(____) (_)     (__) \\___/  (_/(_)" << endl;
		break;
	}

	case 2:
	{
		cout << "     _  _  _____  __  __  ____      ___   ___  _____  ____  ____   _       ___    ___   _  _  " << endl;
		cout << "    ( \\/ )(  _  )(  )(  )(  _ \\    / __) / __)(  _  )(  _ \\( ___) (_)     (__ \\  / _ \\ (_)/ ) " << endl;
		cout << "     \\  /  )(_)(  )(__)(  )   /    \\__ \\( (__  )(_)(  )   / )__)   _       / _/ ( (_) )  / /_ " << endl;
		cout << "     (__) (_____)(______)(_)\\_)    (___/ \\___)(_____)(_)\\_)(____) (_)     (____) \\___/  (_/(_)" << endl;
		break;
	}

	case 3:
	{
		cout << "     _  _  _____  __  __  ____      ___   ___  _____  ____  ____   _       ___   ___   _  _  " << endl;
		cout << "    ( \\/ )(  _  )(  )(  )(  _ \\    / __) / __)(  _  )(  _ \\( ___) (_)     (__ ) / _ \\ (_)/ ) " << endl;
		cout << "     \\  /  )(_)(  )(__)(  )   /    \\__ \\( (__  )(_)(  )   / )__)   _       (_ \\( (_) )  / /_ " << endl;
		cout << "     (__) (_____)(______)(_)\\_)    (___/ \\___)(_____)(_)\\_)(____) (_)     (___/ \\___/  (_/(_)" << endl;
		break;
	}

	case 4:
	{
		cout << "     _  _  _____  __  __  ____      ___   ___  _____  ____  ____   _        __    ___   _  _" << endl;
		cout << "    ( \\/ )(  _  )(  )(  )(  _ \\    / __) / __)(  _  )(  _ \\( ___) (_)      /. |  / _ \\ (_)/ )" << endl;
		cout << "     \\  /  )(_)(  )(__)(  )   /    \\__ \\( (__  )(_)(  )   / )__)   _      (_  _)( (_) )  / /_" << endl;
		cout << "     (__) (_____)(______)(_)\\_)    (___/ \\___)(_____)(_)\\_)(____) (_)       (_)  \\___/  (_/(_)" << endl;
		break;
	}

	case 5:
	{
		cout << "     _  _  _____  __  __  ____      ___   ___  _____  ____  ____   _       ___   ___   _  _" << endl;
		cout << "    ( \\/ )(  _  )(  )(  )(  _ \\    / __) / __)(  _  )(  _ \\( ___) (_)     | __) / _ \\ (_)/ )" << endl;
		cout << "     \\  /  )(_)(  )(__)(  )   /    \\__ \\( (__  )(_)(  )   / )__)   _      |__ \\( (_) )  / /_" << endl;
		cout << "     (__) (_____)(______)(_)\\_)    (___/ \\___)(_____)(_)\\_)(____) (_)     (___/ \\___/  (_/(_)" << endl;
		break;
	}

	case 6:
	{
		cout << "     _  _  _____  __  __  ____      ___   ___  _____  ____  ____   _        _    ___   _  _" << endl;
		cout << "    ( \\/ )(  _  )(  )(  )(  _ \\    / __) / __)(  _  )(  _ \\( ___) (_)      / )  / _ \\ (_)/ )" << endl;
		cout << "     \\  /  )(_)(  )(__)(  )   /    \\__ \\( (__  )(_)(  )   / )__)   _      / _ \\( (_) )  / /_" << endl;
		cout << "     (__) (_____)(______)(_)\\_)    (___/ \\___)(_____)(_)\\_)(____) (_)     \\___/ \\___/  (_/(_)" << endl;
		break;
	}

	case 7:
	{
		cout << "     _  _  _____  __  __  ____      ___   ___  _____  ____  ____   _       ___   ___   _  _" << endl;
		cout << "    ( \\/ )(  _  )(  )(  )(  _ \\    / __) / __)(  _  )(  _ \\( ___) (_)     (__ ) / _ \\ (_)/ )" << endl;
		cout << "     \\  /  )(_)(  )(__)(  )   /    \\__ \\( (__  )(_)(  )   / )__)   _       / / ( (_) )  / /_" << endl;
		cout << "     (__) (_____)(______)(_)\\_)    (___/ \\___)(_____)(_)\\_)(____) (_)     (_/   \\___/  (_/(_)" << endl;
		break;
	}

	case 8:
	{
		cout << "     _  _  _____  __  __  ____      ___   ___  _____  ____  ____   _       ___   ___   _  _" << endl;
		cout << "    ( \\/ )(  _  )(  )(  )(  _ \\    / __) / __)(  _  )(  _ \\( ___) (_)     ( _ ) / _ \\ (_)/ )" << endl;
		cout << "     \\  /  )(_)(  )(__)(  )   /    \\__ \\( (__  )(_)(  )   / )__)   _      / _ \\( (_) )  / /_" << endl;
		cout << "     (__) (_____)(______)(_)\\_)    (___/ \\___)(_____)(_)\\_)(____) (_)     \\___/ \\___/  (_/(_)" << endl;
		break;
	}

	case 9:
	{
		cout << "     _  _  _____  __  __  ____      ___   ___  _____  ____  ____   _       ___   ___   _  _" << endl;
		cout << "    ( \\/ )(  _  )(  )(  )(  _ \\    / __) / __)(  _  )(  _ \\( ___) (_)     / _ \\ / _ \\ (_)/ )" << endl;
		cout << "     \\  /  )(_)(  )(__)(  )   /    \\__ \\( (__  )(_)(  )   / )__)   _      \\_  /( (_) )  / /_" << endl;
		cout << "     (__) (_____)(______)(_)\\_)    (___/ \\___)(_____)(_)\\_)(____) (_)      (_/  \\___/  (_/(_)" << endl;
		break;
	}

	case 10:
	{
		cout << "     _  _  _____  __  __  ____      ___   ___  _____  ____  ____   _       __   ___    ___   _  _" << endl;
		cout << "    ( \\/ )(  _  )(  )(  )(  _ \\    / __) / __)(  _  )(  _ \\( ___) (_)     /  ) / _ \\  / _ \\ (_)/ )" << endl;
		cout << "     \\  /  )(_)(  )(__)(  )   /    \\__ \\( (__  )(_)(  )   / )__)   _       )( ( (_) )( (_) )  / /_" << endl;
		cout << "     (__) (_____)(______)(_)\\_)    (___/ \\___)(_____)(_)\\_)(____) (_)     (__) \\___/  \\___/  (_/(_)" << endl;
		break;
	}
	}
	cout << endl << endl;
	string nextChoice;
	cout << "    What do you want to do now?" << endl;
	cout << "    __________________________________________\n" << endl;
	cout << "    1) review" << endl;
	cout << "    2) retake the test" << endl;
	cout << "    3) go back" << endl << endl;
	cout << "    Select >> ";

	cin >> nextChoice;
	if (nextChoice == "1")
	{
		reviewTest(questions);
		displayMenuAfterTheTest();
	}
	else if (nextChoice == "2")
	{
		countQuestions = 1;
		startTest();
	}
	else if (nextChoice == "3")
	{
		system("cls");
	}
	else
	{
		displayMenuAfterTheTest();
	}

}

// displays the first question 
void answerQuestionOne()
{
	cout << endl;
	cout << "   Question " << countQuestions << endl;
	cout << "   _____________________________" << endl << endl;

	cout << "   What do you measure with ammeter?" << endl << endl;
	cout << "   a) electric current" << endl;
	cout << "   b) resistance" << endl;
	cout << "   c) voltage" << endl << endl;

	cout << "   Enter your answer >> ";

	cin >> answers[0];
	if (answers[0] != "a" && answers[0] != "b" && answers[0] != "c")
	{
		system("cls");
		answerQuestionOne();
	}
	else if (answers[0] == "a")
	{
		countRightAnswers++;
	}
}

// displays the second question 
void answerQuestionTwo()
{
	cout << endl;
	cout << "   Question " << countQuestions << endl;
	cout << "   _____________________________" << endl << endl;

	cout << "   What do you measure with voltmeter?" << endl << endl;
	cout << "   a) electric current" << endl;
	cout << "   b) resistance" << endl;
	cout << "   c) voltage" << endl << endl;

	cout << "   Enter your answer >> ";

	cin >> answers[1];
	if (answers[1] != "a" && answers[1] != "b" && answers[1] != "c")
	{
		system("cls");
		answerQuestionTwo();
	}
	else if (answers[1] == "c")
	{
		countRightAnswers++;
	}
}

// displays the third question 
void answerQuestionThree()
{
	cout << endl;
	cout << "   Question " << countQuestions << endl;
	cout << "   _____________________________" << endl << endl;

	cout << "   What do you measure with resistor?" << endl << endl;
	cout << "   a) electric current" << endl;
	cout << "   b) resistance" << endl;
	cout << "   c) voltage" << endl << endl;

	cout << "   Enter your answer >> ";

	cin >> answers[2];
	if (answers[2] != "a" && answers[2] != "b" && answers[2] != "c")
	{
		system("cls");
		answerQuestionThree();
	}
	else if (answers[2] == "b")
	{
		countRightAnswers++;
	}
}

// displays the fourth question 
void answerQuestionFour()
{
	cout << endl;
	cout << "   Question " << countQuestions << endl;
	cout << "   _____________________________" << endl << endl;

	cout << "    " << char(201);
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
	cout << "    " << char(186) << setw(36) << char(186) << endl;
	cout << "    " << char(186) << setw(36) << char(186) << endl;
	cout << "    " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
	cout << "    " << char(186) << setw(36) << char(186) << setw(7) << char(186) << endl;
	cout << "   " << RED << " / " << RESET << setw(44) << "( 1 )  ( 2 )" << endl;
	cout << "    " << char(186) << setw(36) << char(186) << setw(7) << char(186) << endl;
	cout << "    " << char(186) << setw(36) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
	cout << "    " << char(186) << setw(36) << char(186) << endl;
	cout << "    " << char(186) << setw(36) << char(186) << endl;
	cout << "    " << char(200);
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

	cout << "   a) 1-ammeter, 2-voltmeter, 3-lamp" << endl;
	cout << "   b) 1-voltmeter, 2-ammeter, 3-lamp" << endl;
	cout << "   c) 1-lamp, 2-voltmeter, 3-ammeter" << endl << endl;

	cout << "   Enter your answer >> ";

	cin >> answers[3];
	if (answers[3] != "a" && answers[3] != "b" && answers[3] != "c")
	{
		system("cls");
		answerQuestionFour();
	}
	else if (answers[3] == "c")
	{
		countRightAnswers++;
	}
}

// displays the fifth question 
void answerQuestionFive()
{
	cout << endl;
	cout << "   Question " << countQuestions << endl;
	cout << "   _____________________________" << endl << endl;

	cout << setw(8) << "q" << endl;
	cout << "   I = " << char(196) << " is a formula for finding electric current" << endl;
	cout << setw(8) << "t" << endl << endl;

	cout << "   a) True" << endl;
	cout << "   b) False" << endl << endl;

	cout << "   Enter your answer >> ";

	cin >> answers[4];
	if (answers[4] != "a" && answers[4] != "b")
	{
		system("cls");
		answerQuestionFive();
	}
	else if (answers[4] == "a")
	{
		countRightAnswers++;
	}
}

// displays the sixth question 
void answerQuestionSix()
{
	cout << endl;
	cout << "   Question " << countQuestions << endl;
	cout << "   _____________________________" << endl << endl;

	cout << "   q = I * R" << endl << endl;

	cout << "   a) True" << endl;
	cout << "   b) False" << endl << endl;

	cout << "   Enter your answer >> ";

	cin >> answers[5];
	if (answers[5] != "a" && answers[5] != "b")
	{
		system("cls");
		answerQuestionSix();
	}
	else if (answers[5] == "b")
	{
		countRightAnswers++;
	}
}

// displays the seventh question 
void answerQuestionSeven()
{
	cout << endl;
	cout << "   Question " << countQuestions << endl;
	cout << "   _____________________________" << endl << endl;

	cout << "   U = R * I" << endl << endl;

	cout << "   a) True" << endl;
	cout << "   b) False" << endl << endl;

	cout << "   Enter your answer >> ";

	cin >> answers[6];
	if (answers[6] != "a" && answers[6] != "b")
	{
		system("cls");
		answerQuestionSeven();
	}
	else if (answers[6] == "a")
	{
		countRightAnswers++;
	}
}

// displays the eighth question 
void answerQuestionEight()
{
	cout << endl;
	cout << "   Question " << countQuestions << endl;
	cout << "   _____________________________" << endl << endl;

	cout << "   In what unit of measurement is the electric current measured?" << endl << endl;

	cout << "   a) A - ampere" << endl;
	cout << "   b) V - volt" << endl;
	cout << "   c) C - coulomb" << endl << endl;

	cout << "   Enter your answer >> ";

	cin >> answers[7];
	if (answers[7] != "a" && answers[7] != "b" && answers[7] != "c")
	{
		system("cls");
		answerQuestionEight();
	}
	else if (answers[7] == "a")
	{
		countRightAnswers++;
	}
}

// displays the ninth question 
void answerQuestionNine()
{
	cout << endl;
	cout << "   Question " << countQuestions << endl;
	cout << "   _____________________________" << endl << endl;

	cout << "   In what unit of measurement is the voltage measured?" << endl << endl;

	cout << "   a) A - ampere" << endl;
	cout << "   b) V - volt" << endl;
	cout << "   c) C - coulomb" << endl << endl;

	cout << "   Enter your answer >> ";

	cin >> answers[8];
	if (answers[8] != "a" && answers[8] != "b" && answers[8] != "c")
	{
		system("cls");
		answerQuestionNine();
	}
	else if (answers[8] == "b")
	{
		countRightAnswers++;
	}
}

// displays the tenth question 
void answerQuestionTen()
{
	cout << endl;
	cout << "   Question " << countQuestions << endl;
	cout << "   _____________________________" << endl << endl;

	cout << "   In what unit of measurement is the charge passed measured?" << endl << endl;;

	cout << "   a) A - ampere" << endl;
	cout << "   b) V - volt" << endl;
	cout << "   c) C - coulomb" << endl << endl;

	cout << "   Enter your answer >> ";

	cin >> answers[9];
	if (answers[9] != "a" && answers[9] != "b" && answers[9] != "c")
	{
		system("cls");
		answerQuestionTen();
	}
	else if (answers[9] == "c")
	{
		countRightAnswers++;
	}
}

// reorganizes the questions
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

// displays review of the test
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

// begins the test
void startTest()
{
	countRightAnswers = 0;
	countQuestions = 1;

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