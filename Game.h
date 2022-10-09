//
// Created by Haibin Cao on 10/7/22.
//

#ifndef BOUNCINGBALL_GAME_H
#define BOUNCINGBALL_GAME_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Ball.h"

class Game {
public:
    Game();
    void run();
private:
    sf::RenderWindow window;
};


#endif //BOUNCINGBALL_GAME_H
