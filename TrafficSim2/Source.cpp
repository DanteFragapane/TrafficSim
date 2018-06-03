#include <iostream>
#include <fstream>
#include "Home.h"
//#include "male.txt"
//#include "female.txt"
using namespace std;

string male_names[] = { "Guillermo", "Chase","Israel", "Reynaldo", "Burton", "Dante", "Max", "Luca", "Troy", "Luis", "Matt", "Nate" };


int main()
{
	Person Dante = Person("Dante");
	Person Max = Person("Max");
	Person Luca = Person("Luca");
	vector<Person> names = { Dante, Max, Luca };
	Family Fragapanes = Family("Fragapane", names);

	Person Troy = Person("Troy");
	names = { Troy };
	Family Sextons = Family("Sexton", names);

	vector<Family> families = { Fragapanes, Sextons };
	Home Home1 = Home("Home1", families);

	vector<Person> personList;
	for (int i = 0; i < 12; i++) {
		personList.push_back(Person(male_names[i]));
	}

}