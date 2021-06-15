#pragma once

#include <iostream>
#include <string>

/// <summary>
/// class realizing used data object
/// </summary>
class MetroStation
{
public:

	/// <summary>
	/// standart constructor with empty name checking
	/// </summary>
	/// <param name="name">name of the station, uses as key</param>
	/// <param name="year_of_creating">year of creating the station, additional information</param>
	/// <param name="description">description of the station, additional information</param>
	MetroStation(std::string name, int year_of_creating, std::string description);

	/// <summary>
	/// getter by value for name
	/// </summary>
	/// <returns>copy of the name's value</returns>
	std::string get_name() const { return name; };
	/// <summary>
	/// getter by value for year of creating
	/// </summary>
	/// <returns>copy of the year of station creating value</returns>
	int get_year_of_creating() const { return year_of_creating; };
	/// <summary>
	/// getter by value for description
	/// </summary>
	/// <returns>copy of the description's value</returns>
	std::string get_description() const { return description; };

	/// <summary>
	/// function for putting it in ostream (console, file e.t.c.)
	/// </summary>
	/// <param name="out">reference on the ostream</param>
	/// <param name="station">const reference on the station</param>
	/// <returns>reference on the same ostream</returns>
	friend std::ostream& operator<<(std::ostream& out, const MetroStation& station);

private:

	/// <summary>
	/// uses as key
	/// </summary>
	std::string name;

	/// <summary>
	/// additional information (uses as heavy data)
	/// </summary>
	int year_of_creating;
	/// <summary>
	/// additional information (uses as heavy data)
	/// </summary>
	std::string description;
};