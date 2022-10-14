//
// Created by Haibin Cao on 10/10/22.
//

#ifndef BOUNCINGBALL_PADDLE_H
#define BOUNCINGBALL_PADDLE_H
#include <iostream>
#include <SFML/Graphics.hpp>
class Paddle : public sf::RectangleShape
{
public:
    Paddle();
    Paddle(sf::Vector2f size, sf::Vector2f position, sf::Color color, double outlineSize);
    sf::FloatRect getGlobalBounds() const;
    void upAndDown1(sf::Vector2u window);
    void upAndDown2(sf::Vector2u window);
private:
    sf::Vector2f speed;
};


#endif //BOUNCINGBALL_PADDLE_H
