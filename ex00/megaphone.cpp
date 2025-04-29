#include <iostream>
#include <cctype>

#define NO_ARG_QUOTE "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

static std::string	ToUpperCase(std::string str)
{
	std::string	result = str;

	for (size_t i = 0; i < result.length(); i++)
	{
		result[i] = std::toupper(result[i]);
	}
	return (result);
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << NO_ARG_QUOTE;
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::cout << ToUpperCase(argv[i]);
		}
	}
	std::cout << std::endl;
	return (0);
}
