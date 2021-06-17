#pragma once

#include <iostream>

#include "name_description_struct.h"

/// <summary>
/// base class (or composition member) for objects with name and description
/// </summary>
class NameDescription
{
public:

	/// <summary>
	/// constructor with value and checking for non-empty name
	/// for such error getting class name
	/// </summary>
	/// <param name="value">name and description</param>
	/// <param name="class_name">name of class, what uses this name & description</param>
	NameDescription(NameDescriptionStruct value, std::string class_name = "");

	/// <summary>
	/// getter by value for name
	/// </summary>
	/// <returns>copy of name</returns>
	std::string get_name() const { return value.name; };
	/// <summary>
	/// getter by value for description
	/// </summary>
	/// <returns>copy of description</returns>
	std::string get_description() const { return value.description; };

	/// <summary>
	/// function for pushing name and description of object in ostream
	/// </summary>
	/// <param name="out">reference on using ostream</param>
	/// <param name="object">object, which name and description will be pushed</param>
	/// <returns>reference on same ostream</returns>
	friend std::ostream& operator<<(std::ostream& out, const NameDescription& object);

private:

	NameDescriptionStruct value;

	std::string class_name;
};