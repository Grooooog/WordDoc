#include "LetterCount.h"

#include <iostream>
#include <string>
#include <vector>

//Constructors and Deconstructor
lettercount::lettercount()
{
}

lettercount::~lettercount()
{
}

lettercount::lettercount(const lettercount &word)
{
}


//Function that takes strings and assigns the number of each letter in the phrase to a vector
//Goes hand in hand with the sort function
std::vector<int> lettercount::inspectLetters(std::string str)
{
	std::vector<int> vec;
	vec.resize(26);
	vec.reserve(26);

	for (int i = 0; i <= str.size() - 1; i++)
	{
		switch (str[i])
		{
		default:
			break;
		case 'a': case 'A':
			vec[0]++;
			break;
		case 'b': case 'B':
			vec[1]++;
			break;
		case 'c': case 'C':
			vec[2]++;
			break;
		case 'd': case 'D':
			vec[3]++;
			break;
		case 'e': case 'E':
			vec[4]++;
			break;
		case 'f': case 'F':
			vec[5]++;
			break;
		case 'g': case 'G':
			vec[6]++;
			break;
		case 'h': case 'H':
			vec[7]++;
			break;
		case 'i': case 'I':
			vec[8]++;
			break;
		case 'j': case 'J':
			vec[9]++;
			break;
		case 'k': case 'K':
			vec[10]++;
			break;
		case 'l': case 'L':
			vec[11]++;
			break;
		case 'm': case 'M':
			vec[12]++;
			break;
		case 'n': case 'N':
			vec[13]++;
			break;
		case 'o': case 'O':
			vec[14]++;
			break;
		case 'p': case 'P':
			vec[15]++;
			break;
		case 'q': case 'Q':
			vec[16]++;
			break;
		case 'r': case 'R':
			vec[17]++;
			break;
		case 's': case 'S':
			vec[18]++;
			break;
		case 't': case 'T':
			vec[19]++;
			break;
		case 'u': case 'U':
			vec[20]++;
			break;
		case 'v': case 'V':
			vec[21]++;
			break;
		case 'w': case 'W':
			vec[22]++;
			break;
		case 'x': case 'X':
			vec[23]++;
			break;
		case 'y': case 'Y':
			vec[24]++;
			break;
		case 'z': case 'Z':
			vec[25]++;
			break;
		}
	}
	return vec;
}

//The function where the number-alphabet correlation is sorted and printed
void lettercount::sortLetters(std::vector<int> vec)
{
	std::vector<std::string> chars =
	{ "(A-a)", "(B-b)", "(C-c)", "(D-d)", "(E-e)", "(F-f)", "(G-g)", "(H-h)", "(I-i)", "(J-j)",
	"(K-k)", "(L-l)", "(M-m)", "(N-n)", "(O-o)", "(P-p)", "(Q-q)", "(R-r)", "(S-s)", "(T-t)",
	"(U-u)", "(V-v)", "(W-w)", "(X-x)", "(Y-y)", "(Z-z)" };

	std::cout << "{ ";

	for (int i = 0; i != vec.size(); i++)
	{
		std::cout << chars[i] << " = " << vec[i] << " ";
	}

	std::cout << "}";
}

//Shortcut function
void lettercount::runTest(std::string s)
{
	lettercount b;
	b.sortLetters(inspectLetters(s));
}