#include <raylib.h>
#include "game.hpp"
#include "laser.hpp"

int main() 
{
    Color grey = {29, 29, 27, 255};
    int windowWith = 750;
    int windowHeight = 750;

    InitWindow(windowWith, windowHeight, "C++ Space Invaders");
    SetTargetFPS(60);

    Game game;
    Laser laser = Laser({100, 100}, -7);

    while(WindowShouldClose() == false) {

        game.HandleInput();
        laser.Update();

        BeginDrawing();
        ClearBackground(grey);
        game.Draw();
        laser.Draw();
        
        EndDrawing();
    }

    CloseWindow();
}