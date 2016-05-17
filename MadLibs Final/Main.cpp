#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>

#include "Words.h"

#include "Story1.h"
#include "Story2.h"
#include "Story3.h"
#include "Story4.h"
#include "Story5.h"
#include "Story6.h"
#include "Story7.h"

#include "Story.h"

using namespace std;

void storyOne(){
	Words words;

	cout << "Enter a noun:  ";
	cin >> words.noun1;
	cout << "Enter an adjective:  ";
	cin >> words.adjective1;
	cout << "Enter an adjective:  ";
	cin >> words.adjective2;
	cout << "Enter an adjective  ";
	cin >> words.adjective3;
	cout << "Enter a name:  ";
	cin >> words.femaleName1;
	cout << "Enter a name:  ";
	cin >> words.maleName1;
	cout << "Enter a job:  ";
	cin >> words.occupation1;
	cout << "Enter a job:  ";
	cin >> words.occupation2;
	cout << "Enter a body part:  ";
	cin >> words.partOfBod1;
	cout << "Enter a verb ending in ING:  ";
	cin >> words.verbING1;

	StoryOne one;
	one.makeStory(words);
}

void storyTwo() {
	Words words;

	cout << "Enter an adjective:  ";
	cin >> words.adjective4;
	cout << "Enter an adjective:  ";
	cin >> words.adjective5;
	cout << "Enter an adjective:  ";
	cin >> words.adjective6;
	cout << "Enter an adjective  ";
	cin >> words.adjective7;
	cout << "Enter a noun:  ";
	cin >> words.noun2;
	cout << "Enter a noun:  ";
	cin >> words.noun3;
	cout << "Enter a noun:  ";
	cin >> words.noun4;
	cout << "Enter a noun:  ";
	cin >> words.noun5;
	cout << "Enter a number:  ";
	cin >> words.number1;
	cout << "Enter a body part:  ";
	cin >> words.partOfBod2;
	cout << "Enter a body part:  ";
	cin >> words.partOfBod3;
	cout << "Enter a plural noun:  ";
	cin >> words.pluralNoun1;
	cout << "Enter a plural noun:  ";
	cin >> words.pluralNoun2;
	cout << "Enter a plural noun:  ";
	cin >> words.pluralNoun3;
	cout << "Enter a plural noun:  ";
	cin >> words.pluralNoun4;
	cout << "Enter a verb:  ";
	cin >> words.verb1;
	cout << "Enter a verb ending in ing:  ";
	cin >> words.verbING2;

	StoryTwo two;
	two.makeStory(words);
}

void storyThree(){
	Words words;


	cout << "Enter an adjective:  ";
	cin >> words.adjective8;
	cout << "Enter a celebrity:  ";
	cin >> words.celebrity1;
	cout << "Enter a last name:  ";
	cin >> words.lastName1;
	cout << "Enter a last name:  ";
	cin >> words.lastName2;
	cout << "Enter a noun:  ";
	cin >> words.noun6;
	cout << "Enter a noun:  ";
	cin >> words.noun7;
	cout << "Enter a plural animal:  ";
	cin >> words.pluralAnimal1;
	cout << "Enter a plural noun:  ";
	cin >> words.pluralNoun5;
	cout << "Enter a plural noun:  ";
	cin >> words.pluralNoun6;
	cout << "Enter a plural noun:  ";
	cin >> words.pluralNoun7;
	cout << "Enter a plural noun:  ";
	cin >> words.pluralNoun8;
	cout << "Enter a plural noun:  ";
	cin >> words.pluralNoun9;


	StoryThree three;
	three.makeStory(words);
}
void storyFour(){
Words words;

	cout << "Enter an adjective:  ";
	cin >> words.adjective9;
	cout << "Enter an adjective:  ";
	cin >> words.adjective10;
	cout << "Enter an adjective:  ";
	cin >> words.adjective11;
	cout << "Enter a plural noun:  ";
	cin >> words.pluralNoun9;
	cout << "Enter a plural noun:  ";
	cin >> words.pluralNoun10;
	cout << "Enter a plural noun:  ";
	cin >> words.pluralNoun11;
	cout << "Enter a noun:  ";
	cin >> words.noun8;
	cout << "Enter a noun:  ";
	cin >> words.noun9;
	cout << "Enter a noun:  ";
	cin >> words.noun10;
	cout << "Enter a name:  ";
	cin >> words.name1;
	cout << "Enter a name:  ";
	cin >> words.name2;
	cout << "Enter a name:  ";
	cin >> words.name3;
	cout << "Enter a state:  ";
	cin >> words.state1;
	cout << "Enter a state:  ";
	cin >> words.state2;
	cout << "Enter a plant:  ";
	cin >> words.plant1;


	StoryFour four;
	four.makeStory(words);
}

