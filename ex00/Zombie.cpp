#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(const std::string& name) : name(name) { }

Zombie::~Zombie() {
	std::cout << this->name << " got disintegrated\n";
}

void Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}
