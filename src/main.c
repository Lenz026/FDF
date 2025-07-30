#include <raylib.h>
#include "../include/fdf.h"

int main(void){
    struct s_env env;
    env.height = 600;
    printf("%d", env.height);
    InitWindow(800, 600, "Ridge FDF rebuild - Raylib");
    SetTargetFPS(60);

    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        DrawLine(100, 100, 200, 100, RED);
        DrawLine(200, 100, 200, 200, GREEN);
        // DrawText("Hello, FDF with Raylib!", 350, 200, 20, WHITE);

        EndDrawing();

    }
    CloseWindow();
    return 0;
}