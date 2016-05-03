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

class StoryTwo :public Story{
public:
	void makeStory(Words words){
		cout << "I love to " << setw(11) << left << "." << setw(11) << right << it->getVerb1()->Words2 << endl;
		cout << "video games. I can play them day and " << setw(11) << left << "!" << setw(11) << right << it->getNoun2()->Words2 << endl;
		cout << "My mom and" << setw(11) << left << "!" << setw(11) << right << it->getNoun3()->Words2 << endl;
		cout << "are not too happy with me" << setw(11) << left << "" << setw(11) << right << it->getVerbING2()->Words2 << endl;
		cout << "so much time in front of the television" << setw(11) << right << it->getAdjective4()->Words2 << endl;
		cout << "games help children develop hand-" << setw(11) << left << "." << setw(11) << right << it->getPartOfBod2()->Words2 << endl;
		cout << "coordination and improve their learning" << setw(11) << left << "." << setw(11) << right << it->getPluralNoun1()->Words2 << endl;
		cout << ", he also seems to think they have" << setw(11) << left << "." << setw(11) << right << it->getAdjective5()->Words2 << endl;
		cout << "side effects on one's" << setw(11) << left << "." << setw(11) << right << it->getPartOfBod3()->Words2 << endl;
		cout << "Both of my " << setw(11) << left << "." << setw(11) << right << it->getPluralNoun2()->Words2 << endl;
		cout << "think this is due to a " << setw(11) << left << "." << setw(11) << right << it->getAdjective6()->Words2 << endl;
		cout << "use of violence in the majority of the " << setw(11) << left << "." << setw(11) << right << it->getPluralNoun3()->Words2 << endl;
		cout << "Finally, we all arrived at a" << setw(11) << left << "!" << setw(11) << right << it->getNoun4()->Words2 << endl;
		cout << "compromise: After dinner I can play" << setw(11) << left << "!" << setw(11) << right << it->getNumber1()->Words2 << endl;
		cout << "hours of video games, provided I help clear the" << setw(11) << left << "!" << setw(11) << right << it->getNoun5()->Words2 << endl;
		cout << "and wash the" << setw(11) << left << " " << setw(11) << right << it->getPluralNoun4()->Words2 << endl;
	}
};