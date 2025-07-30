#include "../include/fdf.h"

int open_file(t_env *env, char *file){
    
    int fd;
    // fd = open(file, O_DIRECTORY);
    // if (fd >= 0)
    //     return (0);
    fd = open(file, O_RDONLY);
    printf("%d",fd);
    if (fd < 0)
        return (0);
    // return (read_file(fd, env));
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