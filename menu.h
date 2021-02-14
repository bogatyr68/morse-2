//menu.h
//calls for branching options for user's whims

#pragma once

class menu
{
public:

	int handleError(unsigned int);
	void printWelcome();
	int promptUser();
	int runCycle();
	void waveGoodbye();

};
