#include "newsnail.h"

#define ROWS 5
#define COLUMNS 5

int matrix[ROWS][COLUMNS];
int value = 1;

void show(void)
{

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++ )
        {
            printf("%4d " , matrix[i][j]);
        }
        printf("\n");

    }
    printf("\n");
}


void fill_upper_row(int row, int from, int to)
{
    for (int i = from; i <= to; i++ )
    {
        matrix[row][i] = value++;
    }
}


void fill_lower_row(int row, int from, int to)
{
    for (int i = from; i >= to; i-- )
    {
        matrix[row][i] = value++;
    }
}

void fill_right_column(int col, int from, int to)
{
    for (int i = from; i <= to; i++)
    {
        matrix[i][col] = value++;
    }
}

void fill_left_column(int col, int from, int to)
{
    for (int i = from; i >= to; i-- )
    {
        matrix[i][col] = value++;
    }
}

void snail(void)
{
    int left = 0;
    int right = COLUMNS-1;
    int up = 0;
    int down = ROWS-1;

    while((left <= right) && (up <= down))
    {

        fill_upper_row(up, left, right);
        fill_right_column(right, up + 1, down);
        fill_lower_row(down, right - 1, left);
        fill_left_column(left, down - 1, up + 1);

        up++;
        right--;
        down--;
        left++;

    }
}
