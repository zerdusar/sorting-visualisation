#include "swap.h"
void swap(sf::RectangleShape& a, sf::RectangleShape& b)
{
	std::swap(a, b);
	auto aPos = a.getPosition();
	auto bPos = b.getPosition();
	std::swap(aPos.x, bPos.x);
	a.setPosition(aPos);
	b.setPosition(bPos);
}