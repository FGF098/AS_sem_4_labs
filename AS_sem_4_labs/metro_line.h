#pragma once

#include "not_empty_list.h"
#include "metro_station.h"

/// <summary>
/// additional class for metro
/// </summary>
class MetroLine : public NameDescription, public NotEmptyList<MetroStation>
{
public:

	/// <summary>
	/// standart constructor, check non-empty name and stations list
	/// </summary>
	/// <param name="name">of the line</param>
	/// <param name="description">of the line</param>
	/// <param name="stations">(list of the stations)</param>
	MetroLine(NameDescriptionStruct name_description, std::vector<MetroStation*> stations);

	/// <summary>
	/// function for pushing in ostream (for console, file, e.t.c.)
	/// </summary>
	/// <param name="out">reference on used ostream</param>
	/// <param name="line">printing object</param>
	/// <returns>reference on same used ostream</returns>
	friend std::ostream& operator<< (std::ostream& out, const MetroLine& line);

private:

	static const std::string class_name;
	static const std::string list_name;
};