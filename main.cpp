#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

const int WIDTH = 8;
const int HEIGHT = 8;

struct Player {
    std::string Name;
    int Gold;
    int Health;
    int attackPower;
};

struct Monster {
    int Health;
    int attackPower;
};


int main() {
    Player player;
    Monster monster;

    std::cout << "Death to all!";


    return 0;
}