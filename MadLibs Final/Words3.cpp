#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>

#include "Words.h"
#include "Story3.cpp"
#include "Story.h"

using namespace std;

int main(Words3){
	string adjective8, celebrity1, lastName1, lastName2, noun6, noun7, pluralAnimal1, pluralNoun5, pluralNoun6, pluralNoun7, pluralNoun8, pluralNoun9;
	adjective8 = adjective8;
	celebrity1 = celebrity1;
	lastName1 = lastName1;
	lastName2 = lastName2;
	noun6 = noun6;
	noun7 = noun7;
	pluralAnimal1 = pluralAnimal1;
	pluralNoun5 = pluralNoun5;
	pluralNoun6 = pluralNoun6;
	pluralNoun7 = pluralNoun7;
	pluralNoun8 = pluralNoun8;
	pluralNoun9 = pluralNoun9;


	Words words;


	cout << "Enter an adjective:";
	cin >> words.adjective8;
	cout << "Enter a celebrity:";
	cin >> words.celebrity1;
	cout << "Enter a last name:";
	cin >> words.lastName1;
	cout << "Enter a last name";
	cin >> words.lastName2;
	cout << "Enter a noun:";
	cin >> words.noun6;
	cout << "Enter a noun:";
	cin >> words.noun7;
	cout << "Enter a plural animal";
	cin >> words.pluralAnimal1;
	cout << "Enter a plural noun:";
	cin >> words.pluralNoun5;
	cout << "Enter a plural noun:";
	cin >> words.pluralNoun6;
	cout << "Enter a plural noun:";
	cin >> words.pluralNoun7;
	cout << "Enter a plural noun:";
	cin >> words.pluralNoun8;
	cout << "Enter a plural noun:";
	cin >> words.pluralNoun9;


	StoryThree three;
	three.makeStory(words);
}