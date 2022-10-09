//
// Created by Haibin Cao on 10/7/22.
//

#include "Ball.h"

Ball::Ball()
: window(sf::VideoMode(1920, 1080), "Deez"), ball()
{
    ball.setRadius(100.f);
    ball.setPosition({700.f,400.f});
    ball.setFillColor(sf::Color::Blue);
}

void Ball::run()
{
    while(window.isOpen())
    {
        processEvents();
        update();
        bounce(sf::Vector2i(1920, 1080));
        render();
    }
}

void Ball::processEvents()
{
    sf::Event event;
    while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
}


void Ball::update()
{
}

void Ball::render()
{
    window.clear();
    window.draw(ball);
    window.display();
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

void Ball::setSpeed(double speedX, double speedY)
{
    Ball::speedX = speedX;
    Ball::speedY = speedY;
}
