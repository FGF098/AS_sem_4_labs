#include "metro_line.h"

MetroLine::MetroLine(std::string name, std::string description, std::vector<MetroStation*> stations)
	: name(name), description(description), stations(stations)
{
	if (name.empty())
		throw "metro line constructor error : empty name";
	if (stations.empty())
		throw "metro line constructor error : no stations";
}

std::ostream& operator<<(std::ostream& out, const MetroLine& line)
{
	out << "[ " << line.name << " : " << line.description << " ]" << std::endl;
	for (auto i = line.stations.begin(); i != line.stations.end(); ++i)
		out << **i << std::endl;
	return out;
}