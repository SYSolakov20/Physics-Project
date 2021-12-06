#pragma once
#define CALCULATORS_H_INCLUDED

using namespace std;

void startCalculators();
void doNextCalculator();
void calculateElectricCurrent();
void calculateChargePassed();
void calculateResistance();
void calculateVoltage();
int findNumLength(double number);
void displayCalculator(string resultName, char firstInputSymbol, double firstInput, char secondInputSymbol, double secondInput, char resultSymbol, double result, string resultUnit);
void outputHorizontalLine(int counter, int number);
bool divideByZero(double divisor);