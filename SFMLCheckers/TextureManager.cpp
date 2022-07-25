#include "TextureManager.h"

void TextureManager::LoadTexture(string fileName) {
	string path = "images/";
	path += fileName + ".png";
	textures[fileName].loadFromFile(path);
}

sf::Texture& TextureManager::GetTexture(string textureName) {
	if (textures.find(textureName) == textures.end()) return;//LoadTexture(textureName);
	return textures[textureName];
}
void TextureManager::Clear() {
	textures.clear();
}
