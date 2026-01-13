#include <raylib.h>
#include "game.hpp"

int main() 
{
    Color grey = {29, 29, 27, 255};
    int windowWith = 750;
    int windowHeight = 750;

    InitWindow(windowWith, windowHeight, "C++ Space Invaders");
    SetTargetFPS(60);

    Game game;

    while(WindowShouldClose() == false) {

        game.HandleInput();

        BeginDrawing();
        ClearBackground(grey);
        game.Draw();
        
        EndDrawing();
    }

    CloseWindow();
}