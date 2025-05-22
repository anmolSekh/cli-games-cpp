#include "cli-game-cpp"

void GameMenu::greet() {
    std::cout << "Welcome to my games!" << std::endl;
    std::cout << "Choose a game from the following:" << std::endl;
}
void GameMenu::options() {
    int i = 0;
    int min = 1;
    int max = 1;
    std::cout << "1. Rock Paper Scissors" << std::endl;
    while (true) {
        std::cin >> i;

        if(cin.fail() || i < min && i > max) {
            std::cout << "Give a number from the menu and press enter." << std::endl;
        } else {
            break;
        }
    }
    std::cout << "Welcome to rock paper scissors!\n";
     
}