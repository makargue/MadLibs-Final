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
		cout << " Thank You! Thank you from the\n";
		cout<<"bottom of my " << words.partOfBod1 << endl;
		cout << " I don't know what to say. I'm speechless.\n";
		cout<<"I truly didn't expect to win this " << words.adjective1 << endl;
		cout << "award. Certainly not with so many " << words.adjective2 << endl;
		cout << " actors competing in the same \n";
		cout << " category. First and foremost, \n";
		cout<<"thanks to " << words.femaleName1 << endl;
		cout << " You couldn't work with a better \n" << words.occupation1 << endl;
		cout << " And I'm sure I wouldn't be\n " << words.verbING1 << endl;
		cout << " here tonight if it weren't\n";
		cout<<"for my " << words.occupation2 << endl;
		cout << " director. I must also thank\n" << words.maleName1 << endl;
		cout << " who wrote a " << words.adjective3 << endl;
		cout << "script for me. Of course, none of \n";
		cout << "this would be happening if it weren't\n";
		cout << "for my agent, who convinced the network that \n";
		cout << "I could play a 75 year-old, retired " << words.noun1 << endl; 
		cout << "\n";
		cout << "\n";
		cout << "\n";
	}
};

class StoryTwo :public Story{
public:
	void makeStory(Words words){
		cout << "\n";
		cout << "I love to " << words.verb1 << endl;
		cout << "video games. I can play them\n";
		cout << "day and " << words.noun2 << endl;
		cout << "My mom and " << words.noun3 << endl;
		cout << "are not too happy with me " << words.verbING2 << endl;
		cout << "so much time in front of the\n";
		cout<<"television " << words.adjective4 << endl;
		cout << "games help children develop hand-" << words.partOfBod2 << endl;
		cout << "coordination and improve their\n";
		cout<<"learning " << words.pluralNoun1 << endl;
		cout << ", he also seems to think they \n";
		cout<<"have " << words.adjective5 << endl;
		cout << "side effects on one's " << words.partOfBod3 << endl;
		cout << "Both of my " << words.pluralNoun2 << endl;
		cout << "think this is due to a " << words.adjective6 << endl;
		cout << "use of violence in the majority \n";
		cout<<"of the " << words.pluralNoun3 << endl;
		cout << "Finally, we all arrived at a " << words.noun4 << endl;
		cout << "compromise: After dinner I can play " << words.number1 << endl;
		cout << "hours of video games, provided I help\n";
		cout<<"clear the " << words.noun5 << endl;
		cout << "and wash the " << words.pluralNoun4 << endl;
		cout<<"\n";
		cout << "\n";
		cout << "\n";
	}
};

class StoryThree :public Story{
public:
	void makeStory(Words words){
		cout << "\n";
		cout << "Young people today would rather\n";
		cout << "listen to a good rock music\n";
		cout << "concert than to Johann Sebastian " << words.lastName1 << endl;
		cout << " or to Ludvig von" << words.lastName2 << endl;
		cout << "  Rock music is played by " << words.adjective8 << endl;
		cout << " groups of young men who wear\n";
		cout << "their hair below their " << words.pluralNoun5 << endl;
		cout << " They also wear very odd and colorful " << words.pluralNoun6 << endl;
		cout << "and often have beards.\n";
		cout << "The groups have attractive names \n";
		cout << "such as The " << words.pluralAnimal1 << endl;
		cout << "or " << words.celebrity1 << endl;
		cout << " and The Three " << words.pluralNoun7 << endl;
		cout << " They usually play electric " << words.pluralNoun8 << endl;
		cout << "One member of the group usually\n";
		cout<<"sits on a raised platform and sets the\n rhythm by beating his " << words.noun6 << endl;
		cout << " The songs are mostly about some fellow\n who has been rejected \n by his " << words.noun7 << endl;
		cout << "They are very sad and when young\n girls hear them, they often get tears\n in their  " << words.pluralNoun9 << endl;
		cout << "\n";
		cout << "\n";
		cout << "\n";
	}
};

class StoryFour :public Story{
public:
	void makeStory(Words words){
		cout << "\n";
		cout << "Dear Mom and Dad, Camp is so " << words.adjective9 << endl;
		cout << "The food here is really good, \n unlike that camp food " << words.name1 << endl;
		cout << " told me about. We get to eat " << words.pluralNoun10 << endl;
		cout << " and " << words.pluralNoun11 << endl;
		cout << "every day of the week! This week\n I get to try out all the activities\n and sports. We are \n canoeing in " << words.adjective10 << endl;
		cout << " water on Lake " << words.name2 << endl;
		cout << " We also are learning how to dive off the " << words.adjective11 << endl;
		cout << " diving board! I tried archery and\n I wasn't very good—I hit a(n) " << words.plant1 << endl;
		cout << " by mistake. I'll practice and get \n better, though. For Arts and Crafts, \n I made a clay " << words.noun8 << endl;
		cout << " and a" << words.noun9 << endl;
		cout << " out of macramé, and a shelf for Mom\n to put her " << words.pluralNoun11 << endl;
		cout << " on. I even learned about whittling.\n I made a(n) " << words.noun10 << endl;
		cout << " out of wood! Can you believe it? \n I especially like all the friends I am meeting. \n Kids here come from all over the country, \n from as far away as " << words.state1 << endl;
		cout << " and" << words.state2 << endl;
		cout << "  I am sorry I have to leave soon. \n I sure am going to miss all the \n fun I've had here.\n Maybe I can go camping in the backyard\n when I get back and pretend\n that I'm still at camp. \n Do you think Spot will want to\n camp with me? Love always, " << words.name3 << endl;
		cout << "\n";
		cout << "\n";
		cout << "\n";
	}
};

