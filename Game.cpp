//
// Created by Haibin Cao on 10/7/22.
//

#include "Game.h"
#include "Ball.h"

Game::Game()
: window(sf::VideoMode(1200, 1200), "Deez")
{
}

void Game::run()
{
    Ball ball_1(80, 300, 200, sf::Color::Red, 0.5, 0.5);
    Ball ball_2(50, 500, 700, sf::Color::Blue, 1, 1);

    while(window.isOpen())
    {
        sf::Event event;
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
        window.draw(ball_2);
        ball_1.bounce(sf::Vector2i(1200,1200));
        ball_2.bounce(sf::Vector2i(1200,1200));
        window.display();
    }
}



