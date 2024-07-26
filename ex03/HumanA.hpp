#pragma once

#include "Weapon.hpp"

#include <string>

class HumanA {
	std::string _name;
	Weapon &_weapon;
public:
	HumanA(const std::string& name, Weapon& weapon);
	void attack() const;
	void setWeapon(const Weapon& weapon);
};