class StoryFive :public Story{
public:
	void makeStory(Words words){
		cout << "\n";
		cout << "The world's " << words.adjective12<< endl;
		cout << "supersonic " << words.animal1 << endl;
		cout << "unrivalled in speed returns once more.\n Always the drifter,Sonic goes " << words.adverb1<< endl;
		cout << " " << words.conjunction1 << endl;
		cout << "the wind takes him, and lives life \n accordingly to his own " << words.noun11 << endl;
		cout << "rather than th e" << words.noun12 << endl;
		cout << "of those around him. He's basically  " << words.adjective13<< endl;
		cout << "but when he gets fired up over an injustice, his " << words.noun13 << endl;
		cout << "explodes with surprising consequences.\n Always at the " << words.verbING3<< endl;
		cout << "end of this " << words.feeling1<< endl;
		cout << "is his arch-enemy Dr. " << words.name4 << endl;
		cout << "whose fiendish plots to take over the \n world are constantly being foiled by Sonic. \n Saving the world is a nice " << words.noun14 << endl;
		cout << "but Sonic is soon off to " << words.verb2 << endl;
		cout << "his next " << words.noun15<< endl;
		cout << "\n";
		cout << "\n";
		cout << "\n";
	}
};

class StorySix :public Story{
public:
	void makeStory(Words words){
		cout << "\n";
		cout << "Dear Physical Education Teacher,\n Please excuse my son/daughter\n from missing " << words.adjective14<< endl;
		cout << "class yesterday. When " << words.name5 << endl;
		cout << "awakened yesterday, I could see\n that his/her nose was " << words.adjective15 << endl;
		cout << "He/She also complained of " << words.partOfBod4<< endl;
		cout << "aches and having a sore " << words.noun16 << endl;
		cout << "and I took him/her to the\n family " << words.noun17 << endl;
		cout << " The doctor quickly diagnosed it\n to be the " << words.number2 << endl;
		cout << "-hour flu and suggested he/she \ntake two " << words.pluralNoun12<< endl;
		cout << "with a glass of " << words.liquid1<< endl;
		cout << "and go to bed " << words.adverb2 << endl;
		cout << "Dear Science Teacher,Please excuse " <<words.name6 << endl;
		cout << "for being late for your " << words.adjective16<< endl;
		cout << "science class. It's my fault.\n I feel " << words.adjective17<< endl;
		cout << " " << words.name7 << endl;
		cout << "was up until the" << words.adjective18 << endl;
		cout << "hours of the morning completing\n his/her " << words.adjective19<< endl;
		cout << "project. Just as he/she was going\n out the " <<words.adjective20<< endl;
		cout << "door, I noticed that his/her only \n pair of " << words.pluralNoun13<< endl;
		cout << "had a " <<words.noun18 << endl;
		cout << "in them. It took me an hour to find\n my " << words.pluralNoun14<< endl;
		cout << "so I could see to " << words.verb3 << endl;
		cout << "the needle, enabling me to sew his/her " << words.pluralNoun15<< endl;
		cout << " back together";
		cout << "\n";
		cout << "\n";
		cout << "\n";
	}
};

class StorySeven :public Story{
public:
	void makeStory(Words words){
		cout << "\n";
		cout << "This " << words.pronoun1 << endl;
		cout << "is open to all " << words.pluralNoun16<< endl;
		cout << "with previous " << words.noun19<< endl;
		cout << "music experience and non-band students\n who wish to participate as members \n of the colorguard. \n No previous " << words.verbING4<< endl;
		cout << "experience is required. The " << words.verbING4 << endl;
		cout << "band performs at several events that take\n place outside of the school \n day including " << words.event1 << endl;
		cout << "games, parades, " << words.event2 << endl;
		cout << "and local" << words.location1 << endl;
		cout << "Participation in performances as well as\n summer band camp and occasional evening\n rehearsals are required. \n This course is required for all " <<words.pluralNoun17<< endl;
		cout << ""<< words.verbING4 << endl;
		cout << "in Concert Band, Symphonic Band or \n Wind Ensemble. " << words.verbING4<< endl;
		cout << "Band satisfies " << words.number3<< endl;
		cout << " credit of PE per term";
		cout << "\n";
		cout << "\n";
		cout << "\n";
	}
};