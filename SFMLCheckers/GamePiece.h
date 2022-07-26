#pragma once
#include "SFML/Graphics.hpp"
#include <string>
using namespace std;
class GamePiece
{
private:
	bool isKing;
	sf::Sprite pieceSprite;

public:
	GamePiece(string spriteName);
	void SetSprite(string spriteName,bool king); //used to make a Piece a King;
	sf::Sprite GetPieceSprite();
	void DrawPiece(sf::RenderWindow& myWindow);
};

