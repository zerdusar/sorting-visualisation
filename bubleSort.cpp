#include "Sorting algorithms.h"
void bubbleSort(std::vector<sf::RectangleShape>& sorting, sf::RenderWindow& window)
{
    for (size_t i = 0; i < sorting.size() - 1; i++)
    {
        for (size_t j = i + 1; j < sorting.size(); j++)
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

            if (sorting[i].getSize().y > sorting[j].getSize().y) {
                swap(sorting[i], sorting[j]);
            }

            sorting[i].setFillColor(sf::Color::Cyan);
            sorting[j].setFillColor(sf::Color::Red);
            
            window.clear(sf::Color::Black);
            
            drawArray(sorting, window);
            sorting[i].setFillColor(sf::Color::White);
            sorting[j].setFillColor(sf::Color::White);
            
            Sleep(10);
            
            window.display();
        }

    }
}