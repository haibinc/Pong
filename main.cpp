#include <SFML/Graphics.hpp>
#include <iostream>
#include "functions.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML Application");
    sf::CircleShape ball;
    ball.setRadius(100);
    ball.setPosition({700,400});
    ball.setFillColor(sf::Color::Blue);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        bounce(sf::Vector2i(1920, 1080), ball);
        window.clear();
        window.draw(ball);
        window.display();
    }
}