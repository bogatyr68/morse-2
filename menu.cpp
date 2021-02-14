//menu.cpp
//handles user choices on morse/eng or eng/morse
//handles invalid menu options

/* Print options to screen
* Prompt for user input 1 - 3
*	1 Eng to Morse
*	2 Morse to Eng
*	3 End
*	IF not 1 - 3, run validity check
*OTHERWISE run desired option tag
*/

#include <iostream>
#include "menu.h"

int menu::handleError(unsigned int userGoof)
{
	switch (userGoof)
	{
		case 1:
		case 2:
		case 3:
			return userGoof;
			break;
		default:
		{
			std::cout << "Please enter 1, 2, or 3." << std::endl;
			std::cin >> userGoof;
		};
	}
	return userGoof;
}

void menu::printWelcome()
{
	std::cout << "1. Convert English into American Morse" << std::endl;
	std::cout << "2. Convert American Morse into English" << std::endl;
	std::cout << "3. End the program" << std::endl;
}

int menu::promptUser()
{
	int userWish;
	std::cin >> userWish;
	return userWish;
}

int menu::runCycle() //runs the printWelcome, promptUser, and handleError functions
{
	menu::printWelcome();
	return menu::handleError(menu::promptUser());
}
void menu::waveGoodbye()
{
	std::cout << "Thank you for using the radio operator program.";
}