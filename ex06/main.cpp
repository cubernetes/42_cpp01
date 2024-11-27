#include <iostream>

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl harl;

	if (ac != 2)
	{
		std::cout << "Usage: " << av[0] << " <loglevel>\n";
		return (1);
	}
	std::cout << "[ " << av[1] << " ]\n";
	harl.complain(av[1]);
	return (0);
}
