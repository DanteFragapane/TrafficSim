#include <iostream>
#include <fstream>
#include "Home.h"
using namespace std;

int main()
{
	vector<Person> maleList;
	vector<Person> femaleList;
	vector<string> familyNames;
	vector<Family> families;
	vector<Home> homes;

	ifstream mFile;
	ifstream fFile;
	mFile.open("Male_Names.txt");
	fFile.open("Female_Names.txt");
	string maleName;
	string femaleName;

	if (!mFile || !fFile) {
		cout << "Unable to open file";
	}
	if (mFile && fFile) {
		for (int i = 0; i < 100; i++) {
			mFile >> maleName;
			fFile >> femaleName;
			femaleList.push_back(Person(femaleName));

			if (i % 2 == 0) { // If even, i.e. first names only!
				maleList.push_back(Person(maleName));
				cout << "FIRST: " + maleName;
				cout << endl;
				cout << "FIRST: " + femaleName;
			}
			else { // Odds, i.e. last names!
				familyNames.push_back(maleName);
				cout << "LAST: " + maleName;
			}
			cout << endl;
			cout << endl;
		}
	}

	for (int j = 0; j < 50; j++) {
		vector<Person> names = { maleList.at(j), femaleList.at(j) };
		families.push_back(Family(familyNames[j], names));
	}
	
}