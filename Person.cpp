#include "Person.h"
const string& Person::Get_Name() const
{
	return Name;
}
const string& Person::Get_Addr() const
{
	return Address;
}
Person::Person(const string& nam, const string& add) :Name(nam), Address(add)
{

}
Person::Person(istream& is)
{
	read(is, *this);
}
istream& read(istream& is, Person &per)
{
	is >> per.Name >> per.Address;
	return is;
}
ostream& print(ostream& os, const Person &per)
{
	os << per.Name << " " << per.Address;
	return os;
}