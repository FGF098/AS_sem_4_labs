#pragma once

#include "name_description.h"

/// <summary>
/// class realizing used data object, name used as text key
/// </summary>
class MetroStation : public NameDescription
{
public:

	/// <summary>
	/// constructor with inherited value
	/// </summary>
	/// <param name="name_description">struct with name and description</param>
	MetroStation(NameDescriptionStruct name_description);

private:

	const static std::string class_name;
};