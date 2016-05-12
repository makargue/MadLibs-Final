#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>

#include "Words.h"
#include "Story6.cpp"
#include "Story.h"

using namespace std;

int main(Words6){
	string adjective14, adjective15, adjective16, adjective17, adjective18, adjective19, adjective20, adverb2, noun16, noun17, noun18, number2, name5, name6, name7, pluralNoun12, pluralNoun13, pluralNoun14, pluralNoun15, verb3, partOfBod4, liquid1;
	adjective14 = adjective14;
	adjective15 = adjective15;
	adjective16 = adjective16;
	adjective17 = adjective17;
	adjective18 = adjective18;
	adjective19 = adjective19;
	adjective20 = adjective20;
	adverb2 = adverb2;
	noun16 = noun16;
	noun17 = noun17;
	noun18 = noun18;
	number2 = number2;
	name5 = name5;
	name6 = name6;
	name7 = name7;
	pluralNoun12 = pluralNoun12;
	pluralNoun13 = pluralNoun13;
	pluralNoun14 = pluralNoun14;
	pluralNoun15 = pluralNoun15;
	verb3 = verb3;
	partOfBod4 = partOfBod4;
	liquid1 = liquid1;


	Words words;

	cout << "Enter an adjective:";
	cin >> words.adjective14;
	cout << "Enter an adjective:";
	cin >> words.adjective15;
	cout << "Enter an adjective:";
	cin >> words.adjective16;
	cout << "Enter an adjective:";
	cin >> words.adjective17;
	cout << "Enter an adjective:";
	cin >> words.adjective18;
	cout << "Enter an adjective:";
	cin >> words.adjective19;
	cout << "Enter an adjective:";
	cin >> words.adjective20;
	cout << "Enter an adverb:";
	cin >> words.adverb2;
	cout << "Enter a noun:";
	cin >> words.noun16;
	cout << "Enter a noun";
	cin >> words.noun17;
	cout << "Enter a noun:";
	cin >> words.noun18;
	cout << "Enter a noun:";
	cin >> words.noun9;
	cout << "Enter a number";
	cin >> words.number2;
	cout << "Enter a name:";
	cin >> words.name5;
	cout << "Enter a name:";
	cin >> words.name6;
	cout << "Enter a name:";
	cin >> words.name7;
	cout << "Enter a plural noun:";
	cin >> words.pluralNoun12;
	cout << "Enter a plural noun:";
	cin >> words.pluralNoun13;
	cout << "Enter a plural noun:";
	cin >> words.pluralNoun14;
	cout << "Enter a plural noun:";
	cin >> words.pluralNoun15;
	cout << "Enter a verb:";
	cin >> words.verb3;
	cout << "Enter a part of body:";
	cin >> words.partOfBod4;
	cout << "Enter a liquid:";
	cin >> words.liquid1;


	StorySix six;
	six.makeStory(words);
}