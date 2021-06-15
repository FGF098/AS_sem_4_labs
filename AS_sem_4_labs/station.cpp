#include "station.h"

Station::Station(std::string name, int year_of_creating, std::string description)
	: name(name), year_of_creating(year_of_creating), description(description)
{
	if (name.size() == 0)
		throw "station creation error : empty name";
}

void Station::set_new_name(std::string new_name)
{
	if (new_name.size() == 0)
		throw "station setting new name error : empty new name";
	name = new_name;
}

std::ostream& operator<<(std::ostream& os, const Station& station)
{
	os << "[ " << station.name << " : " << station.year_of_creating << " : " << station.description << " ]";
	return os;
}