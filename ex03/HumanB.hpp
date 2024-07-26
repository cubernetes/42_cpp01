#pragma once

#include "Weapon.hpp"

#include <string>

class HumanB {
	std::string _name;
	const Weapon *_weapon;
public:
	HumanB(const std::string& name);
	void attack() const;
	void setWeapon(const Weapon& weapon);
};
