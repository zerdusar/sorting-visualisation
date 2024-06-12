#include "randomiseElements.h"
void randomiseElements(std::vector<sf::RectangleShape>& array, sf::RenderWindow& window)
{
	size_t arraySize = MINIMUMELEMENTS + rand() % (static_cast<size_t>(window.getSize().x - QUANTITYLIMITER));
	array.resize(arraySize);

	float xSize = (float)window.getSize().x / array.size();
	for (size_t i = 0; i < array.size(); i++)
	{
		float ySize = MINIMUMSIZE + rand() % (window.getSize().y - SIZELIMITER);
		sf::Vector2f lineSize(xSize, ySize);
		array[i].setSize(lineSize);
		float xPosition = i * xSize;
		float yPosition =  window.getSize().y - ySize;
		array[i].setPosition(xPosition, yPosition);
		array[i].setFillColor(sf::Color::White);
	} 
}

void randomiseElements(std::vector<sf::RectangleShape>& array, sf::RenderWindow& window, size_t arraySize)
{
	array.resize(arraySize);

	float xSize = (float)window.getSize().x / array.size();
	for (size_t i = 0; i < array.size(); i++)
	{
		int ySize = rand() % (window.getSize().y - SIZELIMITER);
		sf::Vector2f lineSize(xSize, ySize);
		array[i].setSize(lineSize);
		float xPosition = i * xSize;
		float yPosition = window.getSize().y - ySize;
		array[i].setPosition(xPosition, yPosition);
		array[i].setFillColor(sf::Color::White);
	}
}
