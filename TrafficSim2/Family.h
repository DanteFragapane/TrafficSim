#pragma once
#include <string>
#include <vector>
#include "Person.h"
using namespace std;

class Family {
	string familyName;
	vector<Person> people;

	public:
		Family();
		~Family();

		Family(string name, vector<Person> names) {
			familyName = name;
			people = names;
		}

		vector<Person> getNames() {
			return people;
		}
};

