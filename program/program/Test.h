#pragma once
#define TEST_H_INCLUDED



#define RED "\033[31m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"
#define BOLDYELLOW "\033[1m\033[33m"
#define GREEN "\033[32m"



void answerQuestionOne();
void answerQuestionTwo();
void answerQuestionThree();
void answerQuestionFour();
void answerQuestionFive();
void answerQuestionSix();
void answerQuestionSeven();
void answerQuestionEight();
void answerQuestionNine();
void answerQuestionTen();
void shuffleQuestions(int arr[10]);
void startTest();
void reviewTest(int reviewTestQuestions[10]);
bool returnError(string response);
void displayMenuAfterTheTest();