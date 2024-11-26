#include <iostream>

int main() {
	std::string string("HI THIS IS BRAIN");
	std::string *stringPTR(&string);
	std::string& stringREF(string);

	std::cout << "Memory addresses of the string\n";
	std::cout << "&string: " << &string << "\n";
	std::cout << "stringPTR: " << stringPTR << "\n";
	std::cout << "&stringREF: " << &stringREF << "\n"
		<< "\n";

	std::cout << "Values of the variables\n";
	std::cout << "string: " << string << "\n";
	std::cout << "*stringPTR: " << *stringPTR << "\n";
	std::cout << "stringREF: " << stringREF << "\n";
	return 0;
}
