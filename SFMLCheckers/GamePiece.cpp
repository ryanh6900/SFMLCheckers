#include "GamePiece.h"
#include "TextureManager.h"

GamePiece::GamePiece(string spriteName)
{
	pieceSprite.setTexture(TextureManager::GetTexture(spriteName));
	isKing = false;
}

void GamePiece::SetSprite(string spriteName,bool king)
{
	pieceSprite.setTexture(TextureManager::GetTexture(spriteName));
	isKing = king;
}
sf::Sprite GamePiece::GetPieceSprite()
{
	return pieceSprite;
}

void GamePiece::DrawPiece(sf::RenderWindow& myWindow)
{
	myWindow.draw(pieceSprite);
}
