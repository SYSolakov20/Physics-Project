#pragma once
#define CREATESIMULATION_H_INCLUDED

#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define BOLDYELLOW  "\033[1m\033[33m"

void startCreating();
void chooseDevice();
void choosePosition();
void fillPosition(int position);
void emptyPosition(int position);
void occupiedPosition(int position);
void printSimulation();
void turnOn();
void turnOnCheck();
