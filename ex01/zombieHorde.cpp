#include "Zombie.hpp"

#include <string>

Zombie *zombieHorde(int N, const std::string& name) {
	Zombie *zombies(new Zombie[N]);
	for (int i(0); i < N; ++i)
		zombies[i].setName(name);
	return zombies;
}