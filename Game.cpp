//
// Created by Haibin Cao on 10/7/22.
//

#include "Game.h"

Game::Game()
: window(sf::VideoMode(1500, 900), "Deez")
{
    window.setKeyRepeatEnabled(false);
}

void Game::run()
{
    Ball ball_1(80, 300, 200, sf::Color::Red, sf::Vector2f(0.4,0.4));
    Paddle paddle_1(sf::Vector2f({50,130}), sf::Vector2f({100,400}), sf::Color::Red, 5);
    Paddle paddle_2(sf::Vector2f({50,130}), sf::Vector2f({1400,400}), sf::Color::Red, 5);

    while(window.isOpen())
    {
        sf::Event event{};
        while(window.pollEvent(event))
        {
            switch (event.type) {
                case sf::Event::Closed : {
                    window.close();
                    break;
                }
            }
        }
        window.clear(sf::Color::Black);
        window.draw(ball_1);
        window.draw(paddle_2);
        window.draw(paddle_1);
        ball_1.bounceCollision(window.getSize());
        paddle_1.upAndDown1(window.getSize());
        paddle_2.upAndDown2(window.getSize());
        ball_1.ballCollision(paddle_1.getGlobalBounds(), paddle_2.getGlobalBounds());
        window.display();
    }
}








