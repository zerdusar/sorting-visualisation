#include "Sorting algorithms.h"
#include "randomiseElements.h"
#include <iostream>

int main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "ru");

	std::cout << "Вас приветсвует программа-обзор сортировок" << std::endl;
	std::cout << "Выберите интересующий вас алгоритм сортировок после этого вам будет предоставлена ее визуализация" << std::endl;
	std::cout << "Введите номер:" << std::endl;
	std::cout << "1. Сортировка пузырьком\n2. Сортировка выбором\n3. Сортировка вставками" << std::endl;

	int input;
	std::cin >> input;

	void (*sort) (std::vector<sf::RectangleShape>&sorting, sf::RenderWindow & window);

	switch (input) {
	case 1: {
		sort = bubbleSort;
		break;
	}
	case 2: {
		sort = selectionSort;
		break;
	}
	case 3: {
		sort = insertionSort;
		break;
	}
	default: {
		std::cout << "Некорректный ввод. Перезапустите программу" << std::endl;
		system("pause");
		return 0;
	}
	}

	sf::RenderWindow window(sf::VideoMode(400, 400), "Sorting algorithms", sf::Style::Default);
	std::vector<sf::RectangleShape> numbers;

	randomiseElements(numbers, window);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				window.close();
			}

			if (event.type==sf::Event::KeyPressed) {
				if (event.key.code == sf::Keyboard::Space) {
					sort(numbers, window);
				}
				if (event.key.code == sf::Keyboard::R) {
					randomiseElements(numbers, window);
				}
			}
		}
		window.clear(sf::Color::Black);
		drawArray(numbers, window);
		window.display();
	}
}