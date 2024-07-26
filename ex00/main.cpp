#include "Zombie.hpp"

Zombie *newZombie(std::string name) {
	return new Zombie(name);
}

void randomChump(std::string name) {
	Zombie(name).announce();
}

int main() {
	Zombie *zombie = newZombie("Foo");
	zombie->announce();
	delete zombie;
	randomChump("Bar");
	return 0;
}
