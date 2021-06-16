#include "name_description.h"

NameDescription::NameDescription(NameDescriptionStruct _value, std::string class_name)
	: value(value)
{
	if (value.name.empty())
	{
		if (class_name.empty())
			class_name = "unknown named object";
		std::string error_text = class_name + " constructor error : empty name";
		throw error_text;
	}
}

std::ostream& operator<<(std::ostream& out, const NameDescription& object)
{
	out << "[ " << object.value.name << " : " << object.value.description << " ]";
	return out;
}