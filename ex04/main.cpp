#include <fstream>
#include <iostream>
#include <string>

#define OUT_SUFFIX ".replace"

bool	files_OK(
	const std::ifstream& file,
	const std::string& filename,
	const std::ofstream& outfile,
	const std::string& outfilename)
{
	bool	ok = true;

	if (!file.is_open())
	{
		std::cerr << "Error opening input file " << filename << std::endl;
		ok = false;
	}
	if (!outfile.is_open())
	{
		std::cerr << "Error opening output file " << outfilename << std::endl;
		ok = false;
	}
	return (ok);
}

void	simple_sed(
	const std::string& filename,
	const std::string& pattern,
	const std::string& replacement)
{
	std::ifstream	file(filename.c_str());
	std::ofstream	outfile((filename + OUT_SUFFIX).c_str());
	std::string		line;
	std::size_t		found;
	std::string		new_line;
	std::size_t		i;
	
	if (!files_OK(file, filename, outfile, filename + OUT_SUFFIX))
		return ;
	while (std::getline(file, line))
	{
		new_line = "";
		i = 0;
		if (pattern.empty())
			new_line += replacement;
		if (!line.empty())
		{
			while ((found = line.find(pattern, i)) != std::string::npos)
			{
				new_line += line.substr(i, found - i + (pattern.empty() ? 1 : 0));
				new_line += replacement;
				i = found + pattern.length();
				if (pattern.empty())
					++i;
				if (i >= line.length())
					break;
			}
			new_line += line.substr(i, std::string::npos);
		}
		outfile << new_line << "\n";
	}
	file.close();
	outfile.close();
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: " << av[0] << " <filename> <fixed-pattern> <replacement>\n";
		return (1);
	}
	simple_sed(av[1], av[2], av[3]);
	return (0);
}
