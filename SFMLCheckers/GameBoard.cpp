#include "GameBoard.h"

GameBoard::GameBoard(int size)
{
    numColumns = size;
    numRows = size;
	BoardSetup(numRows,numColumns);
}

unsigned int GameBoard::GetWindowHeight()
{
	return 0;
}

unsigned int GameBoard::GetWindowWidth()
{
	return 0;
}

void GameBoard::BoardSetup(int numRows, int numColumns)
{
    board.clear();
    for (int i = 1; i <= numRows; i++) { //i is the row number, j is the column number
        vector <GameSquare> newRow;
        GameSquare newGameSquare;
        for (int j = 1; j <= numColumns; j++) {
            if (i % 2 == 0) {
                if (j % 2 != 0) {
                    newGameSquare = GameSquare(i, j, "DarkSquare");
                    newGameSquare.SetSquarePosition(i*59, j*59);
                    //playtileIndex++;
                }
                else {
                    newGameSquare = GameSquare(i, j, "LightSquare");
                    newGameSquare.SetSquarePosition(i * 59, j * 59);
                    //board[i][j] = newGameSquare;
                }
            }
            else {
                if (j % 2 == 0) {
                    newGameSquare = GameSquare(i, j, "DarkSquare");
                    newGameSquare.SetSquarePosition(i * 59, j * 59);
                    //board[i].push_back(newGameSquare);
                    //board[i][j] = newGameSquare;
                    /*newPlayTile = PlayTile(i, j, false, false);
                    playableTiles[playtileIndex] = newPlayTile;
                    playtileIndex++;*/
                }
                else {
                    newGameSquare = GameSquare(i, j, "LightSquare");
                    newGameSquare.SetSquarePosition(i * 59, j * 59);
                    //board[i].push_back(newGameSquare);
                    //board[i][j] = newGameSquare;
                }
                
            }
            newRow.push_back(newGameSquare);
        }
        board.push_back(newRow);
    }
    //FindAdjacentPlayTiles();
}

void GameBoard::DrawBoard(sf::RenderWindow& myWindow)
{
    for (int i = 0; i < numRows; i++)
        for (int j = 0; j < numColumns; j++)
            board[i][j].DrawSquare(myWindow);

}
