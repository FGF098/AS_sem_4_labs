#pragma once

#include <iostream>

/// <summary>
/// interface for text printing
/// </summary>
class IPrintable
{
public:

	/// <summary>
	/// pure virtual function for putting in ostream
	/// </summary>
	/// <param name="os">used ostream reference</param>
	/// <returns>reference on used ostream with loaded data</returns>
	virtual std::ostream& operator<< (std::ostream& os) const = 0;
};