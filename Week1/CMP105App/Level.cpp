#include "Level.h"
#include <Windows.h>

Level::Level(sf::RenderWindow* hwnd)
{

	window = hwnd;
	// initialise game objects
	
	

	
}


Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	
	//Render text 
	if (!font.loadFromFile("font/arial.ttf")) {
		std::cout << "Error loading font\n";
	}
	text.setFont(font);
	text.setString("Hello world");
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Red);

	rect.setSize(sf::Vector2f(300, 300));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Green);
	



}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(rect);
	window->draw(text);

	endDraw();
}


void Level::beginDraw()
{
	window->clear(sf::Color(0, 0, 0));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}