#include "../include/fdf.h"

t_env *init_env(void){
    t_env *env;
    env = malloc(sizeof(t_env));
    env->width = 1000;
    env->height = 1000;
    env->fps = 60;
    return (env);
}
