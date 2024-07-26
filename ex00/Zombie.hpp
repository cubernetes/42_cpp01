#pragma once

#include <string>

class Zombie {
	const std::string& _name;
public:
	Zombie(const std::string& name = "anonymous");
	~Zombie();
	void announce();
};

Zombie* newZombie(std::string name);
void randomChump(const std::string name);
