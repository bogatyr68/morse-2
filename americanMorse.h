//americanMorse.h
//Guts of the main program. Converts an English statement into American morse, as opposed to international.
//Possible to update into international later.

//Layout:
/*
Get lines from user
get size of string
infamous for loop:
	read a single letter according to control step
	compare against cipher
	print morse to screen and to file
	increase control step
display complete, return to main menu
*/
#pragma once

#ifdef AMERICANMORSELIBRARY_EXPORTS
#define AMERICANMORSELIBRARY_API __declspec(dllexport)
#else
#define AMERICANMORSELIBRARY_API __declspec(dllimport)
#endif

#include <iostream>
#include <array>
#include <string>
#include <fstream>

extern "C" AMERICANMORSELIBRARY_API class AmericanMorseDecoder
{
	private:
		std::string lineIn;
		std::string lineOut;
		const std::string letterBreak = "   ";
		std::string fileName = "American Morse Export.txt";

		//l or 0 may return ! for systems not in unicode
		std::array <const std::string, 37> americanMorse =
			{
				"/", //0, space
				".- ", //1, a
				"-... ", //2, b
				".. .", //3, c
				"-..", //4, d
				".", //5, e
				".-.", //6, f
				"--.", //7, g
				"....", //8, h
				"..", //9, i
				"-.-.", //10, j
				"-.-", //11, k
				"⸺", //12, l
				"--", //13, m
				"-.", //14, n
				". .", //15, o
				".....", //16, p
				"..-.", // 17, q
				". ..", //18, r
				"...", //19, s
				"-", //20, t
				"..-", //21, u
				"...-", //22, v
				".--", //23, w
				".-..", //24, x
				".. ..", //25, y
				"... .", //26, z
				".--.", //27, 1
				"..-..", //28, 2
				"...-..", //29, 3
				"....-", //30, 4
				"---", //31, 5
				"......", //32, 6
				"--..", //33, 7
				"-....", //34, 8
				"-..-", //35, 9
				"⸻", //36, 0
			};
		
	public:
		void getLine(); //uses console to get text to put into Morse
		void getLine(std::string); //uses a string instead of console
		void decrypt(); //primary function to conver text to Morse
		void print(); //displays the output to console
		void setFileName(std::string); //set file name for export
		void setFileName(); //sets file name using console prompt
		void exportMorse(); //saves to .txt file
		void reset();
		std::string getOutput(); //returns the string
};
