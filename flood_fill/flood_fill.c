#include <stdlib.h>
#include <stdio.h>
typedef struct  s_point{
    int           x;
    int           y;
}               t_point;


void flood_fill2(char **tab, t_point size, t_point begin, char c)
{
    if (begin.x < 0 || begin.y < 0 || begin.x >= size.x || begin.y >= size.y)
        return ;

    if (tab[begin.y][begin.x] != c)
        return ;

    tab[begin.y][begin.x] = 'F';

    t_point new= {begin.x + 1, begin.y};
    flood_fill2(tab, size, new, c);

    t_point new1= {begin.x, begin.y + 1};
    flood_fill2(tab, size, new1, c);

    t_point new2 = {begin.x - 1, begin.y};
    flood_fill2(tab, size, new2, c);

    t_point new3 = {begin.x, begin.y - 1};
    flood_fill2(tab, size, new3 , c);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
    flood_fill2(tab, size, begin, tab[begin.y][begin.x]);
}