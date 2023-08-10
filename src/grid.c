#include <stdio.h>

void read_sudoku(FILE *fp, char grid[9][9])
{
	char title[50] = {0};
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
}

void print_grid(char grid[9][9])
{
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
