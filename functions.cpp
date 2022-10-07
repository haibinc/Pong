//
// Created by Haibin Cao on 10/3/22.
//
#include "functions.h"
double speedX = 0.2;
double speedY = 0.2;
void bounce(sf::Vector2i window, sf::CircleShape& ball)
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
