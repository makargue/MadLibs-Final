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

int main(){
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
	cin >> words.occupation1;
	cout << "Enter a job:";
	cin >> words.occupation2;
	cout << "Enter a body part:";
	cin >> words.partOfBod1;
	cout << "Enter a verb ending in ING";
	cin >> words.verbING1;


	StoryOne one;
	one.makeStory(words);

}

	int main(){
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
		cout << "Enter a noun:";
		cin >> words.noun2;
		cout << "Enter a noun";
		cin >> words.noun3;
		cout << "Enter a noun:";
		cin >> words.noun4;
		cout << "Enter a noun:";
		cin >> words.noun5;
		cout << "Enter a number:";
		cin >> words.number1;
		cout << "Enter a body part";
		cin >> words.partOfBod2;
		cout << "Enter a body part";
		cin >> words.partOfBod3;
		cout << "Enter a plural noun";
		cin >> words.pluralNoun1;
		cout << "Enter a plural noun";
		cin >> words.pluralNoun2;
		cout << "Enter a plural noun";
		cin >> words.pluralNoun3;
		cout << "Enter a plural noun";
		cin >> words.pluralNoun4;
		cout << "Enter a verb";
		cin >> words.verb1;
		cout << "Enter a verb ending in ing";
		cin >> words.verbING2;


		StoryTwo two;
		two.makeStory(words);

	}
	int main(){
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

	int main(){
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
	int main(){
	string noun11, noun12, noun13, noun14, noun15, adjective12, adjective13, verb2, verbING3, name4, animal1, adverb1, feeling1, conjunction1;
	noun11 = noun11;
	noun12 = noun12;
	noun13 = noun13;
	noun14 = noun14;
	noun15 = noun15;
	adjective12 = adjective12;
	adjective13 = adjective13;
	verb2 = verb2;
	verbING3 = verbING3;
	name4 = name4;
	animal1 = animal1;
	adverb1 = adverb1;
	feeling1 = feeling1;
	conjunction1 = conjunction1;


	Words words;

	cout << "Enter a noun:";
	cin >> words.noun11;
	cout << "Enter a noun:";
	cin >> words.noun12;
	cout << "Enter a noun:";
	cin >> words.noun13;
	cout << "Enter a noun:";
	cin >> words.noun14;
	cout << "Enter a noun:";
	cin >> words.noun15;
	cout << "Enter an adjective:";
	cin >> words.adjective12;
	cout << "Enter an adjective:";
	cin >> words.adjective13;
	cout << "Enter a verb:";
	cin >> words.verb2;
	cout << "Enter a verb ending in ing:";
	cin >> words.verbING3;
	cout << "Enter a name";
	cin >> words.name4;
	cout << "Enter an animal:";
	cin >> words.animal1;
	cout << "Enter an adverb:";
	cin >> words.adverb1;
	cout << "Enter a feeling";
	cin >> words.feeling1;
	cout << "Enter a conjunction:";
	cin >> words.conjunction1;

	StoryFive five;
	five.makeStory(words);
}
	int main(){
	string adjective14, adjective15, adjective16, adjective17, adjective18, adjective19, adjective20, adverb2, noun16, noun17, noun18, number2, name5, name6, name7, pluralNoun12, pluralNoun13, pluralNoun14, pluralNoun15, verb3, partOfBod4, liquid1;
	adjective14 = adjective14;
	adjective15 = adjective15;
	adjective16 = adjective16;
	adjective17 = adjective17;
	adjective18 = adjective18;
	adjective19 = adjective19;
	adjective20 = adjective20;
	adverb2 = adverb2;
	noun16 = noun16;
	noun17 = noun17;
	noun18 = noun18;
	number2 = number2;
	name5 = name5;
	name6 = name6;
	name7 = name7;
	pluralNoun12 = pluralNoun12;
	pluralNoun13 = pluralNoun13;
	pluralNoun14 = pluralNoun14;
	pluralNoun15 = pluralNoun15;
	verb3 = verb3;
	partOfBod4 = partOfBod4;
	liquid1 = liquid1;


	Words words;

	cout << "Enter an adjective:";
	cin >> words.adjective14;
	cout << "Enter an adjective:";
	cin >> words.adjective15;
	cout << "Enter an adjective:";
	cin >> words.adjective16;
	cout << "Enter an adjective:";
	cin >> words.adjective17;
	cout << "Enter an adjective:";
	cin >> words.adjective18;
	cout << "Enter an adjective:";
	cin >> words.adjective19;
	cout << "Enter an adjective:";
	cin >> words.adjective20;
	cout << "Enter an adverb:";
	cin >> words.adverb2;
	cout << "Enter a noun:";
	cin >> words.noun16;
	cout << "Enter a noun";
	cin >> words.noun17;
	cout << "Enter a noun:";
	cin >> words.noun18;
	cout << "Enter a noun:";
	cin >> words.noun9;
	cout << "Enter a number";
	cin >> words.number2;
	cout << "Enter a name:";
	cin >> words.name5;
	cout << "Enter a name:";
	cin >> words.name6;
	cout << "Enter a name:";
	cin >> words.name7;
	cout << "Enter a plural noun:";
	cin >> words.pluralNoun12;
	cout << "Enter a plural noun:";
	cin >> words.pluralNoun13;
	cout << "Enter a plural noun:";
	cin >> words.pluralNoun14;
	cout << "Enter a plural noun:";
	cin >> words.pluralNoun15;
	cout << "Enter a verb:";
	cin >> words.verb3;
	cout << "Enter a part of body:";
	cin >> words.partOfBod4;
	cout << "Enter a liquid:";
	cin >> words.liquid1;


	StorySix six;
	six.makeStory(words);
}
	int main(){
	string pronoun1, pluralNoun16, pluralNoun17, noun19, verbING4, event1, event2, location1, number3;
	pronoun1 = pronoun1;
	pluralNoun16 = pluralNoun16;
	pluralNoun17 = pluralNoun17;
	noun19 = noun19;
	verbING4 = verbING4;
	event1 = event1;
	event2 = event2;
	location1 = location1;
	number3 = number3;

	Words words;


	cout << "Enter a pronoun:";
	cin >> words.pronoun1;
	cout << "Enter a plural noun:";
	cin >> words.pluralNoun16;
	cout << "Enter a plural noun:";
	cin >> words.pluralNoun17;
	cout << "Enter a noun:";
	cin >> words.noun19;
	cout << "Enter a verb ending in ing:";
	cin >> words.verbING4;
	cout << "Enter an event";
	cin >> words.event1;
	cout << "Enter an event:";
	cin >> words.event2;
	cout << "Enter a location:";
	cin >> words.location1;
	cout << "Enter a number";
	cin >> words.number3;

	StorySeven seven;
	seven.makeStory(words);
}