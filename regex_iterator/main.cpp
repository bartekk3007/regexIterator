#include <iostream>
#include <string>
#include <vector>
#include <regex>

int main()
{
	std::string s1("when why which whom what where whose who how");
	std::regex reg("(wh)([^ ]*)");

	std::regex_iterator<std::string::iterator> rit(s1.begin(), s1.end(), reg);
	std::regex_iterator<std::string::iterator> rend;

	while (rit != rend)
	{
		std::cout << rit->str() << '\n';
		rit++;
	}

	return 0;
}