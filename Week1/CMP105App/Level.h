#pragma once

#include <SFML/Graphics.hpp>
#include <string.h>
#include <iostream>


class Level{
public:
	
	Level(sf::RenderWindow* hwnd);
	~Level();

	void handleInput();
	void update();
	void render();
	sf::Font font;
	sf::Text text;
	sf::RectangleShape rect;


private:
	void beginDraw();
	void endDraw();
	sf::RenderWindow* window;

	


	
};