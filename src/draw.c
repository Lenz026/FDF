#include "../include/fdf.h"

/*
    This is a placeholder function for drawing.
    It should be replaced with actual drawing logic.
*/

// void draw(t_env *env)
// {
//     t_m3 *d2 = NULL;
//     t_m3 *left = NULL;
//     int i = 0;

//     clear(env);
// }

void draw_grid(t_env *env)
{
    int spacing = 20;  // pixels between lines
    int rows = env->grid_height / spacing;
    int cols = env->grid_width / spacing;

    /*
        use this as basis for drawing grid from .fdf file 
    */
    for (int i = 0; i <= cols; i++) {
        int x = i * spacing;
        DrawLine(x, 0, x, env->height, DARKGRAY);
    }

    // Draw horizontal lines
    for (int j = 0; j <= rows; j++) {
        int y = j * spacing;
        DrawLine(0, y, env->width, y, DARKGRAY);
    }
}
