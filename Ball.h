//
// Created by Haibin Cao on 10/8/22.
//

#ifndef BOUNCINGBALL_BALL_H
#define BOUNCINGBALL_BALL_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include "Paddle.h"

class Ball : public sf::CircleShape
{
public:
    Ball();
    Ball(const float& radius, const float& positionX, const float& positionY, const sf::Color& color, sf::Vector2f speed);
    void bounceCollision(sf::Vector2u window);
    void ballCollision(sf::FloatRect left, sf::FloatRect right);
    sf::FloatRect getGlobalBounds() const;
private:
    int counter1 = 0;
    int counter2 = 0;
    sf::Color color;
    sf::Vector2f speed;
    Paddle paddle;
};


#endif //BOUNCINGBALL_BALL_H
