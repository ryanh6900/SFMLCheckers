#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "GamePiece.h"
#include "TextureManager.h"
using namespace std;
class GameSquare
{
private:
	GamePiece* occupiedPiece;
	bool isOccupied;
	int rowNumber, columnNumber;
	sf::Sprite squareSprite;

public:
	vector<GameSquare*> moveTiles;
	vector<pair<GameSquare*, GameSquare*>> jumpTiles;
	GameSquare();
	GameSquare(int row, int column, string spriteName);
	int GetRowNumber();
	int GetColumnNumber();
	void SetOccupiedPiece(GamePiece* piece);
	void SetPower(bool isKing);
	void AddAdjacentGameSquare(GameSquare* adjSquare);
	void AddJumpPair(GameSquare* adjSquare, GameSquare* jumpToSquare);
	void SetSquarePosition(int x, int y);
	void DrawSquare(sf::RenderWindow &myWindow);
	
};

