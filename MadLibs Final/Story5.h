#pragma once
#include <string>
#include <vector>

using namespace std;
/*adverb, feeling, conjunction*/
class Words5{
private:
	string noun12;
	string noun13;
	string noun14;
	string noun15;
	string noun16;
	string adjective12;
	string adjective13;
	string verb2;
	string verbING3;
	string name4;
	string animal1;
	string adverb1;
	string feeling1;
	string conjunction1;
	string story5;
public:
	Words5();
	void setNoun12(string value);
	void setNoun13(string value);
	void setNoun14(string value);
	void setNoun15(string value);
	void setNoun16(string value);
	void setAdjective12(string value);
	void setAdjective13(string  value);
	void setVerb2(string value);
	void setVerbING3(string value);
	void setName4(string value);
	void setAnimal1(string value);
	void setAdverb1(string Value);
	void setFeeling1(string Value);
	void setConjunction1(string Value);
	void setStory5(string value);
	string getNoun12();
	string getNoun13();
	string getNoun14();
	string getNoun15();
	string getNoun16();
	string getAdjective12();
	string getAdjective13();
	string getVerb2();
	string getVerbING3();
	string getName4();
	string getAnimal1();
	string getAdverb1();
	string getFeeling1();
	string getConjunction1();
	string getStory5();
};