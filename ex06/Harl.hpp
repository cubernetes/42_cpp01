#include <iostream>

#pragma once

class Harl {
public:
	void complain(std::string level);
private:
	void babble(void);
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};
