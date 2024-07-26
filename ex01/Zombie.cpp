#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(const std::string& name) : _name(name) {}
Zombie::~Zombie() { std::cout << this->_name << " got disintegrated\n"; }
void Zombie::announce() { std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n"; }
void Zombie::setName(const std::string& newName) { this->_name = newName; }
