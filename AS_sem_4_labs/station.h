#pragma once

#include <string>

#include "i_printable.h"

/// <summary>
/// class realizing used data object
/// </summary>
class Station : public IPrintable
{
public:

	/// <summary>
	/// standart constructor with empty name checking
	/// </summary>
	/// <param name="name">name of the station, uses as key</param>
	/// <param name="year_of_creating">year of creating the station, additional information</param>
	/// <param name="description">description of the station, additional information</param>
	Station(std::string name, int year_of_creating, std::string description);

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
	/// setter for name (checking for not empty value)
	/// </summary>
	/// <param name="new_name">new name's value</param>
	void set_new_name(std::string new_name);
	/// <summary>
	/// setter for description (any value)
	/// </summary>
	/// <param name="new_description">new description's value</param>
	void set_new_description(std::string new_description) { description = new_description; };

	/// <summary>
	/// function for putting it in ostream (console, file e.t.c.)
	/// </summary>
	/// <param name="os">reference on the ostream</param>
	/// <returns>reference of the same ostream</returns>
	std::ostream& operator<<(std::ostream& os) const override;

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