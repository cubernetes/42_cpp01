#include "Weapon.hpp"
#include "HumanA.hpp"

#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& weapon)
	: _name(name), _weapon(weapon) {}

void HumanA::attack() const {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << "\n";
}

void HumanA::setWeapon(const Weapon& weapon) {
	this->_weapon = weapon;
}
