/*
#include<SFML/Graphics.hpp>
#include<cmath>
#include<iostream>
using namespace sf;
using namespace std;
int main()
{
	RenderWindow window(VideoMode(600, 600), "MAZE game");
	int gameMap[25 * 25];
	RectangleShape displayRects[25 * 25];

	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j <25; j++)
		{
			displayRects[i + j * 25].setPosition(i * 40.0f, j * 40.0f);
			displayRects[i + j * 25].setSize(Vector2f(40.0f, 40.0f));
			displayRects[i + j * 25].setOutlineThickness(1.0f);
			displayRects[i + j * 25].setOutlineColor(Color(0, 0, 0));

			if (rand() / (float)RAND_MAX < 0.22f)
			{
				gameMap[i + j * 15] = 1;
				displayRects[i + j * 15].setFillColor(Color(143, 0, 255));
			}
		}
	}
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				window.close();
			}
		}
		window.clear(Color(20, 66, 210));
		for (int i = 0; i < 25 * 25; i++)
		{
			window.draw(displayRects[i]);
		}
		window.display();
	}
}*/