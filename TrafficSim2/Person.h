#pragma once
#include <string>
using namespace std;

class Person {
	string personName = "Dante";

public:
	Person();
	~Person();

	Person(string name) {
		personName = name;
	}

	string getName() {
		return personName;
	}
};

