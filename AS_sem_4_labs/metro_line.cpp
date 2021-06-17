#include "metro_line.h"

const std::string MetroLine::class_name = "metro line";
const std::string MetroLine::list_name = "stations in line list";

MetroLine::MetroLine(NameDescriptionStruct name_description, std::vector<MetroStation*> stations)
	: NameDescription(name_description, class_name), NotEmptyList(stations, list_name, class_name) {}

std::ostream& operator<<(std::ostream& out, const MetroLine& line)
{
	out << (NameDescription)line << std::endl;
	out << (NotEmptyList<MetroStation>)line << std::endl;
	return out;
}