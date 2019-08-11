// SieveOfErasthenes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <bitset>

using namespace std;
int main()
{
	bitset<3'000'000> numberLine;
	for (size_t i = 2; i < numberLine.size(); i++)
	{
		numberLine[i]=1;
	}

	for (size_t i = 2; i < numberLine.size(); i++)
	{
		if (2*i<numberLine.size())
		{
			numberLine[2*i] = false;
		}
		if (3*i<numberLine.size())
		{
			numberLine[3 * i] = false;

		}
		if (5*i<numberLine.size())
		{
			numberLine[5 * i] = false;
		}
		if (7*i<numberLine.size())
		{
			numberLine[7 * i] = false;
		}
		if (11 * i<numberLine.size())
		{
			numberLine[11 * i] = false;
		}
	}
	
		
	
	
	for (size_t i = 0; i < numberLine.size(); i++)
	{
		if (numberLine[i]==1) {
			cout << i << endl;
		}
	}
    return 0;
}

