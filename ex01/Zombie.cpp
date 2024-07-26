#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(const std::string& name) : name(name) { }
Zombie::Zombie() : name("anonymous") { }
Zombie::~Zombie() { std::cout << this->name << " got disintegrated\n"; }
void Zombie::announce() { std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n"; }
void Zombie::setName(const std::string& newName) { this->name = newName; }
