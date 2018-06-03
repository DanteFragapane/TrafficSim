#include <iostream>
#include "Person.h"
#include "Family.h"
#include "Home.h"
using namespace std;

int main() 
{
	cout << "Hello World!" << endl;

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
}