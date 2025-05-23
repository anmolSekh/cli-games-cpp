#include <iostream>
#include "cli-games-cpp/rockPaperScissors.hpp"
//add all of the includes for each game here
#ifndef GAMEMENU_H
#define GAMEMENU_H
class GameMenu {
    public:
        void greet() const;
        void options() const;
};
#endif