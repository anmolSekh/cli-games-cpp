#include <iostream>
#ifndef ROCKPAPERSCISSORS_H
#define ROCKPAPERSCISSORS_H
class RockPaperScissors {
    private:
        int rounds;
    public:
        RockPaperScissors();
        RockPaperScissors(int r);

        void play();
};
#endif