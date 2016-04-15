#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>

#include "Story1.h"

using namespace std;

int main() {
	vector<Words1> words1;
	double noun1;
	double adjective1;
	double adjective2;
	double adjective3;
	double femaleName1;
	double maleName1;
	double occupation1;
	double occupation2;
	double partOfBod1;
	double verbING1;

	ifstream in;
	ofstream out;
	
	while (!in.eof() && in.good()) {
		Words1 temp;
		in >> noun1;
		in >> adjective1;
		in >> adjective2;
		in >> adjective3;
		in >> femaleName1;
		in >> maleName1;
		in >> occupation1;
		in >> occupation2;
		in >> partOfBod1;
		in >> verbING1;
	
		words1.push_back(temp);
	}

in.close();

while (!in.eof() && in.good()) {

	for (vector<Words1>::iterator it = words1.begin(); it != words1.end(); it++) {
	}
}
in.close();

out.open("output.txt");

	for(vector<Words1>::iterator it = words1.begin(); it != words1.end(); it++) {
		cout << " Thank You! Thank you from the bottom of my " << setw(11) << left << "." << setw(11) << right << it->getPartOfBod1() << endl;
		cout << " I don't know what to say. I'm speechless. I truly didn't expect to win this " << setw(11) << left << "," << setw(11) << right << it->getAdjective1() << endl;
		cout << " certainly not with so many _" << setw(11) << left << " " << setw(11) << right << it->getAdjective2() << endl;
		cout << " actors competing in the same category.First and foremost, my thanks to " << setw(11) << left << "." << setw(11) << right << it->getFemaleName1() << endl;
		cout << " You couldn't work with a better " << setw(11) << left << "." << setw(11) << right << it->getOccupation1() << endl;
		cout << " And I'm sure I wouldn't be " << setw(11) << left << "." << setw(11) << right << it->getVerbING1() << endl;
		cout << " here tonight if it weren't for my " << setw(11) << left << "." << setw(11) << right << it->getOccupation2() << endl;
		cout << " director. I must also thank" << setw(11) << left << "." << setw(11) << right << it->getMaleName1() << endl;
		cout << " who wrote a" << setw(11) << left << "." << setw(11) << right << it->getAdjective3() << endl;
		cout << "script for me. Of course, none of this would be happening if it weren't for my agent, who convinced the network that I could play a 75 year - old, retired" << setw(11) << left << "." << setw(11) << right << it->getNoun1() << endl;
		
		/*	string noun1;
		string adjective1;
		string adjective2;
		string adjective3;
		string femaleName1;
		string maleName1;
		string occupation1;
		string occupation2;
		string partOfBod1;
		string verbING1; */

	system("pause");
	return 0;
}
