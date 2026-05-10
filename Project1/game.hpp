#pragma once
#include "board.h"
#include "playerinfo.hpp"
#include<iostream>

using namespace std;


class game
{

private:
	playerinfo* pinfo[2];
	board chessboard;
public:
	game();
	void run();

	~game();
};