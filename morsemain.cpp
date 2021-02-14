//morsemain.cpp
//contains main() function

//MAIN function
//menu.c-> main menu prompts
//return user's wish
//wish -> morse decrypter class/functions
	//IF wish is eng to morse
	//ELSE call appropriate funcions in other headers
	//THEN run funcionts
	//prompt for user input
	//decrypter crank
	//output to file and screen
//ELSE prompt for next funcion

#include <iostream>
#include <string>

#include "menu.h"
#include "americanMorse.h"

using namespace std;

int main()
{
	menu MorseMenu;
	engToMorseCipher cipher;

	unsigned int userDirective = 10;

	std::cout << "Welcome to the radio operator program. Please select an option from the list." << std::endl;

	while (userDirective != 3)
	{
		userDirective = MorseMenu.runCycle();
		switch (userDirective)
		{
			case 1:
			{
				cout << "Taking an English statement and putting it into American Morse." << endl;
				cipher.getLine();
				cipher.decrypt();
				break;
			}
			case 2:
			{
				//unbuilt function call;
				cout << "A better programmer would probably have written this by now." << endl;
				break;
			}
			case 3:
			{
				MorseMenu.waveGoodbye();
				break;
			}
			default:
			{
				MorseMenu.waveGoodbye();
				userDirective = 3;
				break;
			}
		}

	}


	return 0;
}

