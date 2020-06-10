/* Copyright (C) 2020 Sai Manasa S
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * Description: This is a program used to find 2 integer array 
 * elements that add up to a given target sum
 *
 * Revision History:
 * Initial version: June 9th, 2020
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void stringCharCount(string inStr)
{
	unsigned int i = 0, j = 0, count = 0;
	vector<char> charVect;
	vector<int> charCount;
	vector<char> charnCount;

	vector<char> :: iterator itr1;
	vector<int> :: iterator itr2;
	vector<char> :: iterator itr3;

	string inpStr = inStr;

	for(i = 0; i < inpStr.length(); i++)
	{
		//Push each character of the string into the vector
		charVect.push_back(inpStr.at(i));

		// Count the number of occurrences of each character in the string
		for(j = 0 ; j < inpStr.length(); j++)
		{
			if(inpStr.at(i) == inpStr.at(j))
			{
				count++;
			}
		}
		charCount.push_back(count);
		count = 0; // Reset for counting the next character's count
	}

	for(itr1 = charVect.begin(), itr2 = charCount.begin(); itr1 != charVect.end(), itr2 != charCount.end(); itr1++, itr2++)
	{
		cout << "Char: " << *itr1 << " ";
		cout << "Char count: " << *itr2 << endl;
		charnCount.push_back(*itr1);
		char tempChar = static_cast<char> (*itr2);
		charnCount.push_back(tempChar);
		cout << "Char count: " << *itr2 << endl;
	}

	for(itr3 = charnCount.begin(); itr3 != charnCount.end(); itr3++)
	{
		cout << "Char, its count: " << *itr3 << endl;
	}
}

void main()
{
	string inpString = "";
	unsigned int i = 0, j = 0;
	vector<string> strVect;
	cout << "Enter a string:" << endl;
	cin >> inpString;

	//std::getline(cin, inpString);

	stringCharCount(inpString);

	/*for()
	{
	}*/
	

	while(1);
}