#include "drawArray.h"
void drawArray(std::vector<sf::RectangleShape>& array, sf::RenderWindow& window)
{
	for (size_t i = 0; i < array.size(); i++)
	{
		window.draw(array[i]);
	}
}