#pragma once
#include <string>
#include <vector>

using namespace std;

class Words1{
private:
	string noun1;
	string adjective1;
	string adjective2;
	string adjective3;
	string femaleName1;
	string maleName1;
	string occupation1;
	string occupation2;
	string partOfBod1;
	string verbING1; 
	string story1;
public:
	Words1();
	void setNoun1(string value);
	void setAdjective1(string value);
	void setAdjective2(string value);
	void setAdjective3(string value);
	void setFemaleName1(string value);
	void setMaleName1(string value);
	void setOccupation1(string  value);
	void setOccupation2(string value);
	void setPartOfBod1(string value);
	void setVerbING1(string value);
	void setStory1(string  value);
	string getNoun1();
	string getAdjective1();
	string getAdjective2();
	string getAdjective3();
	string getFemaleName1();
	string getMaleName1();
	string getOccupation1();
	string getOccupation2();
	string getPartOfBod1();
	string getVerbING1();
	string getStory1();
};