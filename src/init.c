#include "../include/fdf.h"
/*
    Dont forget to include the path here instead of "read.c"
*/
t_env *init_env(void){
    t_env *env;
    env = malloc(sizeof(t_env));
    env->width = 1000;
    env->height = 1000;
    env->grid_width = 200;
    env->grid_height = 60;
    env->fps = 60;
    return (env);
}
