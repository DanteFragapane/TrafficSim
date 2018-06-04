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
			// Grab the names from the txt file
			mFile >> maleName;
			fFile >> femaleName;
			// Push the female object into the vector<Person>
			femaleList.push_back(Person(femaleName));

			if (i % 2 == 0) { // If even, i.e. first names only!
				// Push the male object into the vector<Person>
				maleList.push_back(Person(maleName));
				cout << "FIRST: " + maleName << endl;
				cout << "FIRST: " + femaleName;
			}
			else { // Odds, i.e. last names!
				// Push the family name into the vector<string>
				familyNames.push_back(maleName);
				cout << "LAST: " + maleName << endl;
			}
			cout << endl;
		}
	}

	for (int j = 0; j < 50; j++) {
		// Create a vector<Person> pair for a male and female couple
		vector<Person> names = { maleList.at(j), femaleList.at(j) };
		// Push the family object into the vector<Family>
		families.push_back(Family(familyNames[j], names));
	}
	// Push the home object into the vector<Home>
	
	ifstream buildingNameFile;
	buildingNameFile.open("Building_Names.txt");
	string buildingName;
	for (int k = 0; 
		k < 25; k++) {
		vector<Family> famList;
		for (int l = 0; l < 25; l++) {
			famList.push_back(families[l]);
		}
		buildingNameFile >> buildingName;
		homes.push_back(Home(buildingName, famList));
	}

	ofstream homesFile;
	homesFile.open("Homes.txt");
	for (int m = 0; m < 25; m++)
	{
		homesFile << homes[m].getHouseName() << endl;
	}

}