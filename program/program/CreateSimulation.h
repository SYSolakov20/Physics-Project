#pragma once
#define CREATESIMULATION_H_INCLUDED

#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define BOLDYELLOW  "\033[1m\033[33m"

void fillPosition(int filledPosition);
void emptyPosition(int emptyPosition);
void checkPosition(int occcupiedPosition);
void startCreatingSimulation();
void displayPositions();
void printSimulation();
void turnOn();