#pragma once
#define SIMULATIONS_H_INCLUDED

#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define BOLDYELLOW  "\033[1m\033[33m"

void startSimulations();
void doNextSimulationOn();
void doNextSimulationOff();
void simpleSimulation();
void ammeterSimulation();
void voltmeterSimulation();
void ammmeterAndVoltmeterSimulation();