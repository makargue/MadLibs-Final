/*adjective,adjective, adjective,adverb,noun,noun,noun,number,
name,name,plural noun, plural noun, plural noun, plural noun,liquid,verb
*/

#pragma once
#include <string>
#include <vector>

using namespace std;

class Words2{
private:
	string adjective14;
	string adjective15;
	string adjective16;
	string adjective17;
	string adjective18;
	string adjective19;
	string adjective20;
	string adverb2;
	string noun16;
	string noun17;
	string noun18;
	string number2;
	string name5;
	string name6;
	string pluralNoun13;
	string pluralNoun14;
	string pluralNoun15;
	string pluralNoun16;
	string verb3;
	string liquid1;
	string story6;
public:
	Words2();
	void setAdjective4(string value);
	void setAdjective5(string value);
	void setAdjective6(string value);
	void setAdjective7(string value);
	void setNoun2(string value);
	void setNoun3(string value);
	void setNoun4(string  value);
	void setNoun5(string value);
	void setNumber1(string value);
	void setPartOfBod2(string value);
	void setPartOfBod3(string  value);
	void setPluralNoun1(string value);
	void setPluralNoun2(string value);
	void setPluralNoun3(string value);
	void setPluralNoun4(string value);
	void setVerb1(string value);
	void setVerbING2(string value);
	void setStory2(string value);
	string getAdjective4();
	string getAdjective5();
	string getAdjective6();
	string getAdjective7();
	string getNoun2();
	string getNoun3();
	string getNoun4();
	string getNoun5();
	string getNumber1();
	string getPartOfBod2();
	string getPartOfBod3();
	string getPluralNoun1();
	string getPluralNoun2();
	string getPluralNoun3();
	string getPluralNoun4();
	string getVerb1();
	string VerbING2();
	string Story2();
};