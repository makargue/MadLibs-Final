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
		cout << " actors competing in the same category.First and foremost, my thanks to " << words.femaleName1 << endl;
		cout << " You couldn't work with a better " << words.occupation1 << endl;
		cout << " And I'm sure I wouldn't be " << words.verbING1 << endl;
		cout << " here tonight if it weren't for my " << words.occupation2 << endl;
		cout << " director. I must also thank" << words.maleName1 << endl;
		cout << " who wrote a" << setw(11) << left << "." << words.adjective3 << endl;
		cout << "script for me. Of course, none of this would be happening if it weren't for my agent, who convinced the network that I could play a 75 year - old, retired" << words.noun1 << endl;

	}
}; 

class StoryTwo :public Story{
public:
	void makeStory(Words words){
		cout << "I love to " << words.verb1 << endl;
		cout << "video games. I can play them day and " << words.noun2 << endl;
		cout << "My mom and" << words.noun3 << endl;
		cout << "are not too happy with me" << words.verbING2 << endl;
		cout << "so much time in front of the television" << words.adjective4 << endl;
		cout << "games help children develop hand-" << words.partOfBod2 << endl;
		cout << "coordination and improve their learning" << words.pluralNoun1 << endl;
		cout << ", he also seems to think they have" << words.adjective5 << endl;
		cout << "side effects on one's" << words.partOfBod3 << endl;
		cout << "Both of my " << words.pluralNoun2 << endl;
		cout << "think this is due to a " << words.adjective6 << endl;
		cout << "use of violence in the majority of the " << words.pluralNoun3 << endl;
		cout << "Finally, we all arrived at a" << words.noun4 << endl;
		cout << "compromise: After dinner I can play" << words.number1 << endl;
		cout << "hours of video games, provided I help clear the" << words.noun5 << endl;
		cout << "and wash the" << words.pluralNoun4 << endl;
	}
};

class StoryThree :public Story{
public:
	void makeStory(Words words){
		cout << "Young people today would rather listen to a good rock music concert than to Johann Sebastian " << words.lastName1 << endl;
		cout << " or to Ludvig von" << words.lastName2 << endl;
		cout << "  Rock music is played by " << words.adjective8 << endl;
		cout << " groups of young men who wear their hair below their " << words.pluralNoun5 << endl;
		cout << " They also wear very odd and colorful " << words.pluralNoun6 << endl;
		cout << "and often have beards. The groups have attractive names such as The " << words.pluralAnimal1 << endl;
		cout << "or " << words.celebrity1 << endl;
		cout << " and The Three " << words.pluralNoun7 << endl;
		cout << " They usually play electric" << words.pluralNoun8 << endl;
		cout << "One member of the group usually sits on a raised platform and sets the rhythm by beating his " << words.noun6 << endl;
		cout << " The songs are mostly about some fellow who has been rejected by his " << words.noun7 << endl;
		cout << "They are very sad and when young girls hear them, they often get tears in their  " << words.pluralNoun9 << endl;
	
	}
};

class StoryFour :public Story{
public:
	void makeStory(Words words){
		cout << "Dear Mom and Dad, Camp is so " << words.adjective9 << endl;
		cout << "The food here is really good, unlike that camp food " << words.name1 << endl;
		cout << " told me about. We get to eat " << words.pluralNoun10 << endl;
		cout << " and" << words.pluralNoun11 << endl;
		cout << "every day of the week! This week I get to try out all the activities and sports. We are canoeing in " << words.adjective10 << endl;
		cout << " water on Lake " << words.name2 << endl;
		cout << " We also are learning how to dive off the" << words.adjective11 << endl;
		cout << " diving board! I tried archery and I wasn't very good—I hit a(n)" << words.plant1 << endl;
		cout << " by mistake. I'll practice and get better, though. For Arts and Crafts, I made a clay" << words.noun8 << endl;
		cout << " and a" << words.noun9 << endl;
		cout << " out of macramé, and a shelf for Mom to put her" << words.pluralNoun11 << endl;
		cout << " on. I even learned about whittling. I made a(n)" << words.noun10 << endl;
		cout << " out of wood! Can you believe it? I especially like all the friends I am meeting. Kids here come from all over the country, from as far away as " << words.state1 << endl;
		cout << " and" << words.state2 << endl;
		cout << "  I am sorry I have to leave soon. I sure am going to miss all the fun I've had here. Maybe I can go camping in the backyard when I get back and pretend that I'm still at camp. Do you think Spot will want to camp with me? Love always," << words.name3 << endl;



	}
};

