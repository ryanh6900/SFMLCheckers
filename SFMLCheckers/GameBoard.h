#pragma once
#include <vector>
#include "GameSquare.h"
using namespace std;
class GameBoard
{
private:
	int numColumns, numRows;
	vector<vector<GameSquare>> board;
	//GameSquare board[8][8];
public:
	GameBoard(int size);
	unsigned int GetWindowHeight();
	unsigned int GetWindowWidth();
	GameSquare FindSquare(int column, int row);
	void FindAdjacentGameSquares(int row, int column);
	void SetGameSquare(int x, int y);
	
	void BoardSetup(int numRows, int numColumns);
	void CreateUI(); //this will be implemented after board setup is complete
	void DrawBoard(sf::RenderWindow& myWindow);

};

