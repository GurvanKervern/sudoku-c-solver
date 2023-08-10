#include "sudoku_reader.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char buffer[50] = { 0 };
    int **grid = { 0 };
    //int grid[9][9] = { 0 };
    FILE *fp = fopen("sudokus/sudoku_easy.txt", "r");
    if(fp == NULL)
    {
        printf("problem opening the sudoku file");
        exit(-1);
    }
    else
    {
        fgets(buffer, 50, fp);
        grid = read_grid(fp);
    }       
    print_grid(grid);
}

int** read_grid(FILE * fp)
{
    int** grid;
    grid = malloc(sizeof(int) * 9 * 9);

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            grid[i][j] = fgetc(fp) - '0';
            printf("%d ", grid[i][j]);
            fgetc(fp);
        }
        grid[i][9] = fgetc(fp) - '0';
        fgetc(fp);
    }
    return grid;
}

void print_grid(int grid[9][9])
{
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}
