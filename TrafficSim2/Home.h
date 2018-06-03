#pragma once
#include "Family.h"
#include <vector>
using namespace std;

class Home {
	string houseName;
	vector<Family> families;

	public:
		Home();
		~Home();

		Home(string name, vector<Family> familyList) {
			houseName = name;
			families = familyList;
		}

		string getHouseName() {
			return houseName;
		}

		vector<Family> getFamilies() {
			return families;
		}


		
};

