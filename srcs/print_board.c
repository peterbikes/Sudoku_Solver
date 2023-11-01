/* ************************************************************************** */
/*                                                                __          */
/*   print_board.c                                               / _)         */
/*                                                      _/\/\/\_/ /           */
/*         By: pedro_mota                             _|         /            */
/*     Github: github.com/peterbikes                _|  (  | (  |             */
/*   Linkedin: linkedin.com/in/pedrosmpm/         /__.-'|_|--|_|              */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/sudoku_solver.h"

void	print_board(t_board *sudoku)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	printf("\x1b[37;1m+-=====================================-+\n");
	while (i < 3)
	{
		printf("\x1b[37;1m||");
		a = 0;
		while (a < 3)
		{
			if (sudoku->board[i][a] == -1)
				printf(" \x1b[47m "RESET" \x1b[37;1m|");
			else if (sudoku->board[i][a] == 0)
				printf("   \x1b[37;1m|");
			else if (sudoku->keys[i][a] == false)
				printf(""LOCKED" %d "RESET"\x1b[37;1m|", sudoku->board[i][a]);
			else if (sudoku->keys[i][a] == true)
				printf(""UNLOCKED" %d "RESET"\x1b[37;1m|", sudoku->board[i][a]);
			a++;
		}
		printf("\x1b[37;1m|");
		while (a < 6)
		{
			if (sudoku->board[i][a] == -1)
				printf(" \x1b[47m "RESET" \x1b[37;1m|");
			else if (sudoku->board[i][a] == 0)
				printf("   \x1b[37;1m|");
			else if (sudoku->keys[i][a] == false)
				printf(""LOCKED" %d "RESET"\x1b[37;1m|", sudoku->board[i][a]);
			else if (sudoku->keys[i][a] == true)
				printf(""UNLOCKED" %d "RESET"\x1b[37;1m|", sudoku->board[i][a]);
			a++;
		}
		printf("\x1b[37;1m|");
		while (a < 9)
		{
			if (sudoku->board[i][a] == -1)
				printf(" \x1b[47m "RESET" \x1b[37;1m|");
			else if (sudoku->board[i][a] == 0)
				printf("   \x1b[37;1m|");
			else if (sudoku->keys[i][a] == false)
				printf(""LOCKED" %d "RESET"\x1b[37;1m|", sudoku->board[i][a]);
			else if (sudoku->keys[i][a] == true)
				printf(""UNLOCKED" %d "RESET"\x1b[37;1m|", sudoku->board[i][a]);
			a++;
		}
		printf("\x1b[37;1m|");
		printf("\n");
		if (i < 2)
			printf("\x1b[37;1m||---|---|---||---|---|---||---|---|---||\n");
		i++;
	}
	printf("\x1b[37;1m||===========||===========||===========||\n");
	while (i < 6)
	{
		printf("\x1b[37;1m||");
		a = 0;
		while (a < 3)
		{
			if (sudoku->board[i][a] == -1)
				printf(" \x1b[47m "RESET" \x1b[37;1m|");
			else if (sudoku->board[i][a] == 0)
				printf("   \x1b[37;1m|");
			else if (sudoku->keys[i][a] == false)
				printf(""LOCKED" %d "RESET"\x1b[37;1m|", sudoku->board[i][a]);
			else if (sudoku->keys[i][a] == true)
				printf(""UNLOCKED" %d "RESET"\x1b[37;1m|", sudoku->board[i][a]);
			a++;
		}
		printf("\x1b[37;1m|");
		while (a < 6)
		{
			if (sudoku->board[i][a] == -1)
				printf(" \x1b[47m "RESET" \x1b[37;1m|");
			else if (sudoku->board[i][a] == 0)
				printf("   \x1b[37;1m|");
			else if (sudoku->keys[i][a] == false)
				printf(""LOCKED" %d "RESET"\x1b[37;1m|", sudoku->board[i][a]);
			else if (sudoku->keys[i][a] == true)
				printf(""UNLOCKED" %d "RESET"\x1b[37;1m|", sudoku->board[i][a]);
			a++;
		}
		printf("\x1b[37;1m|");
		while (a < 9)
		{
			if (sudoku->board[i][a] == -1)
				printf(" \x1b[47m "RESET" \x1b[37;1m|");
			else if (sudoku->board[i][a] == 0)
				printf("   \x1b[37;1m|");
			else if (sudoku->keys[i][a] == false)
				printf(""LOCKED" %d "RESET"\x1b[37;1m|", sudoku->board[i][a]);
			else if (sudoku->keys[i][a] == true)
				printf(""UNLOCKED" %d "RESET"\x1b[37;1m|", sudoku->board[i][a]);
			a++;
		}
		printf("\x1b[37;1m|");
		printf("\n");
		if (i < 5)
			printf("\x1b[37;1m||---|---|---||---|---|---||---|---|---||\n");
		i++;
	}
	printf("\x1b[37;1m||===========||===========||===========||\n");
	while (i < 9)
	{
		printf("\x1b[37;1m||");
		a = 0;
		while (a < 3)
		{
			if (sudoku->board[i][a] == -1)
				printf(" \x1b[47m "RESET" \x1b[37;1m|");
			else if (sudoku->board[i][a] == 0)
				printf("   \x1b[37;1m|");
			else if (sudoku->keys[i][a] == false)
				printf(""LOCKED" %d "RESET"\x1b[37;1m|", sudoku->board[i][a]);
			else if (sudoku->keys[i][a] == true)
				printf(""UNLOCKED" %d "RESET"\x1b[37;1m|", sudoku->board[i][a]);
			a++;
		}
		printf("\x1b[37;1m|");
		while (a < 6)
		{
			if (sudoku->board[i][a] == -1)
				printf(" \x1b[47m "RESET" \x1b[37;1m|");
			else if (sudoku->board[i][a] == 0)
				printf("   \x1b[37;1m|");
			else if (sudoku->keys[i][a] == false)
				printf(""LOCKED" %d "RESET"\x1b[37;1m|", sudoku->board[i][a]);
			else if (sudoku->keys[i][a] == true)
				printf(""UNLOCKED" %d "RESET"\x1b[37;1m|", sudoku->board[i][a]);
			a++;
		}
		printf("\x1b[37;1m|");
		while (a < 9)
		{
			if (sudoku->board[i][a] == -1)
				printf(" \x1b[47m "RESET" \x1b[37;1m|");
			else if (sudoku->board[i][a] == 0)
				printf("   \x1b[37;1m|");
			else if (sudoku->keys[i][a] == false)
				printf(""LOCKED" %d "RESET"\x1b[37;1m|", sudoku->board[i][a]);
			else if (sudoku->keys[i][a] == true)
				printf(""UNLOCKED" %d "RESET"\x1b[37;1m|", sudoku->board[i][a]);
			a++;
		}
		printf("\x1b[37;1m|");
		printf("\n");
		if (i < 8)
			printf("\x1b[37;1m||---|---|---||---|---|---||---|---|---||\n");
		i++;
	}
	printf("\x1b[37;1m+-=====================================-+\n");
}
