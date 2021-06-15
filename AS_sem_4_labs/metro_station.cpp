#include "metro_station.h"

MetroStation::MetroStation(std::string name, int year_of_creating, std::string description)
	: name(name), year_of_creating(year_of_creating), description(description)
{
	if (name.empty())
		throw "station creation error : empty name";
}

std::ostream& operator<<(std::ostream& out, const MetroStation& station)
{
	out << "[ " << station.name << " : " << station.year_of_creating << " : " << station.description << " ]";
	return out;
}