#pragma once
#include <vector>
#include <SFML/Graphics.hpp>
#include <ctime>

using uint = unsigned int;
const uint QUANTITYLIMITER = 300;
const uint SIZELIMITER = 100;
const uint MINIMUMELEMENTS = 10;
const uint MINIMUMSIZE = 1;

void randomiseElements(std::vector<sf::RectangleShape>& array, sf::RenderWindow& window);
void randomiseElements(std::vector<sf::RectangleShape>& array, sf::RenderWindow& window, size_t size);