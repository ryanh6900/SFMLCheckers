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
	isOccupied = false;
	occupiedPiece = nullptr;
}

int GameSquare::GetRowNumber()
{
	return rowNumber;
}

int GameSquare::GetColumnNumber()
{
	return columnNumber;
}

void GameSquare::SetSquarePosition(int x, int y)
{
	squareSprite.setPosition(x, y);
}

void GameSquare::SetOccupiedPiece(GamePiece* piece)
{
	occupiedPiece = piece;
	occupiedPiece->GetPieceSprite().setPosition(squareSprite.getPosition().x + 30, squareSprite.getPosition().y + 30);
}

void GameSquare::DrawSquare(sf::RenderWindow &myWindow)
{
	myWindow.draw(squareSprite);
	if (occupiedPiece) occupiedPiece->DrawPiece(myWindow);
}
