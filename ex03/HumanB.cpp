#include "Weapon.hpp"
#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(const std::string& name)
	: _name(name), _weapon(NULL) {}

void HumanB::attack() const {
	if (this->_weapon == NULL)
		std::cout << this->_name << " is unarmed!" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(const Weapon& weapon) {
	this->_weapon = &weapon;
}
