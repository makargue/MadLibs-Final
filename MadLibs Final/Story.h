#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "Words.h"

using namespace std;

class Story {
public:
	virtual void makeStory(Words words) {

	}
};

class StoryOne : public Story {
public:
	void makeStory(Words words) {
		cout << " Thank You! Thank you from the bottom of my " << words.partOfBod1 << endl;
		cout << " I don't know what to say. I'm speechless. I truly didn't expect to win this "<< words.adjective1 << endl;
		cout << " certainly not with so many _" << words.adjective2<< endl;
		cout << " actors competing in the same category.First and foremost, my thanks to " << words.femaleName1<< endl;
		cout << " You couldn't work with a better " << words.occupation1 << endl;
		cout << " And I'm sure I wouldn't be " << words.verbING1 << endl;
		cout << " here tonight if it weren't for my " << words.occupation2 << endl;
		cout << " director. I must also thank" << words.maleName1<< endl;
		cout << " who wrote a" << setw(11) << left << "." << words.adjective3<< endl;
		cout << "script for me. Of course, none of this would be happening if it weren't for my agent, who convinced the network that I could play a 75 year - old, retired" << words.noun1 << endl;

	}
};