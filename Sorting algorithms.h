#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <Windows.h>
#include "swap.h"
#include "drawArray.h"


void bubbleSort(std::vector<sf::RectangleShape>& sorting, sf::RenderWindow& window);
void selectionSort(std::vector<sf::RectangleShape>& sorting, sf::RenderWindow& window);
void insertionSort(std::vector<sf::RectangleShape>&sorting, sf::RenderWindow & window);