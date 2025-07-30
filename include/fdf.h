#ifndef FDF_H
#define FDF_H
#include "../../old repos/libft/libft.h"
#include <raylib.h>
#include <math.h>
#include <stdio.h>

typedef struct s_env{
    int width;
    int height;
    int fps;
} t_env;

int open_file(t_env *env, char *file);
// int read_file(int fd, t_env *env);
t_env *init_env(void);


#endif