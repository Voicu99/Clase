#pragma once
#include <iostream>

class GameServer
{
	int num_of_players;

	const int max_players;

public:
	GameServer(int num_of_players,int max_players);
	~GameServer();
	void printServerInfo();

};

