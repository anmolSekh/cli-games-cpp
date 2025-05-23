#include "cli-games-cpp/rockPaperScissors.hpp"
bool bestOfN(int n, int x, int y) {
    //see if any int has gotten best of
    //if remaining number can still beat current number
    //if nx + y < x
    int nx = n-x; //
    int ny = n-y; //
    if(x > nx || y > ny) {
        return true;
    }
    return false;
}
RockPaperScissors::RockPaperScissors() {
    rounds = 1;
}

RockPaperScissors::RockPaperScissors(int r) {
    rounds = r;
}

void RockPaperScissors::play() {
    char choice;
    char cpu_choice;
    int cpu_num;
    int wins = 0;
    int loss = 0;
    std::cout << "Best of " << rounds << std::endl;
    std::cout << "How to play:\n"; 
    std::cout << "R for Rock\nP for Paper\nS for Scissors\n";
    // while (true) {
    //     std::cin >> choice;
    // }
    
    while(!bestOfN(rounds,wins,loss)) {
        while (true) {
            std::cin >> choice;

            if(std::cin.fail() || choice != 'r' && choice != 'R' && choice != 'p' && choice != 'P' && choice != 's' && choice != 'S') {
                std::cin.clear();
                std::cin.ignore();
                std::cout << "Wrong input" << std::endl;
            } else {
                break;
            }
        }
        if (choice == 'r') {
            choice = 'R';
        } else if (choice == 'p') {
            choice = 'P';
        } else {
            choice = 'S';
        }
        cpu_num = rand() % 3; //almost always generating '1'
        // std::cout << "Random number generated:\t" << cpu_num << std::endl; 
        if (cpu_num == 0) {
            cpu_choice = 'R';
        } else if (cpu_num == 1) {
            cpu_choice = 'P';
        } else {
            cpu_choice ='S';
        }
        if(choice == 'R' && cpu_choice == 'S' || 
        choice == 'S' && cpu_choice == 'P' ||
        choice == 'P' && cpu_choice == 'R') {
            wins++;
            std::cout << choice << " beats " << cpu_choice << std::endl;
            std::cout << "ROUND WIN!\n";
        
        } else if(choice == cpu_choice) {
            std::cout << "DRAW!\n";
        } else {
            loss++;
            std::cout << cpu_choice << " beats " << choice << std::endl;
            std::cout << "ROUND LOSE!\n";
        }
    }

    std::cout << wins
                <<"-" << loss << std::endl;
    if(wins > loss) {
        std::cout << "YOU WIN!!!\n";
    } else {
        std::cout << "YOU LOSE!!!\n";
    }
    
    /*
        Create a loop, reject wrong inputs, accept both lower and uppercase

        Create a helper functions file, add a wrong input one
    */
}