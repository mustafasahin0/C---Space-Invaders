#include <raylib.h>

int main() 
{
    Color grey = {29, 29, 27, 255};
    int windowWith = 750;
    int windowHeight = 750;

    InitWindow(windowWith, windowHeight, "C++ Space Invaders");
    SetTargetFPS(60);

    while(WindowShouldClose() == false) {

        BeginDrawing();
        ClearBackground(grey);
        
        EndDrawing();
    }

    CloseWindow();
}