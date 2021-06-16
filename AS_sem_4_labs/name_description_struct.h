#pragma once

#include <string>

/// <summary>
/// DTO for name and description (uses as additional information)
/// </summary>
struct NameDescriptionStruct
{
	/// <summary>
	/// name of object
	/// </summary>
	std::string name;
	/// <summary>
	/// description of object
	/// </summary>
	std::string description;
};