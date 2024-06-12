#include "Sorting algorithms.h"

void insertionSort(std::vector<sf::RectangleShape>&sorting, sf::RenderWindow & window) {
    for (size_t i = 1; i < sorting.size(); ++i)
    {
        for (size_t j = i; j > 0 && sorting[j].getSize().y < sorting[j - 1].getSize().y; --j)
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

            swap(sorting[j], sorting[j-1]);
            sorting[i].setFillColor(sf::Color::Cyan);
            sorting[j-1].setFillColor(sf::Color::Red);

            window.clear(sf::Color::Black);

            drawArray(sorting, window);
            sorting[i].setFillColor(sf::Color::White);
            sorting[j-1].setFillColor(sf::Color::White);

            Sleep(15);

            window.display();
        }
    }
}
