#include "../include/fdf.h"

// int open_file(t_env *env, char *file){
// int open_file(t_env *env){
int open_file(void){
    const char *map_path = "R:/REPO_rebuilds/FDF/map.fdf";
    
    int fd;
    
    
    fd = open(map_path, O_RDONLY);
    
    if (fd > 0)
        return (read_file(fd));
    // printf("%d",read_file(fd));
    if (fd < 0)
        return (0);
    // return (read_file(fd, env));
    return (0);
    
    
}

// int read_file(int fd, t_env *env){
int read_file(int fd){
    // int x;
    // int y;
    char *line;
    
    // y = 0;
    /*
        REF TO GET NEXT LINE IS BROKE
    */
    // printf("GNL --- :%p\n", get_next_line);
    while (get_next_line(fd, &line) == 1)
    {
        printf("-");
        printf("%s\n", line);
        printf("-");
    }
    return (0);
}
// int read_file(int fd, t_env *env)
// {
//     int x;
//     int y;
//     char *line;

//     y = 0;
//     while (get_next_line(fd, &line) == 1)
//     {
//         x = 0;
//         while (*line != '\0')
//         {
//             if(*line == ' ')
//                 line++;
//             else
//             {
//                 if (*line != '-' && (*line < '0' || *line > '9'))
//                     return (0);
                
//             }
//         }
//     }
//     return (0);
// }