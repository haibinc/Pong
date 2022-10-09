//
// Created by Haibin Cao on 10/8/22.
//

#ifndef BOUNCINGBALL_BALL_H
#define BOUNCINGBALL_BALL_H
#include <SFML/Graphics.hpp>
#include <string>
#include "Game.h"

class Ball : public sf::Drawable
{
public:
    Ball();
    Ball(const float& radius, const float& positionX, const float& positionY, const sf::Color& color, double speedX, double speedY);
    void bounce(sf::Vector2i window);
private:
    float radius, positionX, positionY;
    sf::Color color;
    double speedX, speedY;
    sf::CircleShape ball;
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
};


#endif //BOUNCINGBALL_BALL_H
