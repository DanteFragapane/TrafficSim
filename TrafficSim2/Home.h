#pragma once
#include "Building.h"
#include "Family.h"

class Home :
	public Building
{
	string buildingName;
	vector<Family> families;

	public:
		Home();
		~Home();

		Home(string name, vector<Family> familyList) {
			buildingName = name;
			families = familyList;
		}

		string getHouseName() {
			return buildingName;
		}

		vector<Family> getFamilies() {
			return families;
		}
};

