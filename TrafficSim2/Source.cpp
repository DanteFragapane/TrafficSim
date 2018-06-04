#include <iostream>
#include <fstream>
#include "Home.h"
//#include "male.txt"
//#include "female.txt"
using namespace std;

string male_names[] = { "Guillermo", "Chase","Israel", "Reynaldo", "Burton", "Dante", "Max", "Luca", "Troy", "Luis", "Matt", "Nate" };
string female_names[] = { "Aleisha", "Roseline", "Maple", "Cori", "Delia", "Ginger", "Katheryn", "Selene", "Kari", "Marlo", "Kayce", "Faustina" };
string family_names[] = { "Kileen", "Cormack", "Doody", "Machuca", "Bartell", "Mac", "Maroney", "Shawl", "Mercurio", "Rochin", "Casanova", "Shine" };
int length_of_name_lists = 12;

int main()
{
	/*
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
	*/


	vector<Person> maleList;
	vector<Person> femaleList;
	vector<Family> families;
	vector<Home> homes;
	
	for (int i = 0; i < length_of_name_lists; i++) {
		maleList.push_back(Person(male_names[i]));
		femaleList.push_back(Person(female_names[i]));
	}
	for (int j = 0; j < length_of_name_lists; j++) {
		vector<Person> names = { male_names[j], female_names[j] };
		families.push_back(Family(family_names[j], names));
	}

}