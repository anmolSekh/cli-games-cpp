#include "cli-games-cpp/gameMenu.hpp"

void GameMenu::greet() const{
    std::cout << "Welcome to my games!" << std::endl;
    std::cout << "Choose a game from the following:" << std::endl;
}
void GameMenu::options() const{
    int i = 0;
    int min = 1;
    int max = 1;
    int x;
    std::cout << "1. Rock Paper Scissors" << std::endl;
    while (true) {
        std::cin >> i;

        if(std::cin.fail() || i < min || i > max) {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Give a number from the menu and press enter." << std::endl;
        } else {
            break;
        }
    }
    std::cout << "Welcome to rock paper scissors!\n";
    
    std::cout <<"Best of?\n";
    while (true) {
        std::cin >> x;

        if(std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Give a number" << std::endl;
        } else {
            break;
        }
    }
    // std::cin >> x;
    if(x == 0) {
        RockPaperScissors * rps = new RockPaperScissors();
        rps->play();
    } else {
        RockPaperScissors * rps = new RockPaperScissors(x);
        rps->play();
    }
    
     
}