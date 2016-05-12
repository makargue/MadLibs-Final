#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>

#include "Words.h"
#include "Story7.cpp"
#include "Story.h"

using namespace std;

int main(Words7){
	string pronoun1, pluralNoun16, pluralNoun17, noun19, verbING4, event1, event2, location1, number3;
	pronoun1 = pronoun1;
	pluralNoun16 = pluralNoun16;
	pluralNoun17 = pluralNoun17;
	noun19 = noun19;
	verbING4 = verbING4;
	event1 = event1;
	event2 = event2;
	location1 = location1;
	number3 = number3;

	Words words;


	cout << "Enter a pronoun:";
	cin >> words.pronoun1;
	cout << "Enter a plural noun:";
	cin >> words.pluralNoun16;
	cout << "Enter a plural noun:";
	cin >> words.pluralNoun17;
	cout << "Enter a noun:";
	cin >> words.noun19;
	cout << "Enter a verb ending in ing:";
	cin >> words.verbING4;
	cout << "Enter an event";
	cin >> words.event1;
	cout << "Enter an event:";
	cin >> words.event2;
	cout << "Enter a location:";
	cin >> words.location1;
	cout << "Enter a number";
	cin >> words.number3;

	StorySeven seven;
	seven.makeStory(words);
}