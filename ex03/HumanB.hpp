#pragma once

#include "Weapon.hpp"

#include <string>

class HumanB {
public:
	HumanB(const std::string& name);
	void attack() const;
	void setWeapon(const Weapon& weapon);
private:
	std::string _name;
	const Weapon *_weapon;
};
