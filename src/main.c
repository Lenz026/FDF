#include "raylib.h"

int main(void){
    InitWindow(800, 600, "Ridge FDF rebuild - Raylib");
    SetTargetFPS(60);

    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        DrawLine(100, 100, 200, 100, RED);
        DrawLine(200, 100, 200, 200, GREEN);

        EndDrawing();

    }
    CloseWindow();
    return 0;
}