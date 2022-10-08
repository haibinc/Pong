//
// Created by Haibin Cao on 10/7/22.
//

#ifndef BOUNCINGBALL_BALL_H
#define BOUNCINGBALL_BALL_H
#include <iostream>
#include <SFML/Graphics.hpp>

class Ball {
public:
    Ball();
    void run();
    void bounce(sf::Vector2i window);
private:
    void processEvents();
    void update();
    void render();
private:
    double speedX = 0.2;
    double speedY = 0.2;
    sf::RenderWindow window;
    sf::CircleShape ball;
};


#endif //BOUNCINGBALL_BALL_H
