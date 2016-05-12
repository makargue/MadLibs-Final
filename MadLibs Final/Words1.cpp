#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>

#include "Words.h"
#include "Story1.cpp"
#include "Story.h"

using namespace std;

int main(Words1){
	string noun1, adjective1, adjective2, adjective3, femaleName1, maleName1, occupation1, occupation2, partOfBod1, verbING1;
	noun1 = noun1;
	adjective1 = adjective1;
	adjective2 = adjective2;
	adjective3 = adjective3;
	femaleName1 = femaleName1;
	maleName1 = maleName1;
	occupation1 = occupation1;
	occupation2 = occupation2;
	partOfBod1 = partOfBod1;

	Words words;


	cout << "Enter a noun:";
	cin >> words.noun1;
	cout << "Enter an adjective:";
	cin >> words.adjective1;
	cout << "Enter an adjective:";
	cin >> words.adjective2;
	cout << "Enter an adjective";
	cin >> words.adjective3;
	cout << "Enter a name:";
	cin >> words.femaleName1;
	cout << "Enter a name:";
	cin >> words.maleName1;
	cout << "Enter a job:";
	cin >> words.occupation1;
	cout << "Enter a job:";
	cin >> words.occupation2;
	cout << "Enter a body part:";
	cin >> words.partOfBod1;
	cout << "Enter a verb ending in ING";
	cin >> words.verbING1;


	StoryOne one;
	one.makeStory(words);

}