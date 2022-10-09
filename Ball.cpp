//
// Created by Haibin Cao on 10/8/22.
//

#include "Ball.h"

//Ball::Ball()
//: Ball(100, 300, 300, sf::Color::Red, 0.1, 0.1)
//{
//
//}

Ball::Ball(const float& radius, const float& positionX, const float& positionY, const sf::Color& color, double speedX, double speedY)
{
    ball.setRadius(radius);
    ball.setPosition(positionX, positionY);
    ball.setFillColor(color);
    this->speedX = speedX;
    this->speedY = speedY;
}

void Ball::bounce(sf::Vector2i window)
{
    int width = window.x;
    int height = window.y;

    if(ball.getPosition().x > (width - ball.getRadius()*2))
    {
        speedX = -speedX;
    }
    else if(ball.getPosition().x < 0)
    {
        speedX = -speedX;
    }
    else if(ball.getPosition().y > (height - ball.getRadius()*2))
    {
        speedY = -speedY;
    }
    else if(ball.getPosition().y < 0)
    {
        speedY = -speedY;
    }
    ball.move(speedX, speedY);
}

void Ball::draw(sf::RenderTarget& window, sf::RenderStates states) const
{
    window.draw(ball, states);
}
