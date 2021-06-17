#pragma once

#include <string>
#include <vector>
#include <iostream>

template <typename ListElement>

/// <summary>
/// base class (or composition member) for objects with non-changing list of elements
/// </summary>
/// <typeparam name="ListElement">type of element (in list using reference)</typeparam>
class NotEmptyList
{
public:

	/// <summary>
	/// constructor with elements and checking for non-empty name
	/// for such error getting class name 
	/// </summary>
	/// <param name="list">list of elements</param>
	/// <param name="class_name">name of class, which use this object</param>
	NotEmptyList(std::vector<ListElement*> list, std::string last_name, std::string class_name = "");

	/// <summary>
	/// getter for elements list
	/// </summary>
	/// <returns>const reference on list</returns>
	const std::vector<ListElement*>& get_elements() const { return list; };

	/// <summary>
	/// function for pushing all elements of list in ostream
	/// </summary>
	/// <param name="out">reference on used ostream</param>
	/// <param name="object">pushed in ostream object</param>
	/// <returns></returns>
	friend std::ostream& operator<<(std::ostream& out, const NotEmptyList& object);

private:

	std::string list_name;

	std::vector<ListElement*> list;
};