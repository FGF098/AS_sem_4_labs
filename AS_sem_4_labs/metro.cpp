#include "metro.h"

Metro::Metro(std::string _city, std::string _description, std::vector<MetroLine*> _lines)
	: city(_city), description(_description), lines(_lines), all_stations()
{
	if (city.empty())
		throw "metro constructor error : empty name";
	if (lines.empty())
		throw "metro station error : no lines";

	for (auto i = lines.begin(); i != lines.end(); ++i)
		for (auto j = (*i)->get_stations().begin(); j != (*i)->get_stations().end(); ++j)
			all_stations.push_back(*j);
}

std::ostream& operator<<(std::ostream& out, const Metro& metro)
{
	out << "[ " << metro.city << " : " << metro.description << " ]" << std::endl;
	for (auto i = metro.lines.begin(); i != metro.lines.end(); ++i)
		out << **i << std::endl;
	return out;
}