#pragma once

#include <string>

class Weapon {
	std::string _type;
public:
	Weapon(const std::string& type = "bare hands");
	const std::string& getType() const;
	void setType(const std::string &type);
};