class StoryFive :public Story{
public:
	void makeStory(Words words){
		cout << "The world's" << words.adjective12<< endl;
		cout << "supersonic" << words.animal1 << endl;
		cout << "unrivalled in speed returns once more. Always the drifter,Sonic goes" << words.adverb1<< endl;
		cout << "" << words.conjunction1 << endl;
		cout << "the wind takes him, and lives life accordingly to his own" << words.noun11 << endl;
		cout << "rather than the" << words.noun12 << endl;
		cout << "of those around him. He's basically  " << words.adjective13<< endl;
		cout << "but when he gets fired up over an injustice, his" << words.noun13 << endl;
		cout << "explodes with surprising consequences. Always at the" << words.verbING3<< endl;
		cout << "end of this " << words.feeling1<< endl;
		cout << "is his arch-enemy Dr. " << words.name4 << endl;
		cout << "whose fiendish plots to take over the world are constantly being foiled by Sonic. Saving the world is a nice" << words.noun14 << endl;
		cout << "but Sonic is soon off to" << words.verb2 << endl;
		cout << "his next" << words.noun15<< endl;
	}
};

class StorySix :public Story{
public:
	void makeStory(Words words){
		cout << "Dear Physical Education Teacher, Please excuse my son/daughter from missing" << words.adjective14<< endl;
		cout << "class yesterday. When" << words.name5 << endl;
		cout << "awakened yesterday, I could see that his/her nose was" << words.adjective15 << endl;
		cout << "He/She also complained of " << words.partOfBod4<< endl;
		cout << "aches and having a sore" << words.noun16 << endl;
		cout << "and I took him/her to the family" << words.noun17 << endl;
		cout << " The doctor quickly diagnosed it to be the " << words.number2 << endl;
		cout << "-hour flu and suggested he/she take two" << words.pluralNoun12<< endl;
		cout << "with a glass of " << words.liquid1<< endl;
		cout << "and go to bed" << words.adverb2 << endl;
		cout << "Dear Science Teacher,Please excuse" <<words.name6 << endl;
		cout << "for being late for your" << words.adjective16<< endl;
		cout << "science class. It's my fault. I feel" << words.adjective17<< endl;
		cout << "" << words.name7 << endl;
		cout << "was up until the" << words.adjective18 << endl;
		cout << "hours of the morning completing his/her" << words.adjective19<< endl;
		cout << "project. Just as he/she was going out the" <<words.adjective20<< endl;
		cout << "door, I noticed that his/her only pair of" << words.pluralNoun13<< endl;
		cout << "had a" <<words.noun18 << endl;
		cout << "in them. It took me an hour to find my" << words.pluralNoun14<< endl;
		cout << "so I could see to " << words.verb3 << endl;
		cout << "the needle, enabling me to sew his/her" << words.pluralNoun15<< endl;
		cout << " back together";
	}
};

class StorySeven :public Story{
public:
	void makeStory(Words words){
		cout << "This" << words.pronoun1 << endl;
		cout << "is open to all" << words.pluralNoun16<< endl;
		cout << "with previous" << words.noun19<< endl;
		cout << "music experience and non-band students who wish to participate as members of the colorguard. No previous" << words.verbING4<< endl;
		cout << "experience is required. The" << words.verbING4 << endl;
		cout << "band performs at several events that take place outside of the school day including" << words.event1 << endl;
		cout << "games, parades," << words.event2 << endl;
		cout << "and local" << words.location1 << endl;
		cout << "Participation in performances as well as summer band camp and occasional evening rehearsals are required. This course is  required for all " <<words.pluralNoun17<< endl;
		cout << "" << setw(11) << left << "." << words.verbING4 << endl;
		cout << "in Concert Band, Symphonic Band or Wind Ensemble." << words.verbING4<< endl;
		cout << "Band satisfies" << words.number3<< endl;
		cout << " credit of PE per term";
	}
};