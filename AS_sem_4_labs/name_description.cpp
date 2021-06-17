#include "name_description.h"

NameDescription::NameDescription(NameDescriptionStruct _value, std::string _class_name)
	: value(value), class_name(_class_name)
{
	if (value.name.empty())
	{
		if (class_name.empty())
			class_name = "unknown class object";
		std::string error_text = class_name + " constructor error : empty name";
		throw error_text;
	}
}

std::ostream& operator<<(std::ostream& out, const NameDescription& object)
{
	out << "[ " << object.class_name << " | name : " << object.value.name << " | description : " << object.value.description << " ]";
	return out;
}