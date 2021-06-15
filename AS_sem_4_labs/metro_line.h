#pragma once

#include <vector>

#include "metro_station.h"

class MetroLine
{
	MetroLine(std::string name, std::string description, std::vector<MetroStation*> stations);

	std::string get_name() const { return name; };
	std::string get_description() const { return description; };

	friend std::ostream& operator<< (std::ostream& out, const MetroLine& line);

private:

	std::string name;
	std::string description;

	std::vector<MetroStation*> stations;
};