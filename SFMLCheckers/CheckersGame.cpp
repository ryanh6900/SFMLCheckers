#include <SFML/Graphics.hpp>
#include "GameBoard.h"
#include <iostream>
int main() {
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Checkers");

	while (window.isOpen()) {
		sf::Event event;
		window.clear();
		window.clear(sf::Color::White);
		GameBoard gameBoard(12);
		GameSquare newGameSquare = GameSquare(1, 1, "LightSquare");
		newGameSquare.SetSquarePosition(0, 0);
		//newGameSquare.DrawSquare(window);
		gameBoard.DrawBoard(window);
		window.display();
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