#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>

#include "Words.h"
#include "Story5.cpp"
#include "Story.h"

using namespace std;

int main(Words5){
	string noun11, noun12, noun13, noun14, noun15, adjective12, adjective13, verb2, verbING3, name4, animal1, adverb1, feeling1, conjunction1;
	noun11 = noun11;
	noun12 = noun12;
	noun13 = noun13;
	noun14 = noun14;
	noun15 = noun15;
	adjective12 = adjective12;
	adjective13 = adjective13;
	verb2 = verb2;
	verbING3 = verbING3;
	name4 = name4;
	animal1 = animal1;
	adverb1 = adverb1;
	feeling1 = feeling1;
	conjunction1 = conjunction1;


	Words words;


	cout << "Enter a noun:";
	cin >> words.noun11;
	cout << "Enter a noun:";
	cin >> words.noun12;
	cout << "Enter a noun:";
	cin >> words.noun13;
	cout << "Enter a noun:";
	cin >> words.noun14;
	cout << "Enter a noun:";
	cin >> words.noun15;
	cout << "Enter an adjective:";
	cin >> words.adjective12;
	cout << "Enter an adjective:";
	cin >> words.adjective13;
	cout << "Enter a verb:";
	cin >> words.verb2;
	cout << "Enter a verb ending in ing:";
	cin >> words.verbING3;
	cout << "Enter a name";
	cin >> words.name4;
	cout << "Enter an animal:";
	cin >> words.animal1;
	cout << "Enter an adverb:";
	cin >> words.adverb1;
	cout << "Enter a feeling";
	cin >> words.feeling1;
	cout << "Enter a conjunction:";
	cin >> words.conjunction1;

	StoryFive five;
	five.makeStory(words);
}