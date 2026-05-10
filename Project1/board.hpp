//#pragma once
//#include <iostream>
//#include <iomanip>
//#include "pieces.h"
//#include "Pawn.h"
//#include "Rook.h"
//#include "Bishop.h"
//#include "Knight.h"
//#include "Queen.h"
//#include "King.h"
//
//using namespace std;
//
//class info;
//
//class board
//{
//private:
//	const int x;
//	const int y;
//	char arr[8][8];
//
//	// game logic object
//	pieces legalmove;
//
//	// individual piece objects
//	Pawn   pawnmove;
//	Rook   rookmove;
//	Bishop bishopmove;
//	Knight knightmove;
//	Queen  queenmove;
//	King   kingmove;
//
//	char tpieces[6];
//	char Tpieces[6];
//
//	string srows, scolumns;
//
//	// for en passant
//	int enpassantrow;
//	int enpassantcol;
//
//public:
//	board();
//
//	void createboard();
//	void allotpices();
//	void display();
//	void center();
//
//	bool move(info& other, info& enemy);
//	~board();
//};
