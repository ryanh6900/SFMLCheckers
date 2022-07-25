#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "GamePiece.h"
class GameSquare
{
private:
	GamePiece* occupiedPiece;
	bool isKing, isOccupied;
	int rowNumber, columnNumber;
	sf::Sprite squareSprite;

public:
	std::vector<GameSquare*> moveTiles;
	std::vector<pair<GameSquare*, GameSquare*>> jumpTiles;
	GameSquare();
	GameSquare(int row, int column, sf::Sprite sprite);
	int GetRowNumber();
	int GetColumnNumber();
	void SetOccupiedPiece(GamePiece* piece);
	void SetPower(bool isKing);
	void AddAdjacentGameSquare(GameSquare* adjSquare);
	void AddJumpPair(GameSquare* adjSquare, GameSquare* jumpToSquare);
	void DrawSquare();
	
};

