#pragma once
#include "Person.h"
#include <vector>
using namespace std;

class Building
{
	string buildingName;
	vector<Person> inside;
	vector<Person> assigned;


public:
	Building();
	~Building();
};

