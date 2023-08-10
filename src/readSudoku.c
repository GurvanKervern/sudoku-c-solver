#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp = fopen("sudokus/sudoku.txt", "r");
	if(fp == NULL)
	{
	    printf("problem opening the sudoku file");
	    exit(-1);
	}
	char title[50] = {0};
	char grid[9][9];
	fgets(title, 50, fp);
	printf("%s", title);
	char digit;
	for(int i = 0;  i < 9; i++)
	{
		for(int j = 0; j < 11; j++)
		{
			digit = fgetc(fp);
			if(j < 10) grid[i][j] = digit;
			printf("%c", digit);
		}
	}
	for(int i = 0;  i < 9; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			printf("|%c", grid[i][j] == '0'? ' ':grid[i][j] );
		}
		printf("|\n");
		//printf("-------------------\n");
	}
}
