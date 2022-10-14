//
// Created by Haibin Cao on 10/8/22.
//

#include "Ball.h"

Ball::Ball()
: Ball(100, 300, 300, sf::Color::Red, sf::Vector2f({0.3,0.3}))
{

}

Ball::Ball(const float& radius, const float& positionX, const float& positionY, const sf::Color& color, sf::Vector2f speed)
: speed(speed)
{
    setRadius(radius);
    setPosition(positionX, positionY);
    setFillColor(color);
}

void Ball::bounceCollision(sf::Vector2u window)
{
    if(getGlobalBounds().top + getGlobalBounds().height >= window.y)
    {
        speed.y = -speed.y;
    }
    else if(getGlobalBounds().top <= 0)
    {
        speed.y = -speed.y;
    }
    else if(getGlobalBounds().left + getGlobalBounds().width >= window.x)
    {
        speed.x = -speed.x;
        counter1++;
        std::cout << "Paddle 1 scored " << counter1 << " point(s)." << std::endl;
    }
    else if(getGlobalBounds().left <= 0)
    {
        speed.x = -speed.x;
        counter2++;
        std::cout << "Paddle 2 scored " << counter2 << " point(s)." << std::endl;
    }
    move(speed.x,speed.y);
}

void Ball::ballCollision(sf::FloatRect left, sf::FloatRect right)
{
    if(left.intersects(getGlobalBounds()))
    {
        speed.x = -speed.x;
        speed.y = -speed.y;
    }
    else if(right.intersects(getGlobalBounds()))
    {
        speed.x = -speed.x;
        speed.y = -speed.y;
    }
}

sf::FloatRect Ball::getGlobalBounds() const
{
    return Shape::getGlobalBounds();
}
