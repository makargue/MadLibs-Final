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

class StoryTwo :public Story{
public:
	void makeStory(Words words){
		cout << "Young people today would rather listen to a good rock music concert than to Johann Sebastian " << setw(11) << left << "." << setw(11) << right << it->getLastName1()->Words3 << endl;
		cout << " or to Ludvig von" << setw(11) << left << "." << setw(11) << right << it->getLastName2()->Words3 << endl;
		cout << "  Rock music is played by " << setw(11) << left << "." << setw(11) << right << it->getAdjective8()->Words3 << endl;
		cout << " groups of young men who wear their hair below their " << setw(11) << left << "." << setw(11) << right << it->getPluralNoun5()->Words3 << endl;
		cout << " They also wear very odd and colorful " << setw(11) << left << "." << setw(11) << right << it->getPluralNoun6()->Words3 << endl;
		cout << "and often have beards. The groups have attractive names such as The " << setw(11) << left << "S" << setw(11) << right << it->getPluralAnimal1()->Words3 << endl;
		cout << "or " << setw(11) << left << "." << setw(11) << right << it->getCelebrity1()->Words3 << endl;
		cout << " and The Three " << setw(11) << left << "." << setw(11) << right << it->getPluralNoun7()->Words3 << endl;
		cout << " They usually play electric" << setw(11) << left << "." << setw(11) << right << it->getPluralNoun8()->Words3 << endl;
		cout << "One member of the group usually sits on a raised platform and sets the rhythm by beating his " << setw(11) << left << "." << setw(11) << right << it->getNoun6()->Words3 << endl;
		cout << " The songs are mostly about some fellow who has been rejected by his " << setw(11) << left << "." << setw(11) << right << it->getNoun7()->Words3 << endl;
		cout << "They are very sad and when young girls hear them, they often get tears in their  " << setw(11) << left << "." << setw(11) << right << it->getPluralNoun9()->Words3 << endl;
	
	}
};