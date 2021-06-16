#pragma once

#include "metro_line.h"

/// <summary>
/// container for basic data, and some additional information
/// </summary>
class Metro
{
public:

	/// <summary>
	/// standart constructor
	/// </summary>
	/// <param name="city">name of the city, where this metro uses</param>
	/// <param name="description">description of the metro</param>
	/// <param name="lines">list of lines in the metro</param>
	Metro(std::string city, std::string description, std::vector<MetroLine*> lines);

	/// <summary>
	/// getter by value for metro city
	/// </summary>
	/// <returns>copy of metro city name</returns>
	std::string get_city() const { return city; };
	/// <summary>
	/// getter by value for description
	/// </summary>
	/// <returns>copy of description</returns>
	std::string get_description() const { return description; };

	/// <summary>
	/// getter for metro lines
	/// </summary>
	/// <returns>const reference on list</returns>
	const std::vector<MetroLine*>& get_lines() const { return lines; };
	/// <summary>
	/// getter for all stations
	/// </summary>
	/// <returns>const reference on list</returns>
	const std::vector<MetroStation*>& get_stations() const { return all_stations; };

	/// <summary>
	/// function for pushing in ostream (for console, file, e.t.c.)
	/// </summary>
	/// <param name="out">reference on stream</param>
	/// <param name="metro">used object</param>
	/// <returns>reference on used ostream</returns>
	friend std::ostream& operator<<(std::ostream& out, const Metro& metro);

private:

	/// <summary>
	/// name of the city where metro exists
	/// </summary>
	std::string city;
	/// <summary>
	/// description for a metro, additional information
	/// </summary>
	std::string description;

	/// <summary>
	/// list of metro lines
	/// </summary>
	std::vector<MetroLine*> lines;
	
	/// <summary>
	/// list of all stations in metro
	/// </summary>
	std::vector<MetroStation*> all_stations;
};