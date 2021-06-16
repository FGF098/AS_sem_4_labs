#pragma once

#include <vector>

#include "metro_station.h"

/// <summary>
/// additional class for metro
/// </summary>
class MetroLine
{
public:

	/// <summary>
	/// standart constructor, check non-empty name and stations list
	/// </summary>
	/// <param name="name">of the line</param>
	/// <param name="description">of the line</param>
	/// <param name="stations">(list of the stations)</param>
	MetroLine(std::string name, std::string description, std::vector<MetroStation*> stations);

	/// <summary>
	/// getter by value for name
	/// </summary>
	/// <returns>copy of the name</returns>
	std::string get_name() const { return name; };
	/// <summary>
	/// getter by value for description
	/// </summary>
	/// <returns>copyof the description </returns>
	std::string get_description() const { return description; };

	/// <summary>
	/// getter by reference for stations list
	/// </summary>
	/// <returns>reference on const list</returns>
	const std::vector<MetroStation*>& get_stations() const { return stations; };

	/// <summary>
	/// function for pushing in ostream (for console, file, e.t.c.)
	/// </summary>
	/// <param name="out">reference on used ostream</param>
	/// <param name="line">printing object</param>
	/// <returns>reference on same used ostream</returns>
	friend std::ostream& operator<< (std::ostream& out, const MetroLine& line);

private:

	/// <summary>
	/// name of the line (additional information)
	/// </summary>
	std::string name;
	/// <summary>
	/// description of the line (additional information)
	/// </summary>
	std::string description;

	/// <summary>
	/// list of the stations in line
	/// </summary>
	std::vector<MetroStation*> stations;
};