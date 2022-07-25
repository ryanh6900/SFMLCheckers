#include <SFML/Graphics.hpp>
#include "GameBoard.h"
#include <iostream>
int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "Checkers");
	
	GameBoard gameBoard(8);

	while (window.isOpen()) {
		sf::Event event;
		window.clear();
		

		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
			if (event.type == sf::Event::MouseButtonReleased) {
				//gameBoard.CheckBoardMouseEvents(event.mouseButton);
				//gameBoard.CheckButtonEvents(even.mouseButton);
			}
		}
	}
	return 0;
}