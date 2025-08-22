#include "../include/fdf.h"

//PATH R:REPO rebuilds/FDF/map.fdf

int main(int argc, char **argv){


    t_env *env;
    
    open_file();

    env = init_env();
    InitWindow(env->width, env->height, "Ridge FDF rebuild - Raylib");
    
    SetTargetFPS(env->fps);
    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        /*
            Draw things here, for example:
            Call DrawLine to draw lines, or DrawText to display text.
            Example:
            DrawLine(100, 100, 200, 100, RED);
            */
        open_file();
        draw_grid(env);

        // DrawText("Hello, FDF with Raylib!", 350, 200, 20, WHITE);
        EndDrawing();
    }
    CloseWindow();
    return (0);
}

// int main(void){
//     struct s_env env;
//     env.height = 600;
//     printf("-");
//     char stuff = open_file(&env, "R:\\REPO rebuilds\\FDF\\map.fdf");
//     printf("%d", env.height);
//     printf("%c", stuff);
//     printf("-");
//     InitWindow(800, 600, "Ridge FDF rebuild - Raylib");
//     SetTargetFPS(60);

//     while (!WindowShouldClose()){
//         BeginDrawing();
//         ClearBackground(BLACK);
//         DrawLine(100, 100, 200, 100, RED);
//         DrawLine(200, 100, 200, 200, GREEN);
//         // DrawText("Hello, FDF with Raylib!", 350, 200, 20, WHITE);

//         EndDrawing();

//     }
//     CloseWindow();
//     return 0;
// }