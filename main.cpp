#include "Sorting algorithms.h"
#include "randomiseElements.h"
#include <iostream>

int main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "ru");

	std::cout << "��� ����������� ���������-����� ����������" << std::endl;
	std::cout << "�������� ������������ ��� �������� ���������� ����� ����� ��� ����� ������������� �� ������������" << std::endl;
	std::cout << "������� �����:" << std::endl;
	std::cout << "1. ���������� ���������\n2. ���������� �������\n3. ���������� ���������" << std::endl;

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
		std::cout << "������������ ����. ������������� ���������" << std::endl;
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