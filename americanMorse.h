//americanMorse.h
//Guts of the main program. Converts an English statement into American morse, as opposed to international.
//Possible to update into international later.

//Layout:
/*
Get lines from user
get size of string
infamous for loop:
	read a single letter according to control step0
	compare against cipher
	print morse to screen and to file
	increase control step
display complete, return to main menu
*/
#pragma once

#include <iostream>
#include <array>
#include <string>

class engToMorseCipher
{
	private:
		std::string lineIn;
		std::string lineOut;
		char controlLetter = 0;
		unsigned int controlStep = 0;


		std::array <std::string, 30> americanMorse = // is there a more efficient method?
		{
			"/", //0, space
			".- ", //1, a
			"-... " //2, b
		};
		
	public:
		void getLine();
		void decrypt();
};

// for (variable : collection)