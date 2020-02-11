#include <iostream>
#include <string>
#include <fstream>

#include "LetterCount.h"

int main()
{
	std::string h;
	std::getline(std::cin, h);

	std::cout << "Query Loading...\n";

	
	
	lettercount test;
	test.runTest(h);

	std::cin.get();
}