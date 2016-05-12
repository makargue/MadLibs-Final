#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>

#include "Words.h"
#include "Story2.cpp"
#include "Story.h"

using namespace std;

int main(Words2){
	string adjective4, adjective5, adjective6, adjective7, noun2, noun3, noun4, noun5, number1, partOfBod2, partOfBod3, pluralNoun1, pluralNoun2, pluralNoun3, pluralNoun4, verb1, verbING2;
	adjective4 = adjective4;
	adjective5 = adjective5;
	adjective6 = adjective6;
	adjective7 = adjective7;
	noun2 = noun2;
	noun3 = noun3;
	noun4 = noun4;
	noun5 = noun5;
	number1 = number1;
	partOfBod2 = partOfBod2;
	partOfBod3 = partOfBod2;
	pluralNoun1 = pluralNoun1;
	pluralNoun2 = pluralNoun2;
	pluralNoun3 = pluralNoun3;
	pluralNoun4 = pluralNoun4;
	verb1 = verb1;
	verbING2 = verbING2;

	Words words;

	cout << "Enter an adjective:";
	cin >> words.adjective4;
	cout << "Enter an adjective:";
	cin >> words.adjective5;
	cout << "Enter an adjective:";
	cin >> words.adjective6;
	cout << "Enter an adjective";
	cin >> words.adjective7;
	cout << "Enter a noun:";
	cin >> words.noun2;
	cout << "Enter a noun";
	cin >> words.noun3;
	cout << "Enter a noun:";
	cin >> words.noun4;
	cout << "Enter a noun:";
	cin >> words.noun5;
	cout << "Enter a number:";
	cin >> words.number1;
	cout << "Enter a body part";
	cin >> words.partOfBod2;
	cout << "Enter a body part";
	cin >> words.partOfBod3;
	cout << "Enter a plural noun";
	cin >> words.pluralNoun1;
	cout << "Enter a plural noun";
	cin >> words.pluralNoun2;
	cout << "Enter a plural noun";
	cin >> words.pluralNoun3;
	cout << "Enter a plural noun";
	cin >> words.pluralNoun4;
	cout << "Enter a verb";
	cin >> words.verb1;
	cout << "Enter a verb ending in ing";
	cin >> words.verbING2;


	StoryTwo two;
	two.makeStory(words);

}