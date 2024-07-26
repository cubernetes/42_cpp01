#include "Zombie.hpp"

#ifndef MAX_ZOMBIES
# define MAX_ZOMBIES 10
#endif

#ifndef ZOMBIES_NAME
# define ZOMBIES_NAME "bob"
#endif

int main() {
	Zombie *zombies = zombieHorde(MAX_ZOMBIES, ZOMBIES_NAME);
	for (int i(0); i < MAX_ZOMBIES; ++i)
		zombies[i].announce();
	delete[] zombies;
	return 0;
}
