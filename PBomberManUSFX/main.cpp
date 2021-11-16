#include <string>

#include "SDL.h"

#include "GameManager.h"

int main(int /*argc*/, char** /*argv[]*/)
{
    // init game
    GameManager* game = GameManager::getInstance();
    GameManager* gameDos = GameManager::getInstance();
    //game = new GameManager(std::string("Bomberman USFX"), 800, 600);
    // run game loop
    cout << game << endl;
    cout << gameDos << endl;
    game->execute();

    return 0;
}
