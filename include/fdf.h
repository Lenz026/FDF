#ifndef FDF_H
#define FDF_H
#include "../../old_repos/libft/libft.h"
#include <raylib.h>
#include <math.h>
#include <stdio.h>

typedef struct s_env{
    int grid_width;
    int grid_height;
    int width;
    int height;
    int fps;
    void *win;
} t_env;

typedef struct s_m3
{
    double x;
    double y;
    double z;
    struct s_m3 *next;
    char end;
} t_m3;


// int open_file(t_env *env, char *file);
// int open_file(t_env *env);
int open_file();
// int read_file(int fd, t_env *env);
int read_file(int fd);
void draw_grid(t_env *env);
t_env *init_env(void);


#endif