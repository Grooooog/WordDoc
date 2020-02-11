#pragma once

#ifndef LETTERCOUNT_H
#define LETTERCOUNT_H

#include <string>
#include <iostream>
#include <vector>


//Main Class
class lettercount
{
public:
	lettercount();
	~lettercount();
	lettercount(const lettercount &word);

	std::vector<int> inspectLetters(std::string str);
	void sortLetters(std::vector<int> vec);
	void runTest(std::string s);
};

#endif

