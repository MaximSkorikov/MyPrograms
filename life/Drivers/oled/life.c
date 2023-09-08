#include "life.h"
#include<stdlib.h>
#include <stdlib.h>
#include<time.h>
#include "ssd1306.h"

int world1[LINES][COLUMNS];
int world2[LINES][COLUMNS];

void init(void)
{
    srand (time(NULL));
     for (int i = 0; i < LINES; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            world1[i][j] = rand()%2;
        }
    }
}

void show(void)
{ SSD1306_COLOR color;
    for (int i = 0; i < LINES ; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
        	if(world1[i][j])
        	color =  White;
        	else
        		color =  Black;
        	ssd1306_DrawPixel(j, i, color);
        }
    }

}

int norm(int n, int limit)
{
    return (n+limit)%limit;
}

int count_of_neighbor(int y, int x)
{
    int neighbor = 0;
    for(int i = - 1; i <= 1; i++)
    {
        for(int j = - 1; j <= 1; j++)
        {
         int coorx = norm(x+i, COLUMNS);
         int coory = norm(y+j, LINES);

         neighbor += world1[coory][coorx];
        }
    }
    neighbor -=world1[y][x];

    return neighbor;
}

int cell_will_live(int y, int x)
{
    int neighbor = count_of_neighbor(y,x);

    if(neighbor == 2 || neighbor == 3)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int cell_will_born(int y, int x)
{
    int neighbor = count_of_neighbor(y,x);
    if(neighbor == 3 )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int cell_next_state(int y,int x)
{
    if(world1[y][x] == 1)
    {
       return cell_will_live(y,x);
    }
    else
    {
        return cell_will_born(y,x);
    }
}

void fill_next_generation(void)
{
    for(int i=0;i < LINES;i++)
    {
        for( int j=0; j<COLUMNS; j++)
        {
            world2[i][j] = cell_next_state(i,j);
        }
    }
}

void update_generation(void)
{
    fill_next_generation();

    for(int i=0;i < LINES;i++)
    {
        for( int j=0; j<COLUMNS; j++)
        {
            world1[i][j] = world2[i][j];
        }
    }
}
