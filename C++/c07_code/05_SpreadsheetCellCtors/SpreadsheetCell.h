#pragma once

#include <string>

class SpreadsheetCell
{
public:
	SpreadsheetCell(double initialValue);
	SpreadsheetCell(const std::string& initialValue);

	void setValue(double inValue);
	double getValue() const;
	
	void setString(const std::string& inString);
	const std::string& getString() const;

private:
	std::string doubleToString(double inValue) const;
	double stringToDouble(const std::string& inString) const;

	double mValue;
	std::string mString;
};
