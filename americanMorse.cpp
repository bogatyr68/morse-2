//americanMorse.cpp

#include <iostream>
#include <string>

#include "americanMorse.h"
#include "pch.h"


	void AmericanMorseDecoder::decrypt()
	{

		int cycle = 0;
		int runs = lineIn.size();

		for (cycle; cycle < runs; cycle++)
		{
			char controlLetter = lineIn.at(cycle);
			switch (controlLetter)
			{
			case ' ':
			{
				lineOut = lineOut + americanMorse[0] + letterBreak;
				break;
			}
			case 'a':
			case 'A':
			{
				lineOut = lineOut + americanMorse[1] + letterBreak;
				break;
			}
			case 'b':
			case 'B':
			{
				lineOut = lineOut + americanMorse[2] + letterBreak;
				break;
			}
			case 'c':
			case 'C':
			{
				lineOut = lineOut + americanMorse[3] + letterBreak;
				break;
			}
			case 'd':
			case 'D':
			{
				lineOut = lineOut + americanMorse[4] + letterBreak;
				break;
			}
			case 'e':
			case 'E':
			{
				lineOut = lineOut + americanMorse[5] + letterBreak;
				break;
			}
			case 'f':
			case 'F':
			{
				lineOut = lineOut + americanMorse[6] + letterBreak;;
				break;
			}
			case 'g':
			case 'G':
			{
				lineOut = lineOut + americanMorse[7] + letterBreak;
				break;
			}
			case 'h':
			case 'H':
			{
				lineOut = lineOut + americanMorse[8] + letterBreak;
				break;
			}
			case 'i':
			case 'I':
			{
				lineOut = lineOut + americanMorse[9] + letterBreak;
				break;
			}
			case 'j':
			case 'J':
			{
				lineOut = lineOut + americanMorse[10] + letterBreak;
				break;
			}
			case 'k':
			case 'K':
			{
				lineOut = lineOut + americanMorse[11] + letterBreak;
				break;
			}
			case 'l':
			case 'L':
			{
				lineOut = lineOut + americanMorse[12] + letterBreak;
				break;
			}
			case 'm':
			case 'M':
			{
				lineOut = lineOut + americanMorse[13] + letterBreak;
				break;
			}
			case 'n':
			case 'N':
			{
				lineOut = lineOut + americanMorse[14] + letterBreak;
				break;
			}
			case 'o':
			case 'O':
			{
				lineOut = lineOut + americanMorse[15] + letterBreak;
				break;
			}
			case 'p':
			case 'P':
			{
				lineOut = lineOut + americanMorse[16] + letterBreak;
				break;
			}
			case 'q':
			case 'Q':
			{
				lineOut = lineOut + americanMorse[17] + letterBreak;
				break;
			}
			case 'r':
			case 'R':
			{
				lineOut = lineOut + americanMorse[18] + letterBreak;
				break;
			}
			case 's':
			case 'S':
			{
				lineOut = lineOut + americanMorse[19] + letterBreak;
				break;
			}
			case 't':
			case 'T':
			{
				lineOut = lineOut + americanMorse[20] + letterBreak;
				break;
			}
			case 'u':
			case 'U':
			{
				lineOut = lineOut + americanMorse[21] + letterBreak;
				break;
			}
			case 'v':
			case 'V':
			{
				lineOut = lineOut + americanMorse[22] + letterBreak;
				break;
			}
			case 'w':
			case 'W':
			{
				lineOut = lineOut + americanMorse[23] + letterBreak;
				break;
			}
			case 'x':
			case 'X':
			{
				lineOut = lineOut + americanMorse[24] + letterBreak;
				break;
			}
			case 'y':
			case 'Y':
			{
				lineOut = lineOut + americanMorse[25] + letterBreak;
				break;
			}
			case 'z':
			case 'Z':
			{
				lineOut = lineOut + americanMorse[26] + letterBreak;
				break;
			}
			default:
			{
				lineOut = lineOut + "!" + letterBreak;
			}
			}
		}
	};

	void AmericanMorseDecoder::getLine()
	{
		std::cout << std::endl;
		std::cin.ignore();
		std::getline(std::cin, lineIn);
	}
	void AmericanMorseDecoder::getLine(std::string stringIn)
	{
		lineIn = stringIn;
	}
	void AmericanMorseDecoder::print()
	{
		std::cout << lineOut;
	}
	void AmericanMorseDecoder::setFileName(std::string newName)
	{
		fileName = newName + ".txt";
	}
	void AmericanMorseDecoder::setFileName()
	{
		std::cout << "Save as what file name?" << std::endl;
		std::cin >> fileName;
		fileName = fileName + ".txt";
	}
	void AmericanMorseDecoder::exportMorse()
	{

		std::ofstream exportCode;
		exportCode.open(fileName);
		exportCode << lineOut;
		exportCode.close();
	}
	void AmericanMorseDecoder::reset()
	{
		lineIn = "";
		lineOut = "";

	}
	std::string AmericanMorseDecoder::getOutput()
	{
		return lineOut;
	}
