#pragma once
#include "HeaderFile.h"

class Person
{
	friend istream& read(istream& is, Person& per);
	friend ostream& print(ostream& os, const Person& per);
public:
	Person() = default;
	Person(const string& nam, const string& add);
	Person(istream& is);
	const string& Get_Name() const;
	const string& Get_Addr() const;
private:
	string Name;
	string Address;


};
extern istream& read(istream& is, Person &per);
extern ostream& print(ostream& os, const Person &per);

