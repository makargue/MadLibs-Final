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
		cout << " I don't know what to say. I'm speechless. I truly didn't expect to win this " << words.adjective1 << endl;
		cout << " certainly not with so many _" << words.adjective2 << endl;
		cout << " actors competing in the same category.First and foremost, my thanks to " << words.femaleName1<< endl;
		cout << " You couldn't work with a better " << words.occupation1 << endl;
		cout << " And I'm sure I wouldn't be " << words.verbING1 << endl;
		cout << " here tonight if it weren't for my " << words.occupation2 << endl;
		cout << " director. I must also thank" << words.maleName1 << endl;
		cout << " who wrote a" << setw(11) << left << "." << words.adjective3<< endl;
		cout << "script for me. Of course, none of this would be happening if it weren't for my agent, who convinced the network that I could play a 75 year - old, retired" << words.noun1 << endl;

	}
}; 

class StoryTwo :public Story{
public:
	void makeStory(Words words){
		cout << "I love to " << words.verb1<< endl;
		cout << "video games. I can play them day and " << words.noun2 << endl;
		cout << "My mom and" << words.noun3<< endl;
		cout << "are not too happy with me" << words.verbING2 << endl;
		cout << "so much time in front of the television" << words.adjective4 << endl;
		cout << "games help children develop hand-" << words.partOfBod2<< endl;
		cout << "coordination and improve their learning" << words.pluralNoun1<< endl;
		cout << ", he also seems to think they have" << words.adjective5<< endl;
		cout << "side effects on one's"<< words.partOfBod3 << endl;
		cout << "Both of my " << words.pluralNoun2<< endl;
		cout << "think this is due to a " << words.adjective6 << endl;
		cout << "use of violence in the majority of the " << words.pluralNoun3 << endl;
		cout << "Finally, we all arrived at a" << words.noun4 << endl;
		cout << "compromise: After dinner I can play" << words.number1<< endl;
		cout << "hours of video games, provided I help clear the" << words.noun5<< endl;
		cout << "and wash the" <<words.pluralNoun4<< endl;
	}
};