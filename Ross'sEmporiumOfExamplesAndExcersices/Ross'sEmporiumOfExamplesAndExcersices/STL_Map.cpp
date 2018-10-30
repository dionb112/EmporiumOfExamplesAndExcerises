#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <iterator>

class Player
{
public:
	Player(int xp = 0) : m_xp(xp) {}
	int m_xp;
};

std::map<std::string, Player> getWhereXpIsZero(std::map<std::string,
	Player> const & myMap)
{
	std::map<std::string, Player> results;
	// Note: be sure to #include<algorithm> for std::copy_if and
	// #include<iterator> for std::inserter
	std::copy_if(
		std::begin(myMap),
		std::end(myMap),
		std::inserter(results, std::end(results)),
		[](std::pair<std::string const, Player> const & mapEntry)
	{
		return mapEntry.second.m_xp == 0;
	}
	);
	return results;
}

int main7()
{
	std::map<std::string, Player> playerMap;
	playerMap["A"] = Player(0);
	playerMap["B"] = Player(1);
	playerMap["C"] = Player(0);
	auto result = getWhereXpIsZero(playerMap);

	std::map<std::string, double> myFirstMap;
	myFirstMap["One"] = 1;
	std::map<std::string, double>::iterator iter = myFirstMap.find("One");
	if (iter != myFirstMap.end())
	{
		std::cout << iter->first << std::endl;
		std::cout << iter->second << std::endl;

		// Key is in the map here
	}
	system("PAUSE");
	return 7;
}