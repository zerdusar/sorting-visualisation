#include "Sorting algorithms.h"
void selectionSort(std::vector<sf::RectangleShape>& sorting, sf::RenderWindow& window)
{
    for (size_t i = 0; i < sorting.size() - 1; ++i)
    {
        size_t imin = i;
        for (size_t j = i + 1; j<sorting.size(); ++j)
        {
            sf::Event event{};
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed) {
                    window.close();
                }
                if (event.type == sf::Event::KeyPressed) {
                    if (event.key.code == sf::Keyboard::Space) {
                        return;
                    }
                }
            }

            if (sorting[j].getSize().y < sorting[imin].getSize().y) {
                imin = j;
            }
            sorting[imin].setFillColor(sf::Color::Cyan);
            sorting[j].setFillColor(sf::Color::Red);

            window.clear(sf::Color::Black);

            drawArray(sorting, window);
            sorting[imin].setFillColor(sf::Color::White);
            sorting[j].setFillColor(sf::Color::White);

            Sleep(15);

            window.display();
        }
        swap(sorting[imin], sorting[i]);
    }
}