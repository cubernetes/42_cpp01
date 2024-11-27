#include <iostream>

#include "Harl.hpp"

void Harl::babble(void)
{
	std::cout << "lorem ipsum, dolor sit amet\n";
}

void Harl::debug(void)
{
	std::cout << "debug\n";
}

void Harl::info(void)
{
	std::cout << "info\n";
}

void Harl::warning(void)
{
	std::cout << "warn\n";
}

void Harl::error(void)
{
	std::cout << "err\n";
}

unsigned int level_to_idx(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (unsigned int i(0); i < sizeof(levels)/sizeof(levels[0]); ++i)
		if (levels[i] == level)
			return (i + 1);
	return (0);
}

void Harl::complain(std::string level)
{
	switch (level_to_idx(level)) {
		case 1:
			debug();
		case 2:
			info();
		case 3:
			warning();
		case 4:
			error();
			break;
		default:
			babble();
	}
}
