#include "not_empty_list.h"

template<typename ListElement>

NotEmptyList<ListElement>::NotEmptyList(std::vector<ListElement*> _list, std::string _list_name, std::string class_name)
	: list(_list), list_name(_list_name)
{
	if (class_name.empty())
		class_name = "unknown class with non_empty_list";

	std::string error_text;

	if (list_name.empty())
	{
		error_text = class_name + " constructor error : empty list name";
		throw error_text;
	}
	if (list.empty())
	{
		error_text = class_name + " constructor error : no elements";
		throw error_text;
	}
}

template<typename ListElement>

std::ostream& operator<<(std::ostream& out, const NotEmptyList<ListElement>& object)
{
	out << "[ " << object.list_name << " ]" << std::endl;
	for (auto i = object.list.begin(); i != object.list.end(); ++i)
		out << '\t' << **i << std::endl;
	return out;
}