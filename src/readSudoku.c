#include <stdio.h>
#include <stdlib.h>

#include "objects.h"
#include "grid.h"

int main(int argc, char *argv[])
{
	FILE *fp = fopen("sudokus/sudoku.txt", "r");
	if(fp == NULL)
	{
	    printf("problem opening the sudoku file");
	    exit(-1);
	}
	char grid[9][9];
	read_sudoku(fp, grid);
	print_grid(grid);
}
