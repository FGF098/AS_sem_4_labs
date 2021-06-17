#include "metro_station.h"

const std::string MetroStation::class_name = std::string("metro station");

MetroStation::MetroStation(NameDescriptionStruct name_description)
	: NameDescription(name_description, class_name) {}