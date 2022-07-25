#include "GameBoard.h"



GameBoard::GameBoard(int size)
{
	BoardSetup(size, size);
}

void GameBoard::BoardSetup(int numRows, int numColumns)
{
	GameSquare newGameSquare = GameSquare(1,1,"LightSquare");
	newGameSquare.SetSquarePosition(0, 0);
	board[0].push_back(newGameSquare);

}

void GameBoard::DrawBoard(sf::RenderWindow& myWindow)
{
	board[0][0].DrawSquare(myWindow);
}
