#include "GameSquare.h"


GameSquare::GameSquare()
{
	rowNumber = -1;
	columnNumber = -1;
	isOccupied = false;
	occupiedPiece = nullptr;
}

GameSquare::GameSquare(int row, int column, string spriteName)
{
	rowNumber = row;
	columnNumber = column;
	squareSprite = sf::Sprite(TextureManager::GetTexture(spriteName));
	occupiedPiece = nullptr;
	isOccupied = false;
}

void GameSquare::SetSquarePosition(int x, int y)
{
	squareSprite.setPosition(x, y);
}

void GameSquare::DrawSquare(sf::RenderWindow &myWindow)
{
	myWindow.draw(squareSprite);
}
