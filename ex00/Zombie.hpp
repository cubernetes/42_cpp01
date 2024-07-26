#pragma once

#include <string>

class Zombie {
public:
	Zombie(const std::string& name);
	~Zombie();
	void announce();
private:
	const std::string& name;
};

Zombie* newZombie(std::string name);
void randomChump(const std::string name);
