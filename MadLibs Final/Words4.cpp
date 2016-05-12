#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>

#include "Words.h"
#include "Story4.cpp"
#include "Story.h"

using namespace std;

int main(Words4){
	string adjective9, adjective10, adjective11, pluralNoun10, pluralnoun11, noun8, noun9, noun10, name1, name2, name3, state1, state2, plant1;
	adjective9 = adjective9;
	adjective10 = adjective10;
	adjective11 = adjective11;
	pluralNoun10 = pluralNoun10;
	pluralnoun11 = pluralnoun11;
	noun8 = noun8;
	noun9 = noun9;
	noun10 = noun10;
	name1 = name1;
	name2 = name2;
	name3 = name3;
	state1 = state1;
	state2 = state2;
	plant1 = plant1;


	Words words;


	cout << "Enter an adjective:";
	cin >> words.adjective9;
	cout << "Enter an adjective:";
	cin >> words.adjective10;
	cout << "Enter an adjective:";
	cin >> words.adjective11;
	cout << "Enter a plural noun:";
	cin >> words.pluralNoun9;
	cout << "Enter a plural noun:";
	cin >> words.pluralNoun10;
	cout << "Enter a plural noun";
	cin >> words.pluralNoun11;
	cout << "Enter a noun:";
	cin >> words.noun8;
	cout << "Enter a noun:";
	cin >> words.noun9;
	cout << "Enter a noun";
	cin >> words.noun10;
	cout << "Enter a name:";
	cin >> words.name1;
	cout << "Enter a name:";
	cin >> words.name2;
	cout << "Enter a name:";
	cin >> words.name3;
	cout << "Enter a state:";
	cin >> words.state1;
	cout << "Enter a state:";
	cin >> words.state2;
	cout << "Enter a plant:";
	cin >> words.plant1;


	StoryFour four;
	four.makeStory(words);
}