#pragma once

#include <string>

class Zombie {
public:
	Zombie(const std::string& name = "anonymous");
	~Zombie();

	void announce();
	void setName(const std::string& name);
private:
	std::string name;
};

Zombie *zombieHorde(int N, const std::string& name);
