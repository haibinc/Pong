//
// Created by Haibin Cao on 10/10/22.
//

#include "Paddle.h"

Paddle::Paddle()
: Paddle(sf::Vector2f({50,100}), sf::Vector2f({100,400}), sf::Color::Red, 5)
{
}

Paddle::Paddle(sf::Vector2f size, sf::Vector2f position, sf::Color color, double outlineSize)
{
    setSize(size);
    setOutlineColor(color);
    setOutlineThickness(outlineSize);
    setPosition(position);
}

sf::FloatRect Paddle::getGlobalBounds() const
{
    return Shape::getGlobalBounds();
}

void Paddle::upAndDown1(sf::Vector2u window)
{
    sf::Vector2f speed({0,0});
    if(getGlobalBounds().top <= 0)
    {
        speed.y = 0;
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            speed.y = 1.f;
        }
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        speed.y = -1.f;
    }

    if(getGlobalBounds().top + getGlobalBounds().height >= window.y)
    {
        speed.y = 0;
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            speed.y = -1.f;
        }
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        speed.y = 1.f;
    }
    move(speed);
}

void Paddle::upAndDown2(sf::Vector2u window)
{
    sf::Vector2f speed({0,0});
    if(getGlobalBounds().top <= 0)
    {
        speed.y = 0;
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::K))
        {
            speed.y = 1.f;
        }
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
    {
        speed.y = -1.f;
    }

    if(getGlobalBounds().top + getGlobalBounds().height >= window.y)
    {
        speed.y = 0;
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::I))
        {
            speed.y = -1.f;
        }
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::K))
    {
        speed.y = 1.f;
    }
    move(speed);
}





