
#include <vector>
#include <iostream>

class Player
{
public: 
	Player(int xp) : m_xp(xp)
	{	
	}
	// copy constructor for Player
	Player(Player const & player)
	{
		std::cout << "Player copied: " << m_xp;
	}


	private:
		int m_xp;
};

int main3()
{
	//std::vector<Player> players;
	//players.push_back(0);
	//players.push_back(1);
	//players.push_back(2);
	//players.erase(players.begin);

	return 2;
}
