#pragma once

#include <string>

class Zombie {
	std::string _name;
public:
	Zombie(const std::string& name = "anonymous");
	~Zombie();

	void announce();
	void setName(const std::string& name);
};

Zombie *zombieHorde(int N, std::string name);
