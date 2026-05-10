#pragma once


#include "game.hpp"
game::game()
{
	pinfo[0] = new info;
	pinfo[1] = new info;
}

void game::run()
{
	pinfo[0]->setinfo();
	pinfo[1]->setinfo();
	system("pause");
	system("cls");
	chessboard.createboard();
	chessboard.allotpices();
	chessboard.center();
	while (true)
	{
		if (!chessboard.move(
			pinfo[0]->obj(),
			pinfo[1]->obj()))
		{
			break;
		}

		if (!chessboard.move(
			pinfo[1]->obj(),
			pinfo[0]->obj()))
		{
			break;
		}
	}
	//pinfo[0]->turn(chessboard);
	//pinfo[1]->turn(chessboard);

}

game::~game()
{
	delete pinfo[0];
	delete pinfo[1];
}