#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>

#include "Words.h"

#include "Story1.cpp"
#include "Story2.cpp"
#include "Story3.cpp"
#include "Story4.cpp"
#include "Story5.cpp"
#include "Story6.cpp"
#include "Story7.cpp"

#include "Story.h"

using namespace std;

int main(Words1){
	string noun1, adjective1, adjective2, adjective3, femaleName1, maleName1, occupation1, occupation2, partOfBod1, verbING1;
	noun1 = noun1;
	adjective1 = adjective1;
	adjective2 = adjective2;
	adjective3 = adjective3;
	femaleName1 = femaleName1;
	maleName1 = maleName1;
	occupation1 = occupation1;
	occupation2 = occupation2;
	partOfBod1 = partOfBod1;

	Words words;


	cout << "Enter a noun:";
	cin >> words.noun1;
	cout << "Enter an adjective:";
	cin >> words.adjective1;
	cout << "Enter an adjective:";
	cin >> words.adjective2;
	cout << "Enter an adjective";
	cin >> words.adjective3;
	cout << "Enter a name:";
	cin >> words.femaleName1;
	cout << "Enter a name:";
	cin >> words.maleName1;
	cout << "Enter a job:";
	cin >> occupation1;
	cout << "Enter a job:";
	cin >> occupation2;
	cout << "Enter a body part:";
	cin >> partOfBod1;
	cout << "Enter a verb ending in ING";
	cin >> verbING1;


	StoryOne one;
	one.makeStory(words);
}
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
	cout << "Enter a name:";
	cin >> words.femaleName1;
	cout << "Enter a name:";
	cin >> words.maleName1;
	cout << "Enter a job:";
	cin >> occupation1;
	cout << "Enter a job:";
	cin >> occupation2;
	cout << "Enter a body part:";
	cin >> partOfBod1;
	cout << "Enter a verb ending in ING";
	cin >> verbING1;


	StoryOne one;
	one.makeStory(words);

}
	/*STORY ONE
	cout << " Thank You! Thank you from the bottom of my " << getPartOfBod1() << endl;
	cout << " I don't know what to say. I'm speechless. I truly didn't expect to win this " getAdjective1() << endl;
	cout << " certainly not with so many _" << setw(11) << left << " " << setw(11) << right << it->getAdjective2()->Words1 << endl;
	cout << " actors competing in the same category.First and foremost, my thanks to " << setw(11) << left << "." << setw(11) << right << it->getFemaleName1()->Words1 << endl;
	cout << " You couldn't work with a better " << setw(11) << left << "." << setw(11) << right << it->getOccupation1()->Words1 << endl;
	cout << " And I'm sure I wouldn't be " << setw(11) << left << "." << setw(11) << right << it->getVerbING1()->Words1 << endl;
	cout << " here tonight if it weren't for my " << setw(11) << left << "." << setw(11) << right << it->getOccupation2()->Words1 << endl;
	cout << " director. I must also thank" << setw(11) << left << "." << setw(11) << right << it->getMaleName1()->Words1 << endl;
	cout << " who wrote a" << setw(11) << left << "." << setw(11) << right << it->getAdjective3()->Words1 << endl;
	cout << "script for me. Of course, none of this would be happening if it weren't for my agent, who convinced the network that I could play a 75 year - old, retired" << setw(11) << left << "." << setw(11) << right << it->getNoun1()->Words1 << endl;


	int main(Words2){
		//STORY TWO
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

	int main(Words3){
		//STORY THREE
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


	int main(Words4){
		//STORY FOUR
		cout << "Dear Mom and Dad, Camp is so " << setw(11) << left << "." << setw(11) << right << it->getAdjective9()->Words4 << endl;
		cout << "The food here is really good, unlike that camp food " << setw(11) << left << "." << setw(11) << right << it->getName1()->Words4 << endl;
		cout << " told me about. We get to eat " << setw(11) << left << "." << setw(11) << right << it->getPluralNoun10()->Words4 << endl;
		cout << " and" << setw(11) << left << "." << setw(11) << right << it->getPluralNoun11()->Words4 << endl;
		cout << "every day of the week! This week I get to try out all the activities and sports. We are canoeing in " << setw(11) << left << "." << setw(11) << right << it->getAdjective10()->Words4 << endl;
		cout << " water on Lake " << setw(11) << left << "." << setw(11) << right << it->getName2()->Words4 << endl;
		cout << " We also are learning how to dive off the" << setw(11) << left << "." << setw(11) << right << it->getAdjective11()->Words4 << endl;
		cout << " diving board! I tried archery and I wasn't very good—I hit a(n)" << setw(11) << left << "." << setw(11) << right << it->getPlant1()->Words4 << endl;
		cout << " by mistake. I'll practice and get better, though. For Arts and Crafts, I made a clay" << setw(11) << left << "." << setw(11) << right << it->getNoun8()->Words4 << endl;
		cout << " and a" << setw(11) << left << "." << setw(11) << right << it->getNoun9()->Words4 << endl;
		cout << " out of macramé, and a shelf for Mom to put her" << setw(11) << left << "." << setw(11) << right << it->getPluralNoun11()->Words4 << endl;
		cout << " on. I even learned about whittling. I made a(n)" << setw(11) << left << "." << setw(11) << right << it->getNoun10()->Words4 << endl;
		cout << " out of wood! Can you believe it? I especially like all the friends I am meeting. Kids here come from all over the country, from as far away as " << setw(11) << left << "." << setw(11) << right << it->getState1()->Words4 << endl;
		cout << " and" << setw(11) << left << "." << setw(11) << right << it->getState2()->Words4 << endl;
		cout << "  I am sorry I have to leave soon. I sure am going to miss all the fun I've had here. Maybe I can go camping in the backyard when I get back and pretend that I'm still at camp. Do you think Spot will want to camp with me? Love always," << setw(11) << left << "." << setw(11) << right << it->getName3()->Words4 << endl;
	}
	

	int main(Words5){
		//STORY FIVE
		cout << "The world's" << setw(11) << left << "." << setw(11) << right << it->getAdjective12()->Words5 << endl;
		cout << "supersonic" << setw(11) << left << "." << setw(11) << right << it->getAnimal1()->Words5 << endl;
		cout << "unrivalled in speed returns once more. Always the drifter,Sonic goes" << setw(11) << left << "." << setw(11) << right << it->getAdverb1()->Words5 << endl;
		cout << "" << setw(11) << left << "." << setw(11) << right << it->getConjunction1()->Words5 << endl;
		cout << "the wind takes him, and lives life accordingly to his own" << setw(11) << left << "." << setw(11) << right << it->getNoun11()->Words5 << endl;
		cout << "rather than the" << setw(11) << left << "." << setw(11) << right << it->getNoun12()->Words5 << endl;
		cout << "of those around him. He's basically  " << setw(11) << left << "." << setw(11) << right << it->getAdjective13()->Words5 << endl;
		cout << "but when he gets fired up over an injustice, his" << setw(11) << left << "." << setw(11) << right << it->getNoun13()->Words5 << endl;
		cout << "explodes with surprising consequences. Always at the" << setw(11) << left << "." << setw(11) << right << it->getVerbING3()->Words5 << endl;
		cout << "end of this " << setw(11) << left << "." << setw(11) << right << it->getFeeling1()->Words5 << endl;
		cout << "is his arch-enemy Dr. " << setw(11) << left << "." << setw(11) << right << it->getName4()->Words5 << endl;
		cout << "whose fiendish plots to take over the world are constantly being foiled by Sonic. Saving the world is a nice" << setw(11) << left << "." << setw(11) << right << it->getNoun14()->Words5 << endl;
		cout << "but Sonic is soon off to" << setw(11) << left << "." << setw(11) << right << it->getVerb2()->Words5 << endl;
		cout << "his next" << setw(11) << left << "." << setw(11) << right << it->getNoun15()->Words5 << endl;
	}

	int main(Words6){
		//STORY SIX
		cout << "Dear Physical Education Teacher, Please excuse my son/daughter from missing" << setw(11) << left << "." << setw(11) << right << it->getAdjective14()->Words6 << endl;
		cout << "class yesterday. When" << setw(11) << left << "." << setw(11) << right << it->getName5()->Words6 << endl;
		cout << "awakened yesterday, I could see that his/her nose was" << setw(11) << left << "." << setw(11) << right << it->getAdjective15()->Words6 << endl;
		cout << "He/She also complained of " << setw(11) << left << "." << setw(11) << right << it->getPartOfBod4()->Words6 << endl;
		cout << "aches and having a sore" << setw(11) << left << "." << setw(11) << right << it->getNoun15()->Words6 << endl;
		cout << "and I took him/her to the family" << setw(11) << left << "." << setw(11) << right << it->getNoun16()->Words6 << endl;
		cout << " The doctor quickly diagnosed it to be the " << setw(11) << left << "." << setw(11) << right << it->getNumber2()->Words6 << endl;
		cout << "-hour flu and suggested he/she take two" << setw(11) << left << "." << setw(11) << right << it->getPluralNoun12()->Words6 << endl;
		cout << "with a glass of " << setw(11) << left << "." << setw(11) << right << it->getLiquid1()->Words6 << endl;
		cout << "and go to bed" << setw(11) << left << "." << setw(11) << right << it->getAdverb2()->Words6 << endl;
		cout << "Dear Science Teacher,Please excuse" << setw(11) << left << "." << setw(11) << right << it->getName6()->Words6 << endl;
		cout << "for being late for your" << setw(11) << left << "." << setw(11) << right << it->getAdjective16()->Words6 << endl;
		cout << "science class. It's my fault. I feel" << setw(11) << left << "." << setw(11) << right << it->getAdjective17()->Words6 << endl;
		cout << "" << setw(11) << left << "." << setw(11) << right << it->getName7()->Words6 << endl;
		cout << "was up until the" << setw(11) << left << "." << setw(11) << right << it->getAdjective18()->Words6 << endl;
		cout << "hours of the morning completing his/her" << setw(11) << left << "." << setw(11) << right << it->getAdjective19()->Words6 << endl;
		cout << "project. Just as he/she was going out the" << setw(11) << left << "." << setw(11) << right << it->getAdjective20()->Words6 << endl;
		cout << "door, I noticed that his/her only pair of" << setw(11) << left << "." << setw(11) << right << it->getPluralNoun13()->Words6 << endl;
		cout << "had a" << setw(11) << left << "." << setw(11) << right << it->getNoun17()->Words6 << endl;
		cout << "in them. It took me an hour to find my" << setw(11) << left << "." << setw(11) << right << it->getPluralNoun14()->Words6 << endl;
		cout << "so I could see to " << setw(11) << left << "." << setw(11) << right << it->getVerb3()->Words6 << endl;
		cout << "the needle, enabling me to sew his/her" << setw(11) << left << "." << setw(11) << right << it->getPluralNoun15()->Words6 << endl;
		cout << " back together";
	}

	int main{
		//STORY SEVEN
		cout << "This" << setw(11) << left << "." << setw(11) << right << it->getPronoun1()->Words7 << endl;
		cout << "is open to all" << setw(11) << left << "." << setw(11) << right << it->getPluralNoun16()->Words7 << endl;
		cout << "with previous" << setw(11) << left << "." << setw(11) << right << it->getNoun18()->Words7 << endl;
		cout << "music experience and non-band students who wish to participate as members of the colorguard. No previous" << setw(11) << left << "." << setw(11) << right << it->getVerbING4()->Words7 << endl;
		cout << "experience is required. The" << setw(11) << left << "." << setw(11) << right << it->getVerbING4()->Words7 << endl;
		cout << "band performs at several events that take place outside of the school day including" << setw(11) << left << "." << setw(11) << right << it->getEvent1()->Words7 << endl;
		cout << "games, parades," << setw(11) << left << "." << setw(11) << right << it->getEvent()->Words7 << endl;
		cout << "and local" << setw(11) << left << "." << setw(11) << right << it->getLocation()->Words7 << endl;
		cout << "Participation in performances as well as summer band camp and occasional evening rehearsals are required. This course is  required for all " << setw(11) << left << "." << setw(11) << right << it->getPluralNoun17()->Words7 << endl;
		cout << "" << setw(11) << left << "." << setw(11) << right << it->getVerbING14()->Words7 << endl;
		cout << "in Concert Band, Symphonic Band or Wind Ensemble." << setw(11) << left << "." << setw(11) << right << it->getVerbing14()->Words7 << endl;
		cout << "Band satisfies" << setw(11) << left << "." << setw(11) << right << it->getNumber3()->Words7 << endl;
		cout << " credit of PE per term";
	}
	*/