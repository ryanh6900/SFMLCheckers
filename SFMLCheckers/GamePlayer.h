#pragma once
#include "GameBoard.h"
#include "SFML/Graphics.hpp"
class GamePlayer
{
private:
	string name;
	GameBoard* board;
	vector <GameSquare*> validMoveSquares;
	sf::Sprite playerPieceSprite; 
	int upDirection;
	int pieceCount;

public:
	GamePlayer();
};