void storyFive(){
	Words words;

	cout << "Enter a noun:  ";
	cin >> words.noun11;
	cout << "Enter a noun:  ";
	cin >> words.noun12;
	cout << "Enter a noun:  ";
	cin >> words.noun13;
	cout << "Enter a noun:  ";
	cin >> words.noun14;
	cout << "Enter a noun:  ";
	cin >> words.noun15;
	cout << "Enter an adjective:  ";
	cin >> words.adjective12;
	cout << "Enter an adjective:  ";
	cin >> words.adjective13;
	cout << "Enter a verb  :";
	cin >> words.verb2;
	cout << "Enter a verb ending in ing:  ";
	cin >> words.verbING3;
	cout << "Enter a name:  ";
	cin >> words.name4;
	cout << "Enter an animal:  ";
	cin >> words.animal1;
	cout << "Enter an adverb:  ";
	cin >> words.adverb1;
	cout << "Enter a feeling:  ";
	cin >> words.feeling1;
	cout << "Enter a conjunction:  ";
	cin >> words.conjunction1;

	StoryFive five;
	five.makeStory(words);
}

void storySix(){
	Words words;

	cout << "Enter an adjective:  ";
	cin >> words.adjective14;
	cout << "Enter an adjective:  ";
	cin >> words.adjective15;
	cout << "Enter an adjective:  ";
	cin >> words.adjective16;
	cout << "Enter an adjective:  ";
	cin >> words.adjective17;
	cout << "Enter an adjective:  ";
	cin >> words.adjective18;
	cout << "Enter an adjective:  ";
	cin >> words.adjective19;
	cout << "Enter an adjective:  ";
	cin >> words.adjective20;
	cout << "Enter an adverb:  ";
	cin >> words.adverb2;
	cout << "Enter a noun:  ";
	cin >> words.noun16;
	cout << "Enter a noun:  ";
	cin >> words.noun17;
	cout << "Enter a noun:  ";
	cin >> words.noun18;
	cout << "Enter a noun:  ";
	cin >> words.noun9;
	cout << "Enter a number:  ";
	cin >> words.number2;
	cout << "Enter a name:  ";
	cin >> words.name5;
	cout << "Enter a name:  ";
	cin >> words.name6;
	cout << "Enter a name:  ";
	cin >> words.name7;
	cout << "Enter a plural noun:  ";
	cin >> words.pluralNoun12;
	cout << "Enter a plural noun:  ";
	cin >> words.pluralNoun13;
	cout << "Enter a plural noun:  ";
	cin >> words.pluralNoun14;
	cout << "Enter a plural noun:  ";
	cin >> words.pluralNoun15;
	cout << "Enter a verb:  ";
	cin >> words.verb3;
	cout << "Enter a part of body:  ";
	cin >> words.partOfBod4;
	cout << "Enter a liquid:  ";
	cin >> words.liquid1;


	StorySix six;
	six.makeStory(words);
}

void storySeven(){
	Words words;


	cout << "Enter a pronoun:  ";
	cin >> words.pronoun1;
	cout << "Enter a plural noun:  ";
	cin >> words.pluralNoun16;
	cout << "Enter a plural noun:  ";
	cin >> words.pluralNoun17;
	cout << "Enter a noun:  ";
	cin >> words.noun19;
	cout << "Enter a verb ending in ing:  ";
	cin >> words.verbING4;
	cout << "Enter an event:  ";
	cin >> words.event1;
	cout << "Enter an event:  ";
	cin >> words.event2;
	cout << "Enter a location:  ";
	cin >> words.location1;
	cout << "Enter a number:  ";
	cin >> words.number3;

	StorySeven seven;
	seven.makeStory(words);
}


int main() {
	cout << "Select story 1, 2, 3, 4, 5, 6, or 7";
	int selection;
	cin >> selection;
	switch (selection) {
	case 1:
		storyOne();
		break;
	case 2:
		storyTwo();
		break;
	case 3:
		storyThree();
		break;
	case 4:
		storyFour();
		break;
	case 5:
		storyFive();
		break;
	case 6:
		storySix();
		break;
	case 7:
		storySeven();
		break;
	}
	system("pause");
	return 0;
}