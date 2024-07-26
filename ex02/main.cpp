#include <iostream>

int main() {
	std::string string("HI THIS IS BRAIN");
	std::string *stringPTR(&string);
	std::string& stringREF(string);

	std::cout << "Memory addresses of the string\n";
	std::cout << "&string: " << &string << std::endl;
	std::cout << "stringPTR: " << stringPTR << std::endl;
	std::cout << "&stringREF: " << &stringREF << std::endl
		<< std::endl;

	std::cout << "Values of the variables\n";
	std::cout << "string: " << string << std::endl;
	std::cout << "*stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
	return 0;
}