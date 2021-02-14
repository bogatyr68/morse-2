//americanMorse.cpp

#include <iostream>
#include <string>

#include "americanMorse.h"

void engToMorseCipher::decrypt()
{
	//temporary error catching code
	std::cout << "decrypt start" << "lineIne: " << lineIn << "line size: " << lineIn.size() << std::endl;
	controlStep = lineIn.size();
	std::cout << "controlStep" << controlStep << std::endl;
	int endParameter = lineIn.size();
	std::cout << "end parameter: " << endParameter << std::endl;

	//for (controlStep; controlStep == lineIn.size(); controlStep++)
	for (controlStep; controlStep == endParameter; controlStep++)
	{
		controlLetter = lineIn.at(controlStep);
		switch (controlLetter)
		{
			case ' ':
			{
				std::cout << americanMorse[0];
				break;
			}
			case 'a':
			case 'A':
			{
				std::cout << americanMorse[1];
				break;
			}
			case 'b':
			case 'B':
			{
				std::cout << americanMorse[2];
				break;
			}
		}
	}
};

void engToMorseCipher::getLine()
{
	//Error with getline command?
	//std::getline(std::cin, lineIn);
	std::cin >> lineIn;
}